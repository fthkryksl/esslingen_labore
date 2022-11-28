//
//  main.c
//  Aufgabe 1
//
//  Created by Fatih Karayüksel on 07.11.22.
//
//  Eingabe: 4.12 2 6 5
//  Output: Kleinste Zahl: 2.0 an Index 1

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double array [4]; //Deklaration
    
    scanf("%lf %lf %lf %lf", &array[0], &array[1], &array[2], &array[3]); //Werte werden gelesen
    
    int index = 0; //Speicher für Index
    double nummer = array[0]; //Speicher für die Zahl
    
    for (int i = 0; i < 4; i++) { //Schleife für die Anzahl der Array
        if (array[index] > array[i]) { //Überprüfung der Zahl von gespeicherten Zahl zu aktuellen Index von der Schleife
            index = i;
            nummer = array[i];
            //Speichern von den Werten
        }
    }
    
    printf("Kleinste Zahl: %.1lf an Index %d \n", nummer, index); //Ausgabe
    
    return 0;
}
