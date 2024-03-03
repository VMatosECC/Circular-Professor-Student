#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

//Forward declaration ==============================================
class Professor; 

// =================================================================
class Student
{
private:
    string     sname;
    double     sgpa;
    Professor* advisor;

public:
    //Student(string sname, double sgpa, Professor* prof = {});
    Student(string sname, double sgpa, Professor* prof = NULL);
    string     getName();
    double     getGpa();
    Professor* getAdvisor();
    void       setName(string name);
    void       setGpa(double gpa);
    void       setAdvisor(Professor* prof);
    string     toString();
    
    
};
#include "Student.h"
#include "Professor.h"

Student::Student(string sname, double sgpa, Professor* prof)
{
   setName(sname);
   setGpa(sgpa);
   setAdvisor(prof);
}
string Student::getName()
{
    return sname;
}
double Student::getGpa()
{
    return sgpa;
}
Professor* Student::getAdvisor()
{
    return advisor;
}
void Student::setName(string name)
{
    sname = name;
}
void Student::setGpa(double gpa)
{
    sgpa = gpa;
}
void Student::setAdvisor(Professor* prof)
{
    advisor = prof;
}
string Student::toString()
{
    stringstream sout;
    string strAdvisorName = (advisor==NULL ? "None" : advisor->getName() );
    sout << this << " Student [Name: " << sname << ", GPA: " << sgpa << " Advisor: " << strAdvisorName << "]" << endl;
    return sout.str();
}