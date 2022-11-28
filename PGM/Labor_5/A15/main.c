//
//  main.c
//  Aufgabe-15
//
//  Created by Fatih Karayüksel on 18.11.22.
//
//  Eingabe: 1 4 85 10
//  Ausgabe: 1 4 85 10
//           1 4 42 10

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int laenge[4];
    
    for (int i = 0; i < 4; i++) {
        scanf("%d", &laenge[i]);
    }
    
    int* pointer = &laenge[2];
    
    for (int i = 0; i < 4; i++) {
        printf("%d ", laenge[i]);
    }
    printf("\n");
    *pointer = 42;
    for (int i = 0; i < 4; i++) {
        printf("%d ", laenge[i]);
    }
}
