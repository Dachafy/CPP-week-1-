//strings is an array of char.

#include <iostream>
#include <string>
using namespace std;

int main() {

    string greeting = "Hello";

    //concatenation (concat) to add two variables together
    /*

    //we can use the "+" operator
    string fname = "John";
    string lname = "Doe";

    string fullname = fname + lname;

    string fullname1 = fname + " " + lname;

    cout << fullname << endl;
    cout << fullname1 << endl;

    */
    
    /*

    //we can also append

    string fname = "John";
    string lname = "Doe";

    string fullName = fname.append(lname);
    cout << fullName <<endl;
    
    */

    int a = 10;
    int b = 20;

    cout << "Additional: " << (a + b) << endl;

    string strA = "10";
    string strB = "20";

    cout << "String concate: " << (strA + strB) <<endl;
    





    return 0;
}