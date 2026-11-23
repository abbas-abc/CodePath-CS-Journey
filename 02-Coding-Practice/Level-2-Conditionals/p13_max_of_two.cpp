#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"First number: ";
    cin>>num1;

    cout<<"Second number: ";
    cin>>num2;

    cout << "Bigger: " << ( num1>num2 ? num1 : num2 ) << endl;
    return 0;
}