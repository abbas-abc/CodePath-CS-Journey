#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"a: ";
    cin>>a;
    cout<<"b ";
    cin>>b;

    int result= (b!=0) ? a/b : 0;
    cout<<result<<endl;
    
    return 0;
}    