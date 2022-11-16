#include <iostream>
#include <string>

int main()
{
    // This program is valid because each s is contained within its own scope
    { std::string s = "a string";
      std::cout << s << std::endl; }

    { const std::string s = "another string";
      std::cout << s << std::endl; }
    
    return 0;
}