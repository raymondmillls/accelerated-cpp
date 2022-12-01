#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main() 
{   
    // Square
    const int length = 10;

    for (int r = 0; r < length; ++r) {
        int c = 0;
        while (c < length * 2) {
            // Writing the border characters
            if (r == 0 || r == length - 1 || c == 0 || c == length * 2 - 1) {
                cout << "*";
                ++c;
            // Writing the spaces
            } else {
                cout << " ";
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}