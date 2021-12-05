#include <bits/stdc++.h>
using namespace std;

// FUNCTION OVERLOADING

class rizwan
{
public:
    void func()
    {
        cout << "I am a class with no arguments " << endl;
    }
    void func(int x)
    {
        cout << "I am a class with int argument " << endl;
    }
    void func(double x)
    {
        cout << "I am a class with double argument " << endl;
    }
};

int main()
{
    rizwan obj;
    obj.func();
    obj.func(4);
    obj.func(3.1);

    return 0;
}