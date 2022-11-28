//
//  main.c
//  Aufgabe 4
//
//  Created by Fatih Karayüksel on 07.11.22.
//
//  Eingabe: w Programmieren
//  Output: Prwgrwmmwrwn

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char vowel = 'a';
    char str[40];
    
    scanf(" %c %s", &vowel, str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
            || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') { //Jeder Vokale mit Klein und Großbuchstaben
            str[i] = vowel;
        }
    }
    
    printf("%s", str);
    
    return 0;
}
