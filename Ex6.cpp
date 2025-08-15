#include <iostream>
using namespace std;

int findMax(int arr[], int size){
    int max = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > arr[i + 1]){
            return max = arr[i];
        }
    }
}

int findMin(int arr[], int size){
    int min = 0;
    for(int i =0; i < size; i++){
        if(arr[i] < arr[i + 1]){
            return min = arr[i];
        }
    }
}

int main() {
    const int size = 5;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout << "Enter your number: ";
        cin >> arr[i];
    }
    int max = findMax(arr, size);
    int min = findMin(arr, size);

    cout << "The maximum number is: "<< max;
    cout << "\nThe minimum number is: "<< min <<endl;


    return 0;
}