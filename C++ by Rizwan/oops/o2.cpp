#include <bits/stdc++.h>
using namespace std;
// INHERITANCE

// class A         // Single Inheritance
// {
// public:
//     void Afunc()
//     {
//         cout << "Func A" << endl;
//     }
// };
// class B : public A
// {
// };

// int main()
// {
//     B b;
//     b.Afunc();

//     return 0;
// }

// class A           // Multiple Inheritance
// {
// public:
//     void Afunc()
//     {
//         cout << "Func A" << endl;
//     }
// };
// class B
// {
// public:
//     void Bfunc()
//     {
//         cout << "Func B" << endl;
//     }
// };
// class C : public A, public B
// {
// };

class A 
{
public:
    void Afunc()
    {
        cout << "Func A" << endl;
    }
};
class B : public A
{
public:
    void Bfunc()
    {
        cout << "Func B" << endl;
    }
};
class C : public B
{
public:
};

int main()
{
    C c;
    c.Afunc();
    c.Bfunc();

    return 0;
}