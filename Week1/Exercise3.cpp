#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if(a >= b && a >= c){
        cout << "Maximum is " << a << "\n"<<endl;
    } else if (b >= a && b >= c){
        cout << "Maximum is " << b << "\n"<<endl;
    } else {
        cout << "Maximum is " << c << "\n" <<endl;
    }
    
    return 0;
}