#include <iostream>
using namespace std;

int main() {
    int price = 100;
    double vat = 0.07;
    
    // บั๊กอยู่บรรทัดนี้ครับ! 
    // คำนวณราคารวม (100 บาท + VAT 7%) แต่เขียนสูตรผิด รันแล้วได้แค่ 7!
    double total = price+(price * vat);
    
    cout << "Total price: " << total << endl;
    return 0;
}
