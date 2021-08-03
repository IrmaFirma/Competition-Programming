#include <iostream>
#include <vector>

int main()
{
  std::vector<int>nums = {2, 4, 3, 6, 1, 9};
  int sum = 0;
  int prod = 1;
  for(int i = 0; i<nums.size(); i++)
  {
    if(nums[i] % 2 == 0)
    {
      sum = sum + nums[i];
    }else
    {
      prod = prod * nums[i];
    }
  }

  std::cout<<"Sum of even numbers is "<<sum<<"\n";
  std::cout<<"Product of odd numbers is "<<prod<<"\n";
}
