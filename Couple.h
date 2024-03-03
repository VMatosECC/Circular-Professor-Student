#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

template <class T1, class T2>
class Couple
{
private:
    T1 first;
    T2 second;
    public:
        Couple(T1 first, T2 second) : first(first), second(second) {}
        T1 getFirst() const { return first; }
        T2 getSecond() const { return second; }
        void setFirst(T1 first) { this->first = first; }
        void setSecond(T2 second) { this->second = second; }

        string toString()  {
            stringstream sout;
            sout << this << " Pair (first: " 
                << first << ", second: " 
                << second << ")";
            return sout.str();
        }
};

