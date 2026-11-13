#include <iostream>
#include <string>
using namespace std;

int main() {

    double price = 0, total, discount, finalBill;
    int choice, quantity, discountPercent;
    int stock = 0;
    string itemName;
    bool validItem = true;

    cout << "===== Electronics Shop =====" << endl;
    cout << "1. Earphones  (Rs 1500)" << endl;
    cout << "2. USB Cable  (Rs 500)" << endl;
    cout << "3. Mouse      (Rs 1200)" << endl;
    cout << "4. Power Bank (Rs 5000)" << endl;
    cout << "Choose an item: ";
    cin>>choice;

    
    switch (choice) {
        case 1:
            itemName = "Earphones";
            price=1500;
            stock=20;
            break;
        case 2:
            itemName = "USB Cable";
            price=500;
            stock=50;
            break;
        case 3:
            itemName = "Mouse";
            price=1200;
            stock=15;
            break;
        case 4:
            itemName = "Power Bank";
            price=5000;
            stock=10;
            break;
        default:
            validItem = false;
    }

    if (!validItem) {
        cout << "Invalid choice" <<endl;
    }
    else {
        cout << "Item: " <<itemName<< " (stock: " << stock << ")" <<endl;
        cout << "Quantity: ";
        cin >> quantity;

        if (quantity <= 0) {
            cout << "Invalid quantity" <<endl;
        }
        else if (quantity > stock) {
            cout << "Not enough stock" <<endl;
        }
        else {
            total = price * quantity;

            if (total >=10000) {        
                discountPercent=15;
            }
            else if (total >=5000) {
                discountPercent=10;
            }
            else {
                discountPercent=0;
            }

            discount=total * discountPercent / 100;
            finalBill=total-discount;

            cout <<"Total Bill: "<<total<<endl;
            cout <<"Discount ("<<discountPercent<< "%): "<< discount<<endl;
            cout <<"Final Bill: "<<finalBill<<endl;
            cout <<"Remaining stock: "<<stock - quantity<<endl;
        }
    }
    return 0;
}