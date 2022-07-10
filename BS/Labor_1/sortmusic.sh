#!/bin/bash
BASE_DIR="./sorted"
function sort_by_year(){
	for filename in *.mp3; do
		version_str=$(id3v2 --list "${filename}" | \
			grep -o "id3v[0-9] tag info for" | \
			cut -d " " -f 1)
		ver="${version_str: -1}"
		if [ "${ver}"="1" ]; then
			#Get year
			out=$(id3v2 --list "${filename}" | \
				grep -o "Year: [0-9][0-9][0-9][0-9]" | \
				cut -d " " -f 2)
		elif [ "${ver}"="2" ]; then
			out=$(id3v2 --list "${filename}" | \
				grep -o "TYER (Year): [0-9][0-9][0-9][0-9]" | \
				cut -d " " -f 3)
		fi
		#Create director if it does not exist yet
		if [ ! -d "${BASE_DIR}/${out}" ]; then
			mkdir "${BASE_DIR}/${out}"
		fi
		#Copy file to directory
		cp "${filename}" "${BASE_DIR}/${out}/${filename}"
	done
}
function sort_by_artist(){
	for filename in *.mp3; do
		version_str=$(id3v2 --list "${filename}" | \
				grep -o "id3v[0-9] tag info for" | \
				cut -d " " -f 1)
		ver="${version_str: -1}"
		if [ "${ver}"="1" ]; then
			#Get artist string
			lastChar=$(id3v2 --list "${filename}" | \
				grep -o  "Artist: [A-Za-z0-9]" | \
				cut -d " " -f 2)
		elif [ "${ver}"="2" ]; then
			artist_str=$(id3v2 --list "${filename}" | \
				grep "TPE1" | \
				cut -d " " -f 3)
			lastChar="${artist_str:1:0}"
		fi
		#Create directory if it does not exist yet
		if [ ! -d "${BASE_DIR}/${lastChar}" ]; then
			mkdir "${BASE_DIR}/${lastChar}"
		fi
		#Copy file to directory
		cp "${filename}" "${BASE_DIR}/${lastChar}/${filename}"
	done
}
function sort_by_disc(){
	for filename in *.mp3; do
		#Get album string
		version_str=$(id3v2 --list "${filename}" | \
				grep -o "id3v[0-9] tag info for" | \
				cut -d " " -f 1)
		ver="${version_str:-1}"
		if [ "${ver}"="1" ]; then
			lastChar=$(id3v2 --list "${filename}" | \
				grep -o "Album  : [A-Za-z0-9]" | \
				cut -d " " -f 4)
		elif [ "${ver}"="2" ]; then
			albumName=$(id3v2 --list "${filename}" | \
				grep "TALB" | \
				cut -d " " -f 4)
			lastChar="${albumName:1:0}"
		fi
		#Create directory if it does not exist yet
		if [ ! -d "${BASE_DIR}/${lastChar}" ]; then
			mkdir "${BASE_DIR}/${lastChar}"
		fi
		#Copy file to directory
		cp "${filename}" "${BASE_DIR}/${lastChar}/${filename}"
	done
}
function print_help(){
	echo "Usage: ./sortmusic.sh -h|y|a|d"
	echo "------------------------------"
	echo "-h --help   displays this help"
	echo "            message."
	echo "-y --year   sorts songs by"
	echo "            release year."
	echo "-a --artist sorts songs by"
	echo "            artist name."
	echo "-d --disc   sorts songs by"
	echo "            album name."
}

function prepare(){
	#Check for root privileges
	#Required for creating directories
	root=$(id -u) #returns 0 if root
	if [ ${root} -ne 0 ]; then
		echo "Root privileges required!"
		exit 0
	fi
	#Creates base directory if it does not exist
	if [ ! -d "${BASE_DIR}" ]; then
		mkdir "${BASE_DIR}"
	fi
}

if [ "$1" = "-h" -o "$1" = "--help" ]; then
	print_help
else
	prepare
	if [ "$1" = "-y" -o "$1" = "--year" ]; then
		echo "sorting songs by year..."
		sort_by_year
	elif [ "$1" = "-a" -o "$1" = "--artist" ]; then
		echo "sorting songs by artist name..."
		sort_by_artist
	elif [ "$1" = "-d" -o "$1" = "--disc" ]; then
		echo "sorting songs by album title..."
		sort_by_disc
	fi
fi
