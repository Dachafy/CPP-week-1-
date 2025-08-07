#include <iostream>

int main() {
    using namespace std;

    int choice;
    float a, b, result;

    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(choice == 1){
        result = a + b;
    } else if (choice == 2) {
        result = a -b;
    } else if (choice == 3) {
        result = a * b;
    } else if (choice == 4) {
        if( b != 0){
            result = a / b;
        } else {
            cout << "Error: Division by zero\n"<<endl;
            return 1;

        }
    } else {
        cout << "Invalid choice\n"<<endl;
        return 1;
    }

    cout << "Result: " << result <<endl;

    return 0;
}