//
//  main.c
//  Aufgabe-14
//
//  Created by Fatih Karayüksel on 18.11.22.
//
//  Ausgabe: 1
//           1
//           2

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i; //Definition einer Variablen i vom Typ int
    int* ptr; //Definition einer Pointers ptr vom Typ int
    int** ptrptr; //Definition eines Pointers ptrptr auf einen int-Pointer
    
    ptr = &i; //Zuweisung der Adresse von i an den Pointer ptr
    ptrptr = &ptr; //Zuweisung der Adresse von ptr an den Pointer ptrptr
    
    i = 1; //Zuweisung des Wertes 1 an die Variable i
    
    printf("%d\n", i); //Ausgabe des Werts von i
    
    printf("%d\n", *ptr); //Ausgabe des Werts des Objekts, auf das der Pointer ptr zeigt, mithilfe des Dereferenzierungsoperators
    
    **ptrptr = 2; //Zuweisung des Werts 2 auf i, aber über den Dopplerpointer ptrptr (NICHT direkt!)
    
    printf("%d\n", i); //Ausgabe des Wertes von i
}
