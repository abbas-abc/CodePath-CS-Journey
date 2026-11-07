#include <iostream>
using namespace std;
int main(){
    int mins,hour,minutes;
    cout<<"Enter the total minutes: ";
    cin>>mins;

    hour = mins/60;
    minutes = mins % 60;
    cout<<hour<<" Hours "<<minutes<<" minutes"<<endl;

    return 0;
}