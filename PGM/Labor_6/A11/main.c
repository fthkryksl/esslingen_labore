//
//  main.c
//  Aufgabe-11
//
//  Created by Fatih Karayüksel on 22.11.22.
//

#include <stdio.h>

int weekday(int tag, int monat, int jahr) {
    return ((void)(tag += monat < 3 ? jahr-- : jahr - 2), 23*monat/9 + tag + 4 + jahr/4- jahr/100 + jahr/400)%7;
}
