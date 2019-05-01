#include <iostream>
using namespace std;

int main()
{





  int N, i;
  cin >> N;
  for( i = 1; i < N+1; i++)
    std::cout << ++i + ++i + N << '\n';



  return 0;
}
