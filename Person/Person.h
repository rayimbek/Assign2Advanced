//
// Created by Raikobek on 26.09.2021.
//

#ifndef PERSON_PERSON_H
#define PERSON_PERSON_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Person{
public:
    Person();
    Person(string Name, int Age,int Luck);
    string getName();
    void setName(string name);
    int getAge();
    void setAge(int age);
    int getLuck();
    void setLuck(int luck);
private:
    string name;
    int age;
    int luck;
};


#endif //PERSON_PERSON_H

