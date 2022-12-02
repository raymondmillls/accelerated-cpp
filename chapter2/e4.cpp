#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;

int main()
{
    cout << "Please enter your first name: ";

    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";
    
    const int pad = 1;

    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    const string spaces(cols - 2, ' ');
    const string::size_type spaceLen = spaces.size();

    cout << endl;

    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;

        while (c != cols) {
            // Writing the greeting line
            if (r == pad + 1) {
                cout << "* " << greeting << " *";
                c += greeting.size() + 4;
            } else {
                // Writing the border
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                    cout << "*";
                    ++c;
                } else {
                    cout << spaces;
                    c += spaceLen;
                }
            }
        }

        cout << endl;
    }

    return 0;
}