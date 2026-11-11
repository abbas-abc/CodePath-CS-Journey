#include <iostream>
using namespace std;
int main(){
    double num1, num2;
    int choice;

    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    cout<<"Enter the two numbers: ";
    cin>>num1>>num2;
    cout<<"Enter the choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout << "Result = " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result = " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result = " << num1 * num2 << endl;
            break;
        case 4:
            if ( num2 != 0 ) {
                cout << "Result = " << num1 / num2 << endl;
            }
            else {
                cout<<"Cannot divide by zero"<<endl;
            }
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }

    return 0;
}