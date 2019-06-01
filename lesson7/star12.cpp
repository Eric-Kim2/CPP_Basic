#include <iostream>
using namespace std;

int main()
{
   int a, b, c, N;

   cin >> N;
   for(a=0; a<N; a++){
     for(b=N-1; N>b>0; b--){
       std::cout << " " << '\n';
     }
     for(c=1; c <= (2 * b - 1); c++){
       std::cout << "*" << '\n';
     }
   }



   return 0;
}
