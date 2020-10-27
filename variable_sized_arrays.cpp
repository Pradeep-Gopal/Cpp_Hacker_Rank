#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    int n, q, k, num, which, where;
    std::cin >> n >> q;
    std::vector<std::vector<int>> a;

    for (int i =0; i < n; i++)
    {
        std::cin >> k;
        std::vector<int> b;
        for (int j =0; j < k; j++)
        {
            std::cin >> num;
            b.push_back(num);
        }
        a.push_back(b);
    }

    for (int i = 0; i < q; i++)
    {
        std::cin >> which >> where;
        std::cout << a[which][where] <<std::endl;
    }

    return 0;
}