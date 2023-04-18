#include <iostream>                                                                                 
using namespace std;
int main() {
    int n = 1000;
    
    /*
    if(n < 999 && n>0) {
        cout << "Введено меньшее число";
    } else if(n > 9999) {
        cout << "Введено большее число";
    } else if(n > 99 && n < 1000) {
        cout << "В четырёхзначном числе " << m << " чётных цифр";
    } else {
        cout << "Вы ввели какое то другое число";
    } */


    for(int i = 1000; i < 9999; i++) {
        int edn = i % 10;
        int des = i / 10 % 10;
        int sot = i / 100 % 10;
        int tys = i / 1000 % 10;
        int sym = edn + des + sot + tys;
        if(sym == 15) {
            cout << i << " ";
        }
    }

    return 0;
}
