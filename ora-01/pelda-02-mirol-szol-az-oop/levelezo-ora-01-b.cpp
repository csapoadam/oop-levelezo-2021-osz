// levelezo-ora-01-b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "person.h";

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

    Person p1{ "Kiss Petra", 15 };
    Person p2{ "Nagy Pista", 23};

    p2.name = "adkjfaekejraedf";
    p2.age = -1;

    std::cout << "Person1: " << p1.name << " age: " << p1.age << std::endl;
    std::cout << "Person2: " << p2.name << " age: " << p2.age << std::endl;
}
