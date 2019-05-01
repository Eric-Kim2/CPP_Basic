#include <iostream>
using namespace std;

int main()
{
  int N, i;
  cin >> N;

  for( i = 0; i < N; i++)
  {
    for(int j = N; j > i; j--)
    {
      std::cout << "*";
    }
    cout << endl;
  }
  return 0;
}
