#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream file;
    file.open ("info.txt", ios::app);

    string fname;
    cout << "Please enter your first name: ";
    cin >> fname;

    string lname;
    cout << "Please enter your last name: ";
    cin >> lname;

    //string fullName = fname.append(lname);
    string fullName = fname + " " + lname;

    int age;
    cout << "Please enter your age: ";
    cin >> age;

    file << fullName << " " << age <<endl;
    
    file.close();
    return 0;
}