#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    if (n1 > n2) {
        cout << "The maximum number is: " << n1 << endl;
    } else if (n2 > n1) {
        cout << "The maximum number is: " << n2 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}