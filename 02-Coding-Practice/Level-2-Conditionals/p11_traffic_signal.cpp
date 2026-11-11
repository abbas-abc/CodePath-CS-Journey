#include<iostream>
using namespace std;

int main(){
    char signal;
    cout << "Enter signal (R/Y/G): ";
    cin >> signal;

    switch (signal){
        case 'R': //red
        case 'r':
            cout<<"Stop"<<endl;
            break;

        case 'Y':  //yellow
        case 'y':
            cout<<"Get ready"<<endl;
            break;

        case 'G':  //green
        case'g':
            cout<<"Go"<<endl;
            break;
        
        default: 
            cout<<"Invalid signal"<<endl;

    
    }
    return 0;

}