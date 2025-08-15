#include <iostream>
using namespace std;

int largestNumber(int x, int y) {
    if(x > y){
        return x;
    } else {
        return y;
    }
}

int main() {
    int x;
    cout << "Enter the first number: ";
    cin >> x;
    int y;
    cout << "Enter the second number: ";
    cin >> y;

    int number = largestNumber(x, y);
    cout << "The largest number is: " << number << endl;

    return 0;
}