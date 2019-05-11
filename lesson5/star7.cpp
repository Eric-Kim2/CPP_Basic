#include <iostream>
using namespace std;

int main()
{
   int N, i, j, k;

   cin >> N;

   for(i = 1; i <= N; i++)
   {
      for(k = i; k < N; k++)
      {
         cout << " ";
      }
      for(j = 1; j <= (2 * i - 1); j++)
      {
         cout << "*";
      }
      cout << "\n";
   }
   for(i = N-1; i > 0; i--)
   {
      for(k = i; k < N; k++)
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
