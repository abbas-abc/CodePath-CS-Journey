#include <iostream>
using namespace std;
int main(){
    float temperature;
    cout<<"Enter the temperature: ";
    cin>>temperature;

    if (temperature<10 || temperature>45){
        cout<<"Warning"<<endl;
    }
    else{
        cout<<"Normal"<<endl;
    }
    return 0;
}