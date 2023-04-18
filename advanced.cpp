#include <iostream>

class A {
public:
    int operator++() {
        var = var + 1;
        return var;
    }
    
    
    int operator++(int) {
        int temp = var;
        var = var + 1;
        return temp;
    }
    
    int var = 0;
};

std::ostream& operator<<(std::ostream& out, const A& a) {
    out << a.var ;
    return out;
}

int main() {
    A a;
    std::cout  << " " << a++ ;
    std::cout  << " " << a ;
    // int n = 35;
    // while(n++ <= 87) {
    //     if(n%7 == 1 || n%7 == 2 || n%7 == 5) {
    //         std::cout << n << " ";
    //     }
    // }
    // return 0;
}
