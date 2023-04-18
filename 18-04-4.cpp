#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    if(n < 100 && n>9) {
        cout << "Введено двухзначное число";
    } else if(n > 999 && n < 10000) {
        cout << "Введено четырёхзначное число";
    } else if(n > 99 && n < 1000) {
        cout << "Произведение цифр трехзначного числа: " << (n % 10) * (n / 10 % 10) * (n / 100 % 10);
    } else {
        cout << "Вы ввели какое то другое число";
    }
    return 0;
}
