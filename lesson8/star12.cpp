#include <iostream>
using namespace std;

int main()
{
   int a, b, c, N;

   cin >> N;
   for(a=0; a<N; a++){
     for(b=N-1-a; b>0; b--){
       std::cout << " ";
     }
     if(a==0){
       cout << "*";
     }
     else{
       cout << "*";
       for(c=1; c<(a*2); c+=1){
         std::cout << " ";
       }
       cout << "*";
     }
     std::cout << '\n';
   }

   return 0;
}
