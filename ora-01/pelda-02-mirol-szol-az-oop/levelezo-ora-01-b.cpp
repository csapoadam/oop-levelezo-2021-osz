// levelezo-ora-01-b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "person.h"

// proceduralis programozas:
// 1. utasitasok
// 2. fuggvenyek (szubrutinok)
// 3. UDT (user defined types, azaz felhasznalo altal def. tipusok)
// 4. modularizacio (kulonallo modulok az attekinthetoseg erdekeben)

// OOP ezzel szemben:
// 5. bevezeti az osztalyok fogalmat es az azok szarmaztatasi lehetosegeit
// osztaly is UDT, de
// a.) adatrejtest valosit meg
// b.) szarmaztatast tesz lehetove
// c.) tipusok (akar UDT-k) tipusellenorzeset, dinamikus konvertalasat megkonnyitik

int main()
{
    //std::string names[2];
    //int ages[2];

    Person p1("Kiss Petra", 15, "AK29823", false);
    //p1.init("Kiss Petra", 15);
    Person p2("Nagy Pista", 23, "NP28723", true);
    //p2.init("Nagy Pista", 23);

    p1.print();
    p2.print();

    //std::cout << "Person1: " << p1.getName() << " age: " << p1.getAge() << std::endl;
    //std::cout << "Person2: " << p2.getName() << " age: " << p2.getAge() << std::endl;
}
