#include <iostream>
using namespace std;

int main()
{
  int arr[10][50][100];
  for(int j=0; j<10; j++){
    for(int i=0; i<50; i++){
      for(int k=0; k<100; k++){
        arr[j][i][k] = (100*i+k+1)+j*5000;
      }
    }
  }


  for(int i=0;i<10;i++)
  {
    for(int j=0;j<50;j++)
    {
      for(int k=0;k<100;k++)
        cout << arr[i][j][k] << " ";
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
