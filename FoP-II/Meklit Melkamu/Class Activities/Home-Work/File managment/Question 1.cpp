#include <fstream>
#include <iostream>

using namespace std;

void read_file(const char* filename, int arr[], int* count) 
{
  ifstream infile(filename);
  if (infile.is_open()) 
  {
    int num;
    *count = 0;
    while (infile >> num)
      {
      arr[*count] = num;
      (*count)++;
      }
    infile.close();
  }
}
