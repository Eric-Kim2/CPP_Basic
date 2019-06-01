#include <iostream>
using namespace std;

int main()
{
   int a, b, i, j;

   cin >> b;

   for(i = 1; i <= b; i++)
   {
      for(a = i; a < b; a++)
      {
         cout << " ";
      }
      for(j = 1; j <= (2 * i - 1); j++)
      { 
         cout << "*";
      }

      cout << "\n";
   }

   return 0;
}
