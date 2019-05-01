#include <iostream>
using namespace std;

int main()
{
  int N, i;
  cin >> N;
  for( i = 1; i < 10; i++)
    std::cout << N << " * " << i << " = " << i * N << '\n';

  return 0;
}
