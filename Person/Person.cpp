//
// Created by Raikobek on 26.09.2021.
//
#include "Person.h"

Person::Person(){
    this->name = "";
    this->age = 0;
    this->luck = 0;
}
Person::Person(string name, int age, int luck){

    this->name = name;
    this->age = age;
    this->luck = luck;
}
string Person::getName() {
     return name;
}
void Person::setName(string name){
    this->name=name;
}
int Person::getAge() {
    return age;
}
void Person::setAge(int age){
    this->age=age;
}
int Person::getLuck() {
    return luck;
}
void Person::setLuck(int luck){
    this->luck=luck;
}


