#include <iostream>
using namespace std;
class Gcd {
private:
    int number1;
    int number2;

public:
    Gcd(int num1, int num2) : number1(num1), number2(num2) {}
    int calculateGcd() {
        int a = number1;
        int b = number2;
        while (b != 0) {
            int n1 = b;
            b = a % b;
            a = n1;
        }
        return a;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two non-negative integers: ";
    cin >> num1 >> num2;
    Gcd gcdObj(num1, num2);
    cout << "Greatest Common Divisor (GCD) of " << num1 << " and " << num2 << " is: " << gcdObj.calculateGcd() << endl;
    return 0;
}
