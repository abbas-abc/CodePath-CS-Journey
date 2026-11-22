#include <iostream>
#include <string>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;
    string result = (marks >= 50) ? "Pass" : "Fail";
    cout<< result << endl;
    return 0;
}