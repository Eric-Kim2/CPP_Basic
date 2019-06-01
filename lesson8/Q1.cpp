#include <iostream>
using namespace std;


float add(float num1, float num2){
  float num3 = num1+num2;
  return num3;
}

float minuss(float num1, float num2){
  float num3 = num1 - num2;
  return num3;
}
float multiply(float num1, float num2){
  float num3 = num1 * num2;
  return num3;
}
float divide(float num1, float num2){
  float num3 = num1/num2;
  return num3;
}




int main(){
  float a, b;
  cin >> a >> b;
  cout << "add: " << add(a, b) << endl;

  cout << "minuss: " << minuss(a, b) << endl;

  cout << "multiply: " <<multiply(a, b) << endl;

  cout << "divide: " << divide(a, b) << endl;
  return 0;
}
