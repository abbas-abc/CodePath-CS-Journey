#include <iostream>
using namespace std;
int main(){
    int units;
    cout<<"Units consumed: ";
    cin>>units;
    
    if (units<0){
        cout<<"Invalid units"<<endl;
    }
    else if (units<=100){
        cout<<"Low"<<endl;
    }
    else if (units<=300){
        cout<<"Medium"<<endl;
    }
    else if (units<=500){
        cout<<"High"<<endl;
    }
    else{
        cout<<"Very High"<<endl;
    }
    return 0;
}