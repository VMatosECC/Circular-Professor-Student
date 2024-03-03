#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

//Forward declaration ==============================================
class Student;
// =================================================================

class Professor
{
private:
    string pname;
    string pdept;
    vector<Student> advisees;

public:
    Professor(string name, string dept);
    string getName() { return pname; }
    string getDept();
    void   setName(string name);
    void   setDept(string dept);
    string toString();
    void   addAdvisee(Student s);
    void   printAdvisees();

    friend ostream&operator<<(ostream &out, Professor &p) 
    {
        out << p.toString();
        return out;
    }

};
//-------------------------------------------------------------------
#include "Student.h"
#include "Professor.h"



// Path: Student.h
void Professor::setName(string name)
{
    pname = name;
}
void Professor::setDept(string dept)
{
    pdept = dept;
}
//string Professor::getName()
//{
//    return pname;
//}
string Professor::getDept()
{
    return pdept;
}
string Professor::toString()
{
    stringstream sout;
    sout << this << " Professor [Name: " << pname << ", Dept: " << pdept << "]" << endl;
    if (advisees.size() > 0)
    {
        sout << "Advisees: " << endl;
        for (int i = 0; i < advisees.size(); i++)
        {
            sout << "  " << advisees[i].getName() << endl;
        }
    }
    else
    {
        sout << "No advisees" << endl;
    }
    return sout.str();
}
Professor::Professor(string name, string dept)
{
    setName(name);
    setDept(dept);
}
void Professor::addAdvisee(Student s)
{
    advisees.push_back(s);
}
void Professor::printAdvisees()
{
    for (int i = 0; i < advisees.size(); i++)
    {
        cout << advisees[i].toString();
    }
}