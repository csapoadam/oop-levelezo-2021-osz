#pragma once

// UDT - user defined type
struct Person {
    std::string name;
    int age;
    void init(std::string, int);
};