#include <iostream>
using namespace std;

int main()
{

   int N, i, j, k, l, m;

for (int a = 0; i < N+1; a++) {
  for (int b = 0; b < 3; b++) {
    std::cout << "*" << '\n';
  }
  for (int c = 0; i < 3; c++) {
    std::cout << " " << '\n';
  }
  
}

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
