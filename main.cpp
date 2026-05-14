#include iostream
using namespace std;

int sum (int a, int b) {
    cout << "This function takes two integers and returns their sum." << endl;
    cout << "The sum of " << a << " and " << b << " is: " << a + b << endl;
    // Commenting out the return statement to demonstrate a function without a return value
    return 1;
}

int main() {
    cout << "Hello" << endl;
    cout << "Sum of 5 and 3 is: " << sum(5, 3) << endl;
    return 0;
}