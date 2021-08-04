#include <iostream>
#include <string>
#include <cstring>


// Define is_palindrome() here:
bool is_palindrome(std::string text)
{

  for(int i = 0; i<text.size(); i++)
  {
    if(text[0] != text[text.size()-1])
    {
      return false;
    }else
    {
      return true;
    }
  }
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
