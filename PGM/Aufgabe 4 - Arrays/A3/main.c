//
//  main.c
//  3 Aufgabe
//
//  Created by Fatih Karayüksel on 07.11.22.
//
//  Eingabe:    Programmieren
//  Ausgabe:    5 Vokale

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char array[40];
    int anzahl = 0;
    
    scanf("%s", array);
    
    for (int i = 0; array[i] != '\0'; i++) { //array[i] != '\0' bedeutet Solang Array nicht an Stelle von i kein Zeichen hat mach weiter
        /*switch (array[i]) {
            case 'a':
                anzahl++;
                break;
            case 'e':
                anzahl++;
                break;
            case 'i':
                anzahl++;
                break;
            case 'o':
                anzahl++;
                break;
            case 'u':
                anzahl++;
                break;
                
            default:
                break;
        }*/
        if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u' || array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U') { //Jeder Vokale mit Klein und Großbuchstaben
            anzahl++;
        }
    }
    printf("%i Vokale\n", anzahl);
    
    return 0;
}
