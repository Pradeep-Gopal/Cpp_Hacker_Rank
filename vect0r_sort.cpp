
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    std::vector<int> v;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int data;
        std::cin >> data;
        v.push_back(data);
    }

    sort(v.begin(), v.end());
    for(auto i : v)
        std::cout << i <<" ";

    return 0;
}