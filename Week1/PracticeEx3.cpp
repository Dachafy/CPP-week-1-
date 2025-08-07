#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num < 0){
        cout << "Your number is a negative value."<<endl;
    } else if (num > 0){
        cout << "Your number is a positive value."<<endl;
    } else {
        cout << "Your number is 0."<<endl;
    }

    return 0;
}