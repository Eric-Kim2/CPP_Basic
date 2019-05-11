#include<iostream>
using namespace std;

int main()
{
   int a, i, j, N;
   cin >> N;
for (i = 0; i < N; i++)
{
  for (a = 0; a < i; a++)
  {
    std::cout << " ";
  }
  for (j = N; j > i; j--)
  {
    std::cout << "*";
  }
  cout << endl;
}


   return 0;
}
