//
//  main.c
//  Aufgabe-6
//
//  Created by Fatih Karayüksel on 22.11.22.
//

#include <stdio.h>

int stringlength(char test[]) {
    int zaehler = 0;
    for (int i = 0; test[i] != '\0'; i++) {
        zaehler++;
    }
    return zaehler;
}

int main() {
    char test[] = "Hochschule Esslingen";
    printf("%s hat %d Zeichen", test, stringlength(test));
}
