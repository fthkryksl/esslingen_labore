//
//  main.c
//  Aufgabe 7
//
//  Created by Fatih Karayüksel on 07.11.22.
//
//  Eingabe: Programmieren
//  Ausgabe: nereimmargorP

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char array[40];
    
    int groesse = 0;
    
    scanf("%s", array);
    
    for (int a = 0; array[a] != '\0'; a++) {
        groesse++;
    }
    
    for (int i = groesse; i >= 0; i--) {
        if (array[i] != '\x00') {
            printf("%c", array[i]);
        }
    }
    printf("\n");
    return 0;
}
