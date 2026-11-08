#include <iostream>
using namespace std;
int main(){
    int marks,attendance;
    cout<<"Enter the marks: ";
    cin>>marks;
    cout<<"Enter the Attendance: ";
    cin>>attendance;
    
    if (marks<0 || marks>100 || attendance>100 || attendance<0){
        cout<<"Invalid"<<endl;
    }
    else if (marks>=80){
        if (attendance>=75){
            cout<<"Scholarship approved"<<endl;
        }
        else{
            cout<<"Attendance too low"<<endl;
        }
    }
    else{
        cout<<"Marks too low"<<endl;
    }
    return 0;
}