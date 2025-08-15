#include <iostream>
#include <string>
using namespace std;

int main() {
    string fname;
    cout << "Enter your first name: ";
    cin >> fname;

    string lname;
    cout << "Enter your last name: ";
    cin >> lname;

    string fullName = fname.append(lname);
    int length = fullName.length();
    cout << fullName;
    cout << "\nThe length of your name is: " << length <<endl;
    return 0;
}