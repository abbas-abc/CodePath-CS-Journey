#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;

    if (marks>100 || marks<0){
        cout<<"Invalid marks"<<endl;
    }
    else if (marks>=90){
        cout<<"Grade A"<<endl;
    }
    else if (marks>=75){
        cout<<"Grade B"<<endl;
    }
    else if (marks>=60){
        cout<<"Grade C"<<endl;
    }
    else if (marks>=50){
        cout<<"Grade D"<<endl;
    }
    else {
        cout<<"Grade F"<<endl;
    }

    return 0;

}


//     A = 90–100, B = 75–89, C = 60–74, D = 50–59, F = below 50.
// Requirements: Use an else-if ladder. If marks are below 0 or above 100, display “Invalid marks”.
