#include <iostream>
using namespace std;

int main() {

  int size = 5;
  
  for (int i = 0; i < size; i++)
  {
     for (int j = 1; j < size - i; j++)
     {
      cout << " ";
    }
 
    for (int k = 0; k <= i; k++)
    {
      cout << (k+1);
    }
    cout << "\n";
  }
  return 0;
}
