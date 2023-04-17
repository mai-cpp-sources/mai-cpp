#include <iostream>
#include <cmath>

using namespace std;

int main() {
    /* double a;
    double b;
    double c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    double p;
    double s;
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    
    cout << "The square is " << s << endl;
    string a = "Hello ";
    string b = "OWO";
    string c = " World";
    string s;
    s = a+b+c+" nya!";
    cout << s; */
    
    int a;
    int b;
    string sign;
    cout << "Введите первое число ";
    cin >> a;
    cout << "Введите второе число ";
    cin >> b;
    cout << "Введите знак ";
    cin >> sign;
    
    if(sign == "+") {
        cout << (a+b);
    } else if(sign == "-"){
        cout << (a-b);
    } else if(sign == "/"){
        if(b == 0) {
            cout << "Can`t divide by zero";
        }
        else {
            cout << (a/b);
        }
    } else if(sign == "*"){
        cout << (a*b);
    } else if(sign == "**"){
        cout << (a^b);
    } else {
        cout << "Знак не распознан :(";
    }
    
}

/*
int main()
{
    /*int x;
    int y;
    int z;
    cin>>x;
    y = x-1;
    z = x+1;
    cout << "Number " << x << " is between " << (x-1) << " and " << (x+1) << endl;
    string w;
    cin>>w;
    cout << "Length of the word " << w << " is " << (w.length()) << endl;
    return 0;
}
#include <cstdlib>
#include <iostream>
#include <ctime>
 
int main() 
{
    std::srand(std::time(nullptr));
    int random_variable = std::rand();
    std::cout << "Random value on [0 " << RAND_MAX << "]: " 
              << random_variable << '\n';
 
    for (int n=0; n != 20; ++n) {
        int x = 7;
        while(x > 6) 
            x = 1 + std::rand()/((RAND_MAX + 1u)/6);
        std::cout << x << ' ';
    }
}*/
