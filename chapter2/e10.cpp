#include <iostream>

int main()
{
    int n = 5;
    int k = 0;

    while (k != n) {
        using std::cout; // declares we are using std::cout within the scope of this while loop
        cout << "*";
        ++k;
    }
    std::cout << std::endl; // need to use std:: because we are no longer in the scope of the while loop
    return 0;
}