#include <iostream>
using namespace std;
int main(){
    int role,action;
    cout<<"Enter the role code: ";
    cin>>role;
    cout<<"Enter the action code: ";
    cin>>action;

    if(role==1){
        if(action==1 ||action==2||action==3){
        cout<<"Access granted"<<endl;
        }
        else{
        cout<<"Unknown action"<<endl;
        }
    }    
    else if(role==2){
        if(action==1 || action==2){
            cout<<"Access granted"<<endl;
        }
        else{
            cout<<"Access denied"<<endl;
        }
    }
    else if(role==3){
        if(action==1){
            cout<<"Access granted"<<endl;
        }
        else{
            cout<<"Access denied"<<endl;
        }
    }
    else{
        cout<<"Unknown role"<<endl;
    }
    return 0;
    
}