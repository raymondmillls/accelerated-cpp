#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int prod = 1;
    int i = 1;

    while (i < 10) {
        prod *= i;
        i += 1;
    }

    cout << prod << endl;

    return 0;
}