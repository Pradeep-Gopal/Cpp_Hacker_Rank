#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n, type, op;
    std::set<int> s;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> type >> op;
        switch(type){
            case 1:
                s.insert(op);
                break;
            case 2:
                s.erase(op);
                break;
            case 3:
                std::cout << (s.find(op) == s.end()? "No" : "Yes") <<std::endl;
                break;
        }
    }
    return 0;
}
