#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
  ifstream infile("data.txt");
  if (infile.fail())
  {
    cout << "Error: Could not open file." <<endl;
    exit(1);
  }

  int count, num;
  int group_sum;
  while (infile >> count) {
    group_sum = 0;
    for (int i = 0; i < count; i++) {
      infile >> num;
      group_sum += num;
      cout << num << " ";
    }
    cout << "Average: " << static_cast<double>(group_sum) / count <<endl;
  }

  infile.close();
  return 0;
}
