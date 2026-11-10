#include <iostream>
using namespace std;
int main(){
    double price,total_bill,discount,after_discount;
    int quantity,stock;

    cout<<"Price: ";
    cin>>price;

    cout<<"Quantity: ";
    cin>>quantity;

    cout<<"Stock: ";
    cin>>stock;
    
    total_bill=price*quantity;
    
    discount= total_bill*10/100;

    after_discount=total_bill-discount;

    
    if(price<=0 || quantity<=0 || stock<0){
        cout<<"Invalid input"<<endl;
    }
    else if(quantity>stock){
        cout<<"Not enough stock"<<endl;
    }
    else if(total_bill>1000){
        cout<<"Total bill: "<<total_bill<<endl;
        cout<<"Discount: "<<total_bill-after_discount<<endl;
        cout<<"Discounted bill: "<<after_discount<<endl;
    }
    else{
        cout<<"Total bill: "<<total_bill<<endl;
        
    }   
    return 0;
}