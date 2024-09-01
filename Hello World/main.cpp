#include <iostream>
//getting standard library. input output stream

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    
    int temp;
    temp = b;
    b = a;
    a = temp;
    
    cout << "b is ";
    cout << b;
    cout << "\na is ";
    cout << a;
    
    return 0;
    
}
