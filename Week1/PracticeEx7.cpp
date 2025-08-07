#include <iostream>
using namespace std;

int main() {
    string username = "admin";
    string newUsername;
    int password = 1234;
    int newPassword;
    int attempt = 3;

    while(attempt = 3){
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
        attempt--;
        

    

    return 0;
}