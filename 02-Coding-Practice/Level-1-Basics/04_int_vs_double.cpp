#include <iostream>
using namespace std;
int main(){
    int a=-3, b=3;
    double wrong_result= a/b;
    double correct_result=(double)a/b;
    cout<<"correct result: "<<correct_result<<endl;
    cout<<"wrong result: "<<wrong_result<<endl;
    return 0;

}