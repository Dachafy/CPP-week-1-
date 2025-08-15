#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double calculateAverage(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    
    int average = sum / size;
    return average;
}

int main() {
    string firstName, lastName;
    const int size = 5;
    int scores[size];

    cout << "Enter first name: ";
    getline(cin, firstName);
    cout << "Enter last name: ";
    getline(cin, lastName);

    string fullName = firstName + " " + lastName; 
    cout << "Full name: " + fullName << endl; 
    int length = fullName.length();
    cout << "Name length: " << length << endl; 

    for(int i = 0; i < size; i++){
        cout << "Enter score: ";
        cin >> scores[i];
    }

    int* ptr = &scores[0];
    *ptr = 5;

    double avg = calculateAverage(scores, size);
    cout << "Average score: " << avg << endl; 

    ofstream outFile;
    string data;

    outFile.open("student.txt", ios::app);
    while(!outFile){
        cout << "Error opening your file.";
        return 1;
    }

    outFile << "Name: "<< fullName <<endl;
    outFile << "Scores: ";
    for(int i = 0; i < size; i++){
        outFile << scores[i];
    }
    outFile << "\nAverage: "<< avg << endl;

    outFile.close();

    ifstream inFile("student.txt", ios::in);
    string line;
    if(!inFile){
        cout << "Error loading file." << endl;
        return 1;
    } else{
        cout << "\nReading from file:" << endl;
        while(getline(inFile, line)){
            cout << line << endl;
        }  
        inFile.close(); 
    }
    return 0;
}