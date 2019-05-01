#include <iostream>
using namespace std;

int main()
{
  int N, i, sum = 0;
  cin >> N;

  for( i = 1; i < N+1; i++)
    sum += i;
  cout << sum << endl;
  
  return 0;
}
