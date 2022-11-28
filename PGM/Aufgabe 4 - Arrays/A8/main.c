//
//  main.c
//  Aufgabe 8
//
//  Created by Fatih Karayüksel on 07.11.22.
//
//  Eingabe: 1 2 3 4 0
//  Ausgabe: Durschnitt (N=4): 2.50

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int noten[10];
    double anzahl = 0;
    double durchschnitt = 0;
    
    for (int i = 0; i <= 10; i++) {
        scanf("%d", &noten[i]);
        if (noten[i] < 1 || noten[i] > 6) {
            break;
        }
        anzahl++;
    }
    
    printf("Durchschnitt (N=%.0lf): ", anzahl);
    for (int a = 0; a < anzahl; a++) {
        durchschnitt = durchschnitt + noten[a];
    }
    if (durchschnitt == 0 && anzahl == 0) {
        durchschnitt = 0;
    } else {
        durchschnitt = durchschnitt/(anzahl);
    }
    
    printf("%.2lf", durchschnitt);
    
    return 0;
}
