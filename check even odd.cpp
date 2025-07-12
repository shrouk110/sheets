#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer:";
    cin >> num;

    if (num % 2 == 0)
        cout << "is even number." << endl;
    else
        cout << " is odd number." << endl;

    return 0;
}
