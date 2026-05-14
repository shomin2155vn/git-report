#include <iostream>
using namespace std;

int sum (int a, int b) {
    cout << "This function takes two integers and returns their sum." << endl;
    cout << "The first integer is: " << a << endl;
    cout << "The second integer is: " << b << endl;
    return 1;
}

int main() {
    cout << "Hello" << endl;
    cout << "Sum of 5 and 3 is: " << sum(5, 3) << endl;
    return 0;
}