#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
class Person{
    private: 
    string name;
    int id;

    public:
    Person(){ 
        name = "";
        id = 0;
    }
    Person(string name, int id){
        this->name = name;
        this->id = id;
    }

    string getName(){
        return name;
    }
    int getId(){
        return id;
    }

    void setName(string n){
        name = n;
    }
    void setId(int i){
        id = i;
    }

    void display(){
        cout<< "Person Info: "<< endl << "Name: "<< name<< endl << "Id: "<< id<< endl;
    }
};

// ==================== Student Class Implementation ====================

class Student : public Person{
    private:
    int yearLevel;
    string major;
    
    public:
    Student(): Person(){
        Person();
        yearLevel = 0;
        major " ";
    }
    Student(int yearLevel, string major): Person(string name, int id){
        Person(name, id);
        this->yearLevel= yearLevel;
        this->major= major;
    }
    void display(){
        Person:: display();
        cout<< "Year Level: "<< yearLevel << endl<< "Major: "<< major<< endl;
    }
};

// ==================== Instructor Class Implementation ====================
class Instructor: public Person{
    private: 
    string department;
    int expYears;

    public:
    Instructor(): Person(){
        Person();
        department = "";
        expYears= 0;

    }
    Instructor(string department, int expYears){
    Person(getName(), getId());
    this-> department= department;
    this->expYears=expYears;
    }

    void display(){
    Person::display;
    cout<< "Department: "<< department<< endl<< "Experiernce Years: "<< expYears<< endl;
    }
};

// ==================== Course Class Implementation ====================

class Course{
    private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;

    public: 
        Course(string courseCode, string courseName, int maxStudents,  Student* students, int currentStudents){
            this->courseCode= courseCode;
            this->courseName = courseName;
            this->maxStudents = maxStudents;
            this->students = students;
            this-> currentStudents = currentStudents;
        }
        Course(){
            this->courseCode= "";
            this->courseName = "";
            this->maxStudents = 0;
            this->students = "";
            this-> currentStudents = 0;
        }

        void addStudent(const Student& s){
        }
        void displayCourseInfo(){
            cout<< "Course code: "<< courseCode<< endl<< "Course Name: "<< courseName<< endl<< "Max Students: "<< maxStudents<< endl;
        }
        };

// ==================== Main Function ====================
 int main(){
        Person a= Person("Adam", 178597);
        Student s = Student("Adam", 16858, 2, "CS");
        Instructor i = Instructor("Computer Science", 7, "Dr, Nada", 15 );

        return 0;

    }
