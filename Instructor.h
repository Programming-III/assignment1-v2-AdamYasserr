#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;

class Instructor: public Person{
    private:
    string department;
    int experienceYears;

    public:
    Instructor(): Person();

    Instructor(string department, int experienceYears): Person(string name, int id);

    void display();
    
 };












#endif
