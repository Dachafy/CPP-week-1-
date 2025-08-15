#include <iostream>
using namespace std;

int main() {
    int array[5];
    int length = sizeof(array)/ sizeof(array[0]);

    for(int i = 0; i < length; i++){
        cout << "Enter your number: ";
        cin >> array[i];
    }
    for(int i = 0; i < length; i++){
        cout << array[i] << ",";
    }
    cout <<endl;

    return 0;
}