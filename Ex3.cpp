#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int* ptr = &arr[0];
    *ptr = arr[0] + 10;

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " " <<endl;
    }
    return 0;
}