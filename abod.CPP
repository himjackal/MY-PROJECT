#include <iostream>
using namespace std;

int main() {
    int consumption;
    int pricePerUnit;
    int totalBill;

    // إدخال الاستهلاك
    cout << "Enter electricity consumption (in kilowatts): ";
    cin >> consumption;

    // تحديد سعر الوحدة
    if (consumption <= 100) {
        pricePerUnit = 250;
    } else if (consumption <= 300) {
        pricePerUnit = 300;
    } else {
        pricePerUnit = 350;
    }

    // حساب الفاتورة
    totalBill = consumption * pricePerUnit;

    // تقييم الاستهلاك
    if (totalBill > 100000) {
        cout << "\nHigh consumption – Please reduce usage\n";
    } else {
        cout << "\nNormal consumption\n";
    }

    // عرض النتائج
    cout << "\nElectricity consumption: " << consumption << " units";
    cout << "\nPrice per unit: " << pricePerUnit << " IQD";
    cout << "\nTotal bill amount: " << totalBill << " IQD";

    return 0;
}
