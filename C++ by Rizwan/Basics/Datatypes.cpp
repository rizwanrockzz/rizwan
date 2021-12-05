#include <iostream> //used to include files
using namespace std;

int main()
{

    int a;  //Declaratin
    a = 12; //Initialization

    cout << "size of int " << sizeof(a) << endl;

    float b; //Float can store upto 7 decimals
    // For more than 7 decimals u should use DATATYPE Double

    cout << "size of float " << sizeof(b) << endl;

    char c;
    cout << "size of char " << sizeof(c) << endl;

    bool d;
    cout << "size of bool " << sizeof(d) << endl;

    short int shi;
    long int li; //Size varies from memory to memory of system
    long long int lli;
    double df;

    // 1 BYTE = 8 BITS

    cout << "size of short int " << sizeof(shi) << endl;
    cout << "size of long int " << sizeof(li) << endl;
    cout << "size of long long int " << sizeof(lli) << endl;
    cout << "size of double float " << sizeof(df) << endl;

    signed int si;
    unsigned int ui;

    cout << "size of signedint " << sizeof(si) << endl;
    cout << "size of unsignedint " << sizeof(ui) << endl;
}