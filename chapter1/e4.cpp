#include <iostream>
#include <string>

int main()
{
    // This program is valid because the second is is contained within its own scope
    { const std::string s = "a string";
      std::cout << s << std::endl;
    { const std::string s = "another string";
      std::cout << s << std::endl; }}
    
    return 0;
}