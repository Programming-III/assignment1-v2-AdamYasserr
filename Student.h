#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;

 class Student : public Person{
    private:
    int yearLevel;
    string major;
    public: 
    Student(): Person();
    Student(int yearLevel, string Major) : Person(string name, int id);
    void display();
 }

#endif
