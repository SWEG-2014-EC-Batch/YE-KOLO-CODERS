#include <iostream>
#include <fstream>

int main() {
  std::ifstream infile("data.txt");
  if (infile.fail()) {
    std::cerr << "Error: Could not open file." << std::endl;
    exit(1);
  }

  int count, num;
  int sum, group_sum;
  while (infile >> count) {
    group_sum = 0;
    for (int i = 0; i < count; i++) {
      infile >> num;
      group_sum += num;
      std::cout << num << " ";
    }
    std::cout << "Average: " << static_cast<double>(group_sum) / count << std::endl;
  }

  infile.close();
  return 0;
}
