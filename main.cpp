#include <iostream>

using namespace std;

int main () 
{
  int number = 0;
  cout << "Enter number: "; cin >> number;
  int power = 0;
  cout << "Enter power: "; cin >> power;
  int result = number;
  if (power == 0) 
  {
    cout << "number = 1" << endl;
  }
  else 
  {
    for (int i = 0; i < power - 1; i++) 
    {
      result = result * number;
    }
    cout << "number = " << result << endl;  
  }
}