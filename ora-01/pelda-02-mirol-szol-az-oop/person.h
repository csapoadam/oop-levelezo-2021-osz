#pragma once

class NationalID {
    std::string idnum;
    bool biometric;
public:
    NationalID(std::string in, bool ib) {
        idnum = in;
        biometric = ib;
    }
    std::string getNum() { return idnum; }
    bool isBiometric() { return biometric; }
};

// UDT - user defined type
class Person {
    std::string name;
    int age;
    NationalID nid;
public:
    Person(std::string n, int a, std::string idnum, bool isBiometric) :
        nid(idnum, isBiometric), name(n), age(a)
    {}
    int getAge() { return age; }
    std::string getName() { return name; }
    void print();
};

//void Person::init (std::string n, int a) {
//    name = n;
//    age = a;
//}