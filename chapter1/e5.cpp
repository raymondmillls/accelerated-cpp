#include <iostream>
#include <string>

int main()
{
    // This program is not valid because the variable x is out of scope when it is called
    { std::string s = "a string";
    { std::string x = s + ", really"; 
      std::cout << s << std::endl; }
      std::cout << x << std::endl;
    }
    return 0;
}