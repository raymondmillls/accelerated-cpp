#include <iostream>

// This program does not work because the third comment delimiter ends the comment prematurely
int main() 
{
    /* This is a comment that extends over several lines
        because it uses /* and */ as its starting and ending delimiters
        std::cout << "Does this work?" << std::endl;

        return 0;
}