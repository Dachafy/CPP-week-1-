#include <iostream>
using namespace std;

int main() {
    string username = "admin";
    string newUsername;
    int password = 1234;
    int newPassword;
    int attempt = 3;

    for(int i = attempt; i > 0; i--){
        cout << "Enter your username: ";
        cin >> newUsername;
        cout << "Enter your password: ";
        cin >> newPassword;

        if(newUsername == username && newPassword == password){
            cout << "Access granted."<<endl;
        } else {
            cout << "Access denied."<<endl;
        }

    }

    return 0;
}