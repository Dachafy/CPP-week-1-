#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    //to add data in the file, we use append(app)
    file.open("files.txt", ios::app);

    string name;
    cout << "Enter your name: ";
    cin >> name;
    file << name << endl;

    file.close();


    return 0;
}