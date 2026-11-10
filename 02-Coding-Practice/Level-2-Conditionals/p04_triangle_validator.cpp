#include <iostream>
using namespace std;
int main(){
    int side1,side2,side3;

    cout<<"Enter the length of each side: ";
    cin>>side1>>side2>>side3;

    if (side1<=0 || side2<=0 || side3<=0 ){
        cout<<"Invalid side"<<endl;

    }
    else if(side1+side2<=side3 || side2+side3<=side1 || side1+side3<=side2){
        cout<<"Not a triangle"<<endl;
    }
    else if(side1==side2 && side2==side3){
        cout<<"Equilateral"<<endl;
    }
    else if(side1==side2 || side2==side3 || side1==side3 ){
        cout<<"Isosceles"<<endl;
    }

    else{
        cout<<"Scalene"<<endl;
    }

    return 0;
    
}