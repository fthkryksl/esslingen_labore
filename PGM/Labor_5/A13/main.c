//
//  main.c
//  Aufgabe-13
//
//  Created by Fatih Karayüksel on 18.11.22.
//
//  Eingabe: 1 4 42 10
//  Ausgabe: Summe: 57
//           Durschnitt: 14.250000


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[]) {
    int laenge[4]; //ARRRAY
    
    int summe = 0;
    double durchschnitt = 0;
    
    for (int i = 0; i < 4; i++) { //Sammelt die Were
        scanf("%d", &laenge[i]); //Wird in die Variable hinzugefügt
        summe += laenge[i]; //Wird in die Summe hinzugefügt
    }
    
    durchschnitt = (float)summe/4; //Die Summe wird durch 4 geteilt, weil es die maximal Größe des Arrays ist.
    
    printf("Summe: %d\nDurchschnitt: %f", summe, durchschnitt); //Ergebniss wird geprinted.
    return 0;
}
