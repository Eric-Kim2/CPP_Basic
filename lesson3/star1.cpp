#include <iostream>
using namespace std;

int main()
{
  int N, i;
  cin >> N;

  for( i = 0; i < N; i++)
  {
    for(int j = 0; j < i+1; j++)
    {
      std::cout << "*";
    }
    cout << endl;
  }
  return 0;
}
