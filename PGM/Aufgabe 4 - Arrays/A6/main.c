//
//  main.c
//  Aufgabe 6
//
//  Created by Fatih Karayüksel on 07.11.22.
//
//  Eingabe: Programmieren 3 7
//  Ausgabe: Programmieren 3-7: gramm

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char array[40];
    
    int startIndex, endIndex;
    
    scanf("%s %d %d", array, &startIndex, &endIndex);
    
    printf("%s %d-%d: ", array, startIndex, endIndex);
    
    for (int i = startIndex; i <= endIndex; i++) {
        printf("%c", array[i]);
    }
    printf("\n");
    return 0;
}
