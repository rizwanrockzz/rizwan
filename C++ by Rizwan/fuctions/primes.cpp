#include <iostream>
#include <math.h>
using namespace std;
// PRINT ALL PRIME NUMBERS BETWEEN A AND B

bool isprime(int num)
{
   for (int i = 2; i <= sqrt(num); i++)
   {
      if (num % i == 0)
      {
         return false;
      }
   }

   return true;
}

int main()
{

   int a, b;
   cout << "enter the numbers" << endl;
   cin >> a >> b;

   for (int i = a; i <= b; i++)
   {
      if (isprime(i) == 1)
      {
         cout << i << endl;
      }
   }

   return 0;
}