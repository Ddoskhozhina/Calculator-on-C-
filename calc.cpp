#include <iostream>

using namespace std;

int main() {
    int a, b, selection;

    cout << "Input numbers:"<< endl;
    cin >> a >> b;
    cout << "Choose arith. operation:" << endl <<
        "1. Addition" << endl <<
        "2. Subtraction" << endl << 
        "3. Multiplication" << endl << 
        "4. Division" << endl;

    cin >> selection;
    switch (selection) {
    case 1:
        cout <<"Addition output: "<< a + b << endl;
        break;
    case 2:
        cout << "Subtraction output: " << a - b << endl;
        break;
    case 3:
        cout << "Multiplication output: " << a * b << endl;
        break;
    case 4:
        cout << "Division output: " << (float)a / b << endl;
        break;


    default:
        cout << "Error, inadmissible input!" << endl;
        break;
    }
}