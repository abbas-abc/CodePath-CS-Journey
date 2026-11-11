#include <iostream>
using namespace std;
int main(){
    int marks, attendance;
    
    cout<<"Marks: ";
    cin>>marks;
    cout<<"Attendance: ";
    cin>>attendance;

    if (marks<0 || attendance<0 || marks>100 || attendance>100){
        cout<<"Invalid input"<<endl;
    }
    else if(marks>=50 && attendance>=75){
        cout<<"ELIGIBLE TO PASS"<<endl;
    }
    else{
        cout<<"NOT ELIGIBLE"<<endl;
    }
    return 0;
}