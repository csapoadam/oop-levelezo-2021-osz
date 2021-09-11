// 2021-oop-levelezo-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int i2 = 10; // adatszegmens

void f0(int i) { // i egy lokális változó, ami a stack tetejére kerül
    i += 1; // nincs hatasa a kulvilagra
}

// egy lehetoseg, hogy visszaadjam az uj erteket
int f1 (int i) { // i egy lokális változó, ami a stack tetejére kerül
    i += 1;
    return i;
}

void f2(int* i) { // i lehet egy mutato (pointer) is, ami egy mem.cimre mutat
    //i += 1; // nem i-t novelem, hanem az altala mutatott erteket:
    *i = *i + 1;
}

void f3(int& i) { // a pointernel sokszor egyszerubb a referencia hasznalata
    i += 1;
}

int main()
{
    int i1 = 5; // stack (verem) LIFO
    //f0(i1);
    //i1 = f1(i1);
    //f2(&i1);
    f3(i1);
    std::cout << i1 << std::endl;

    return 0;
}

