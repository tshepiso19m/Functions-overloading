// Functions overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
using namespace std;
using namespace std;
using namespace std;

double MaxNum(double num1, double num2) {
    if (num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }

}

double LargeNum(double num1, double num2, double num3) {
    /* Function MaxNum return the maximum number between num1 and num2*/

    return MaxNum(MaxNum(num1, num2), num3);

}

int main() {

    double num1, num2, num3;

    cout << "Enter any three numbers" << endl;
    cin >> num1 >> num2 >> num3;

    cout << "The maximum number is " << LargeNum(num1, num2, num3);


    return 0;


}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
