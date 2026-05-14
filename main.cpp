#include iostream
using namespace std;

int sum (int a, int b) {
    cout << a + b;
    // This is a comment
    // Another comment
    // One more comment
    // Final comment
    cout << "The sum of " << a << " and " << b << " is: " << a + b << endl;
    return 1;
}

int main() {
    cout << "Hello" << endl;
    cout << "Sum of 5 and 3 is: " << sum(5, 3) << endl;
    return 0;
}