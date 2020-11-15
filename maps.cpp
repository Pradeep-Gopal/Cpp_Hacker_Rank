#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    std::map<std::string, int> m;
    std::map<std::string, int> :: iterator itr;
    int n, cases, value, marks;
    std::string name;
    std::cin >> n;
    for (int i =0; i < n; i++){
        std::cin >> cases >> name;
        switch (cases) {
            case 1:
                std::cin >> value;
                if (m.find(name) != m.end()){
                    marks = m[name];
                    m[name] = marks + value;
                }
                else
                    m[name] = value;
                break;
            case 2:
                m.erase(name);
                break;
            case 3:
                std::cout << m[name] <<std::endl;
                break;
        }
    }

    return 0;
}



