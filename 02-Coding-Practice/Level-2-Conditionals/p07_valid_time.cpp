#include <iostream>
using namespace std;
int main(){
    int hours,minutes;
    cout<<"Hours: ";
    cin>>hours;
    cout<<"Minutes: ";
    cin>>minutes;

    if(hours<0 || hours>23 || minutes<0 || minutes>59){
        cout<<"Invalid time"<<endl;
    }
    else{
        cout<<"Valid time"<<endl;
    }
    return 0;
}