#include iostream
using namespace std;

int sum (int a, int b) {
    cout << a + b;
    cout << "This is the sum function." << endl;
    cout << "This function takes two integers and returns their sum." << endl;
    return 1;
}

int main() {
    cout << "Hello" << endl;
    cout << "Sum of 5 and 3 is: " << sum(5, 3) << endl;
    return 0;
}