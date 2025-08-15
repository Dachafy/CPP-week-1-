#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string data;
    fstream file;

    file.open("info.txt");

    if(!file){
        cout << "There is an error oprning the file." <<endl;
    } else {
        cout << "\nReading the file..." <<endl;
        while(getline(file, data)){
            cout << data <<endl;
        }
    }
    file.close();

    return 0;
}