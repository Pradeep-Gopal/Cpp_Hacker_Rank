#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string a,b;
    cin >> a >>b;
    cout << a.size() << " " << b.size() << std::endl;
    cout << a + b << std::endl;
    char temp = a[0];
    char temp1 = b[0];
    a[0] = temp1;
    b[0] = temp;
    std::cout << a <<" " << b ;


    return 0;
}