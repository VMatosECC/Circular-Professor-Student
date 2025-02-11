// Circular-Professor-Student.cpp 
#include "Professor.h"
#include "Student.h"
#include "Couple.h"

#include <iostream>

int main()
{
    //Testing a circular relationship
    Professor p1("Dr. Euler", "Math");     cout << "p1 " << p1.toString() << endl;
    Professor p2("Dr. Newton", "Physics"); cout << "p2 " << p2.toString() << endl;

    Student s1("ms111", 3.11, &p1); cout << "s1 " << s1.toString() << endl;
    Student s2("ms222", 3.22, &p1); cout << "s2 " << s2.toString() << endl;
    Student s3("ms333", 3.33, &p1); cout << "s3 " << s3.toString() << endl;
    Student s4("ms444", 3.44);      cout << "s4 " << s4.toString() << endl;
    
    p1.addAdvisee(s1);
    p1.addAdvisee(s2);
    p1.addAdvisee(s3);

    cout << "p1 " << p1.toString() << endl;

    cout << "s1 sname:" << s1.getName() << ", advisor:" << s1.getAdvisor()->getName() << endl;

    //Testing overloaded << operator
    cout << "s4 << " << s4 << endl;
    cout << "p2 << " << p2 << endl;

    //Testing a template class
    Couple<Student, Professor> c1(s4, p2);
    cout << "couple1 " << c1.toString() << endl;
}

