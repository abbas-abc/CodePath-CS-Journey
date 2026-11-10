#include <iostream>
using namespace std;
int main(){
    double weight,height,BMI;
    cout<<"Enter the weight: ";
    cin>>weight;
    cout<<"Enter the height: ";
    cin>>height;

    
    if(weight<=0 || height<=0){
        cout<<"Invalid input"<<endl;
    }
    else{
        BMI = weight / (height * height);
        cout<<"BMI: "<<BMI<<endl;
    
        if(BMI<18.5){
            cout<<"Underweight"<<endl;
        }
        else if(BMI>=18.5 && BMI<25){
            cout<<"Normal"<<endl;
        }
        else if(BMI>=25 && BMI<30){
            cout<<"Overweight"<<endl;
        }
        else{
            cout<<"Obese"<<endl;
        }
    }
    return 0;
}