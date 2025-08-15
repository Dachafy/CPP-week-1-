#include <iostream>
#include <string>
using namespace std;

double calculateAverage(int scores[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += scores[i];
    }

    double average = sum / size;
    return average;

}

int main() {
    const int size = 5;
    int scores[size];
    for(int i = 0; i < 5; i++){
        cout << "Enter integer: ";
        cin >> scores[i];
    }
    double average = calculateAverage(scores, size);
    cout << "Average: " << average << endl;


    return 0;
}