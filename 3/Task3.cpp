#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Original number: " << num << endl;

    cout << "Post-increment: " << num++ << endl;
    
    cout << "After post-increment: " << num << endl;

    cout << "Pre-increment: " << ++num << endl;

    cout << "Post-decrement: " << num-- << endl;

    cout << "After post-decrement: " << num << endl;

    cout << "Pre-decrement: " << --num << endl;

    return 0;
}
