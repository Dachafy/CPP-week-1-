#include <iostream>
using namespace std;

int getNumber(int x, int y){
    return x + y;
}

int main() {
    int sum = getNumber(5, 5);
    cout << sum <<endl;
    return 0;
}