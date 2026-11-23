#include <iostream>
#include <string>

using namespace std;

int main(){
    int count;
    cin >> count;

    const string label =(count == 1) ? "item" : "items";

    cout << "You have " <<count<< " " << label <<endl;

    return 0;
}
