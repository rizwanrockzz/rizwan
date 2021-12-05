#include <bits/stdc++.h>
#include <set>
using namespace std;
// SETS ==> ORDERD SET

int main()
{
   set<int> s;
   s.insert(1); // TC =O(log(n))
   s.insert(2);
   s.insert(1);
   s.insert(3);
   s.insert(3);
   s.insert(4);
   s.insert(5);
   s.insert(6);
   s.insert(5);

   // below is called for each loop
   for (auto i : s)
   {
      cout << i << " ";
   }
   cout << endl;
   cout << s.size() << endl;

   s.erase(1);
   for (auto i : s)
   {
      cout << i << " ";
   }
   cout << endl;

   set<int>::iterator it = s.begin();
   it++;
   s.erase(it);
   for (auto i : s)
   {
      cout << i << " ";
   }
   cout << endl;
   cout << *s.lower_bound(2) << endl;

   return 0;
}