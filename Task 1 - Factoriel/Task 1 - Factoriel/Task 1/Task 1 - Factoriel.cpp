#include <iostream>
using namespace std;
class Fact {
private:
    int number;
    int factorial;

public:
    Fact(int num) : number(num), factorial(1) {}

    void calculateFactorial() {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
    }
    int getFactorial() {
        return factorial;
    }
};

int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input;
    Fact factObj(input);
    factObj.calculateFactorial();
    cout << "Factorial of " << input << " is: " << factObj.getFactorial() << std::endl;

    return 0;
}
