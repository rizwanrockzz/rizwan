#include <bits/stdc++.h>
using namespace std;
// OOPS IN C++;
// OOPS IS AS SAME AS STRUCTURE IN C BUT IN OOPS CLASS HAS HIGH SECURITY FEAUTERS

class student
{        //BY DEFAULT THEY ARE PRIVATE;
private: //there is no need to write by default they are private
    string name;

public:
    int age;
    bool gender;

    void setname(string s)
    {
        name = s;
    }

    void getname(string s)
    {
        cout << name << endl;
    }

    student()
    {
        cout << "Default Constructor " << endl;
    } // DEFAULT CONSTRUCTOR

    student(string s, int a, bool g)
    {
        cout << "Parametrised Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // PARAMETERIZED CONSTRUCTOR

    student(student &a)
    {
        cout << "Copy Constructor" << endl;
        a.name;
        a.age;
        a.gender;
    } // COPY CONSTRUCTOR

    ~student()
    {
        cout << "Destructor Called " << endl;
    }

    //  operator overloading
    //  datatype operator (operator which is to be overloaded)
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }

    void printInfo()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "Age = ";
        cout << age << endl;
        cout << "Gender = ";
        cout << gender << endl;
    }
};

int main()
{
    // student a;
    // a.name='rizwan';
    // a.age=17;
    // a.gender=1  // male;

    // <-------------------------->

    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Name = ";
    //     cin >> arr[i].name;
    //     cout << "Age = ";
    //     cin >> arr[i].age;
    //     cout << "Gender = ";
    //     cin >> arr[i].gender;
    // }

    // cout << " <-- Your Result Is --> " << endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }
    cout << " <-- Question Starts From Here --> " << endl;
    student a("Rizwan", 17, 1);
    // a.printInfo();
    student b;
    student c = a;
    // c.printInfo();

    // if (c == a)
    // {
    //     cout << "Same" << endl;
    // }

    // else
    // {
    //     cout << "Not Same" << endl;
    // }

    return 0;
}