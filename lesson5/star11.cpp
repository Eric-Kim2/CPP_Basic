#include <iostream>
using namespace std;

int main()
{

   int N, i, j, k, l, m;


   cin >> N;
   for (i = 0; i < N; i++)
   {
     for (j = 0; j < 2 * N; j++) {
       std::cout << "*";
     }
     for (k = 0; k < N+2; k++) {
       std::cout << "*" << '\n';
     }

     }

    return 0;
 }
