#include <iostream> 
using namespace std;
// ARRAYS
int main()
{
//   datatype arrayname[size];
// int array[4]= {10,20,30,40};
   
//    array[0]=10;
//    array[1]=20;
//    array[2]=30;
//    array[3]=40;

//  cout<<array[3]<<endl;

    int n;
    cout << "enter the number" << endl;
    cin >> n;

    int array[n];


    for (int i = 0; i < n; i++)
    {
        cin>>array[i];

    }

    for (int i = 0; i < n; i++)
    {
        cout<<array[i];

    }
    

    return 0;
}