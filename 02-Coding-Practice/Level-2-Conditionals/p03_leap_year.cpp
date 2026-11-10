#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){              
        cout<<"Leap year"<<endl;
    }
    else{
        cout<<"Not leap year"<<endl;
    }
    return 0;
}
//the year % 100 !=0 check wether its century year or not and century year will skip 1st rule