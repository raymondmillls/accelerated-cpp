#include <iostream>
#include <string>

int main() 
{
    // The following definitions are valid, we can concatenate two strings
    const std::string hello = "Hello";
    const std::string message = hello + ", world" + "!";

    return 0;
}