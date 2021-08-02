#include <iostream>

int main() {
  double weight;
  int pnum;
  std::cout<<"Enter your earth weight: ";
  std::cin>>weight;
  std.:cout<<"Enter the planet number: ";
  std::cin>>pnum;

  if(pnum == 1 || pnum == 3)
  {
    weight = weight * 0.38;
  }else if(pnum == 2)
  {
    weight = weight * 0.91;
  }else if(pnum == 4)
  {
    weight = weight * 2.34;
  }else{
    std::cout<<"Unknown planet number!\n";
  }
  
  
  
  
