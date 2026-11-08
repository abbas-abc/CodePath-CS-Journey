#include <iostream>
using namespace std;
int main(){
    int id, pin;
    cout<<"Enter the user ID: ";
    cin>>id;
    cout<<"Enter the PIN: ";
    cin>>pin;

    if (id==1234){
        if (pin==2468){
            cout<<"Login successful"<<endl;
        }
        else{
            cout<<"Incorrect PIN"<<endl;
        }
    }
    else{
        cout<<"User ID not found"<<endl;
    }
    return 0;
}