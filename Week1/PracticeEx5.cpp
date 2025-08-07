#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if(num % 3 == 0){
        cout << "Your number is a multiple of 3."<<endl;
    } else if(num % 5 == 0){
        cout << "Your number is a multiple of 5."<<endl;
    } else {
        cout << "Your number is neither a multiple of 3 nor 5."<<endl;

    }
    return 0;
}