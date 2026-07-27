#include <iostream>
using namespace std;

int main() {
    int price = 100;
    double vat = 0.07;

    double total = price+(price * vat);
    
    cout << "Total price: " << total << endl;
    return 0;
}
