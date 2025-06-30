#include <iostream>
using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}


int customax(int a, int b, int c) {
    if (a == b && b == c)
        return 0;

    int maxvalue = a;
    if (b > maxvalue) maxvalue = b;
    if (c > maxvalue) maxvalue = c;

    int sum = 0, count = 0;
    if (a == maxvalue) { sum += a; count++; }
    if (b == maxvalue) { sum += b; count++; }
    if (c == maxvalue) { sum += c; count++; }

    if (count >= 2)
        return sum;
    else
        return maxvalue;
}


void printBanner(string message) {
    cout << "\n=== " << message << " ===\n";
}


int main() {
    int n, a, b, c;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    printBanner("Student Logic Execution");

    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    cout << "Max function result is: " << customax(a, b, c) << endl;

    return 0;
}
