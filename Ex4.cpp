#include <iostream>
using namespace std;

int main(){
    string sen1;
    cout << "Enter first sentence: ";
    getline(cin, sen1);
    int length1 = sen1.length();

    string sen2;
    cout << "Enter second sentence: ";
    getline(cin, sen2);
    int length2 = sen2.length();

    string sen3;
    cout << "Enter third sentence: ";
    getline(cin, sen3);
    int length3 = sen3.length();

    cout << sen1 << ", " << sen2 << ", " << sen3 <<endl;
    cout << length1 << ", " << length2 << ", " << length3 << endl;
    return 0;
}