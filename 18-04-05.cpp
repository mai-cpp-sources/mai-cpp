#include <iostream>
using namespace std;

int main()
{
  int n = 0;
  int i = 0;
    int a,b,c;
    cout << "Введите трехзначное целое число: ";
    cin >> n;
    a = n/100;
    b = (n % 100)/10;
    c = n % 10;
    if (a%2 == 0) {
      i = i+1;
    } else{
        i = i;
    }
     if (b%2 == 0) {
        i = i+1;
        }else{
            i = i;
        }
     if (c%2 == 0) {
        i = i+1;
        }else{
            i = i;
    }
     cout << i <<endl;
}
//
