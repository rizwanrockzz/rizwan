#include <bits/stdc++.h>
using namespace std;

// OPERATOR OVERLOADING;
// IN THE LECTURE VIDEO THERE HE WROTE NS=AME COMPLEX IN CLASS IN SUBLIME TEXT IN VS CODE IT IS CONFUSING THE NAME COMPLEX SO I CHANGED THE NAME TO COMPLEXADD

class complexadd
{
private:
    int real, imag;

public:
    complexadd(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    complexadd operator+(complexadd &obj)
    {
        complexadd res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void display()
    {
        cout << real << " +  i " << imag << endl;
    }
};

int main()
{

    complexadd c1 = (13, 65);
    complexadd c2 = (9, 3);
    complexadd c3 = c1 + c2;
    c3.display();

    return 0;
}