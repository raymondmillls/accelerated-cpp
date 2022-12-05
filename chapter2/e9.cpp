#include <iostream>
#include <string>

using std::endl; using std::cout;
using std::string; using std::cin;

int main()
{
    cout << "Please enter first number: ";
    int n1;
    cin >> n1;
   

    cout << "Please enter second number: ";
    int n2;
    cin >> n2;
    cout << endl;

    if (n1 > n2) {
        cout << n1 << " is greater than " << n2 << endl;
    } else {
        cout << n2 << " is greater than " << n1 << endl;
    }

    return 0;
}