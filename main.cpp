#include iostream
using namespace std;

int sum (int a, int b) {
    cout << a + b;
    return 1;
}

int main() {
    cout << "Hello" << endl;
    cout << "Sum of 5 and 3 is: " << sum(5, 3) << endl;
    return 0;
}