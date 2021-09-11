#pragma once

// UDT - user defined type
struct Person {
    std::string name;
    int age;
    //void init(std::string, int);
    void init(std::string n, int a) {
        name = n;
        age = a;
    }
};

//void Person::init (std::string n, int a) {
//    name = n;
//    age = a;
//}