#include <iostream>
using namespace std;

int main()
{

   int N, i, j, k, l, m;


   cin >> N;
   for(i = 0; i < 4 * N - 2; i++){
     if(i == N * 2 - 2){
       for (int a = 0; a < 4 * N - 2; a++) {
         cout << "*" ;
       }
       cout << endl;
       for (int a = 0; a < 4 * N - 2; a++) {
         cout << "*" ;
       }
       i++;
     }
     else{
       for (j = 0; j < N * 2 - 2; j++) {
          std::cout << " " ;
       }
       cout << "**" ;
     }

     cout << endl;
   }
    return 0;
 }
