#include <iostream>
using namespace std;

int main() {
    int amount, balance;
    cout << "Enter your balance: ";
    cin >> balance;
    cout << "Enter the amount: ";
    cin >> amount;

    if (balance < 0 || amount <= 0) {
        cout << "Invalid amount" << endl;
    }
    else if (amount > balance) {
        cout << "Insufficient balance" << endl;
    }
    else {
        if (amount % 500 != 0) {
            cout << "Amount must be a multiple of 500" << endl;
        }
        else {
            cout << "Withdrawal successful." << " Remaining balance: " << balance - amount << endl;
        }
    }

    return 0;
}
