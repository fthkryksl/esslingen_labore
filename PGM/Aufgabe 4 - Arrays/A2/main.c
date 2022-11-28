//
//  main.c
//  2 Aufgabe
//
//  Created by Fatih Karayüksel on 07.11.22.
//
//  Eingabe:    Programmieren
//  Ausgabe:    12 Kleinbuchstaben

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char array[40];
    int anzahl = 0;
    
    scanf("%39s", &array[0]); //39 Dient dafür nicht mehr als 40 Zeichen einzutippen (40-1 "1 wegen Index fängt mit 0 an") = 39
    
    for (int i = 0; array[i] != '\0'; i++) { //array[i] != '\0' bedeutet Solang Array nicht an Stelle von i kein Zeichen hat mach weiter
        if (array[i] >= 'a' && array[i] <= 'z') { //>= 'a' && <= 'z' kontrolliert ob das Zeichen zwischen a -> z liegt und nicht drüber oder drünter
            anzahl++;
        }
    }
    printf("%i Kleinbuchstaben\n", anzahl);
    
    return 0;
}
