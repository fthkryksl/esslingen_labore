//
//  main.c
//  Aufgabe-13
//
//  Created by Fatih Karayüksel on 18.11.22.
//
//  Ausgabe:    42
//              85
//              86


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
    int value = 42;
    int* pointer = &value;
    
    printf("%d\n", value);
    *pointer = 85;
    printf("%d\n", value);
    (*pointer)++;
    printf("%d\n", value);
    return 0;
}
