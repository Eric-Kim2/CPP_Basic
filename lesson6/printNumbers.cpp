#include <iostream>
using namespace std;

int main()
{
  int arr[100][1000];
  for(int j=0; j<100; j++){
    for(int i=0; i<1000; i++){
      arr[j][i] = j*1000+i+1;
    }
  }

  return 0;
}
