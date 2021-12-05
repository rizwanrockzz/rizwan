#include <bits/stdc++.h>
using namespace std;
// ENCAPSULATION

class A
{

public:
    int a;
    void funcA()
    {
        cout << "Func A" << endl;
    }

private:
    int b;
    void funcB()
    {
        cout << "Func B" << endl;
    }

protected:
    int c;
    void funcC()
    {
        cout << "Func C" << endl;
    }
};

int main()
{
    A obj;
    obj.funcA();
    // obj.funcB();    //PRIVATE
    // obj.funcC();    //PROTECTED

    return 0;
}