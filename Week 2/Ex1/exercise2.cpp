#include <iostream>
using namespace std;

int largestNumber(int x, int y, int z){
    if(x > y && x > z){
        return x;
    } else if(y > x && y > z){
        return y;
    } else {
        return z;
    }
}

int main() {

    int number = largestNumber(4, 5, 6);
    cout << number <<endl;

    return 0;
}