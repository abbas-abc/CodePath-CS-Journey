#include <iostream>
using namespace std;
int main(){

    double voltage;
    cout<<"Voltage: ";
    cin>>voltage;

    cout<<"ENTERED VOLTAGE: "<<voltage<<endl;

    if(voltage>210){
        cout<<"HIGH VOLTAGE WARNING"<<endl;
    }
    else if(voltage<160){
        cout<<"LOW VOLTAGE WARNING"<<endl;
    }
    else{
        cout<<"VOLTAGE NORMAL"<<endl;
    }
    
    return 0;

}