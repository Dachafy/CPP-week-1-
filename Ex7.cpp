#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Step 3:
int totalPrice(double price[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += price[i];
    }
    return sum;

}

int main() {
    //Step 2:
    const int size = 3;
    string product[size];
    double price[size];
    //Step 1:
    for(int i = 0; i < size; i++){
        cout << "Enter product's name: ";
        cin >> product[i];

        cout << "Enter product's price: $";
        cin >> price[i];
    }

    //Step 4:
    double* ptr = &price[0];
    *ptr = 17;

    //Step 5:
    fstream file;
    string data;
    
    file.open("product.txt",  ios::app);
    while(!file){
        cout << "Error loading file.";
        return 1;
    }

    file << "\nProduct and prices:\n";
    for(int i = 0; i < size; i++){
        file << product[i] << " " << "$" <<price[i] <<endl;
    }
    
    file << "\nTotal price is: " << totalPrice(price, size) << endl;
    file.close();

    fstream inFile("product.txt", ios::in);
    string line;

    if(!inFile){
        cout << "Error loading file.";
        return 1;
    } else {
        cout << "\nReading the file..." <<endl;
        while(getline(inFile, line)){
            cout << line << endl;
        }
        inFile.close();
    }

    return 0;
}