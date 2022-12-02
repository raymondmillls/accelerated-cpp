#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main() 
{   
    // Square
    cout << "Square:" << endl;

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
    

    cout << endl;

    // Rectangle
    cout << "Rectangele" << endl;

    for (int r = 0; r < length; ++r) {
        int c = 0;
        while (c < length) {
            // Writing the border characters
            if (r == 0 || r == length - 1 || c == 0 || c == length - 1) {
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

    cout << endl;

    // Triangle
    cout << "Triangle" << endl;

    const int height = 10;
    const int cols = 10 * 2;
    const int root = cols / 2;

    int leftBound = root;
    int rightBound = root;

    for (int r = 0; r < height; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (c < leftBound) {
                cout << " ";
            } else if (c > rightBound) {
                cout << " ";
            } else if (leftBound <= c <= rightBound) {
                cout << "*";
            }
        }
        leftBound -= 1;
        rightBound += 1;
        cout << endl;
    }


    return 0;
}