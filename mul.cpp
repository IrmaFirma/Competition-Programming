#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num)
{
  std::vector<int> mul(3);
  mul.push_back(num*1);
  mul.push_back(num*2);
  mul.push_back(num*3);
  return mul;
  
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}
