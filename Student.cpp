#include <string>
#include <ostream>
#include "studentStatus.h"
using namespace std;

class Student {
private:
    int id;
    string name;
    int credits;
    studentStatus ss;

public:
Student::Student(int id, string name){
    Student::id = id;
    Student::name = name;
    Student::credits = 0 ;
    Student::ss = OK;
  //  cout << "Student object constructed!!!" << endl;
}

Student::Student(int id, string name, int credits){
    Student::id = id;
    Student::name = name;
    Student::credits = credits ;
    Student::ss = OK;
 //   cout << "Student object constructed!!!" << endl;
}

int Student::getId(){
    return Student::id;
}

void Student::setName(string name){
    Student::name = name;
}
string Student::getName() {
    return Student::name;
}

void Student::increaseCredit(){
    Student::credits = Student::credits + 3;
}

void Student::setCredits(int credits) {
    Student::credits = credits ;
}

int Student::getCredits(){
    return Student::credits;
}

void Student::setStudentOnProbation() {
    Student::ss = PROBATION;
}

string Student::print() {
    return to_string(Student::id) + ". " + Student::name + " Credits:" + to_string(Student::credits) + " (" + showText(Student::ss) + ") ";
}

Student::~Student(){
    cout << "Student object destructed!!!" << endl;
}

};
