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


