//
//  main.c
//  Aufgabe 5
//
//  Created by Fatih Karayüksel on 07.11.22.
//
//  Eingabe: Programmieren
//  Ausgabe: pROGRAMMIEREN

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, const char * argv[]) {
    char array[40];
    
    scanf("%s", array);
    
    for (int i = 0; array[i] != '\0'; i++) {
        if (array[i] >= 'a' && array[i] <= 'z') {
            array[i] -= 32; // 'A' = 65 in UTF-8 und + 32 ist 'a' gilt für jeden Buchstaben
        } else if (array[i] >= 'A' && array[i] <= 'Z') {
            array[i] += 32; // 'a' = 97 in UTF-8 und + 32 ist 'A' gilt für jeden Buchstaben
        }
    }
    
    printf("%s", array);
    
    return 0;
}
