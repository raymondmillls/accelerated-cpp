#include <iostream>
#include <string>

int main()
{
    // This definition does not work because the operands are invalid
    const std::string exclam = "!";
    const std::string message = "Hello" + ", world" + exclam;

    return 0;
}