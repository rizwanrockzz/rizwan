#include <bits/stdc++.h>
using namespace std;

// VRTUAL CLASS
// THIS IS A PART OF FUNCTION OVER RIDING
// THE FUCTION WITH SAME NAME'S ONLY THE BASE CASE WILL BE CALLED BUT WHEN EVER WE WRITE VIRTUAL KEYWORD THAT FUNCTION WILL NOT BE CALLED

class base
{
public:
    /*virtual*/
    virtual void print()
    {
        cout << "this is base class print function" << endl;
    }

    void display()
    {
        cout << "this is base class display function" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "this is derived class print function" << endl;
    }

    void display()
    {
        cout << "this is derived class display function" << endl;
    }
};

int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr->print();

    baseptr->display();

    return 0;
}