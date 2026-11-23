#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Number: ";
    cin>>num;

    int sign = (num>0) ? 1 : ((num<0) ? -1 : 0);
    cout<<sign<<endl;
    return 0;
}