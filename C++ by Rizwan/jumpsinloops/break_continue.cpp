#include <iostream>
using namespace std;
           // break and continue statements;
int main()
{
    int pocketmoney = 5000;

    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            cout<<"even day"<<endl;
            continue;
        }
        if (pocketmoney == 0)
        {
            break;
        }
        cout << "you can go out today" << endl;
        pocketmoney = pocketmoney - 500;
    }

    return 0;
}