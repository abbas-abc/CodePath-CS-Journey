#include <iostream>
using namespace std;
int main(){
    double meter,cm;
    cout<<"Enter the Water level in meters: ";
    cin>>meter;
    cm=meter*100;

    if (cm<0){
        cout<<"Invalid number"<<endl;
    }
    else if (cm<50){
        cout<<"Low level"<<endl;
    }
    else if (cm>=50 && cm<=180){
        cout<<"Level safe"<<endl;
    }
    else {
        cout<<"Overflow risk"<<endl;
    }
    return 0;

}