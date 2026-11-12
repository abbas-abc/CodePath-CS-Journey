#include <iostream>
using namespace std;
int main(){
    double price,discount,total,final_bill;
    int quantity,stock,discountpercent;

    cout << "===== Electronics Shop =====" << endl;
    
    cout << "Price: ";
    cin >> price;
    cout << "Quantity: ";
    cin >> quantity;
    cout << "Stock: ";
    cin >> stock;

    if(price<=0 || quantity<=0 || stock<0){
        cout<<"Invalid input"<<endl;
    }
    else if(quantity>stock){
        cout<<"Not enough stock"<<endl;
    }
    else{
        total = price*quantity;

        if(total>=10000){            
            discountpercent=15;
        }
        else if(total>=5000){
            discountpercent=10;
        }
        else{
            discountpercent=0;
        }
        discount = total * discountpercent/100;   
        final_bill = total-discount;

        cout<< "Total Bill: " << total << endl;
        cout<< "Discount (" << discountpercent << "%): " << discount << endl;   
        cout<< "Final Bill: " << final_bill << endl;
    }   
    return 0;
}