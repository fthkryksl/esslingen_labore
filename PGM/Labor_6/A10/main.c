//
//  main.c
//  Aufgabe 10
//
//  Created by Fatih Karayüksel on 22.11.22.
//

#include <stdio.h>

int prime(int a) {
    if (a <= 1) { //Wenn kleiner als 1 dann ist es automatisch kein Primzahl
        return 0;
    } else {
        for (int i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                return 0; //Wenn die "i" mit "a" ohne Rest Dividbar ist, dann ist es keine Primzahl
                break;
            }
        }
        return 1;
    }
}
