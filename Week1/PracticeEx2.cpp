#include <iostream>
using namespace std;

int main() {
    float a, b, sum, different, product, quotient;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    sum = a + b;
    different = a - b;
    product = a * b;
    quotient = a / b;

    cout << "The sum is: " <<sum<<"\n";
    cout << "The different is: "<<different<<"\n";
    cout << "The product is: "<<product<< "\n";
    cout << "The quotient is: "<<quotient<< "\n"<<endl;

    return 0;
}