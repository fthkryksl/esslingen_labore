//
//  main.c
//  Aufgabe 9
//
//  Created by Fatih Karayüksel on 07.11.22.
//
// Eingabe: 3 5
// Ausgabe:

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, m;
    
    scanf("%d %d", &n, &m);
    
    for (int i = 1; i <= 200; i++) {
        if (i % n == 0 && i%m == 0 ) { //Überprüft, ob beide Rest gleich Null sind
            printf("fizzbuzz");
        } else if (i % n == 0 ) { //Verzweigt hier rein, falls n Rest gleich Null ist
            printf("fizz");
        } else if (i % m == 0 ) { //Verzweigt hier rein, falls m Rest gleich Null ist
            printf("buzz");
        } else { //Verzweigt hier rein, falls keine der Bedingungen true waren
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}
