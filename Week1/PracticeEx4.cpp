#include <iostream>
using namespace std;

int main() {
    string password = "admin123";
    string newPassword;

    cout << "Enter your password: ";
    cin >> newPassword;

    if(newPassword == password){
        cout << "Matching password"<<endl;
    } else {
        cout << "Password does not match."<<endl;
    }
    return 0;
}