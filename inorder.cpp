#include <iostream>
using namespace std;

int main() {

    cout << "Enter three integers";
    int num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if ((num1 > num2 && num2 > num3) || (num1 < num2 && num2 < num3)){
        cout << "In order.";
    } else {
        cout << "Not in order.";
    }
    return 0;

}