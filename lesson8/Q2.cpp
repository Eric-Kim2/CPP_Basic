
#include<iostream>
using namespace std;

int main()
{

  int a, b, c;
  cin >> a >> b;

  int D = 0;
  if (b>=a) {
    for (c=a; c<=b; c++){
      D+= c;
    }
  }
  else if(b<a){
    for (c=b; c<=a; c++){
      D+= c;
    }
  }



  cout<< D << " ";

  return 0;
}
