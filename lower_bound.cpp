#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> v;
    int n, data, m, query;
    std::vector<int>::iterator index;
    std::cin >> n;

    for(int i =0; i < n; i++){
        std::cin >> data;
        v.push_back(data);
    }

    std::sort(v.begin(), v.end());
    std::cin >> m;
    for(int i = 0; i < m; i++){
        std::cin >> query;
        index = std::lower_bound(v.begin(), v.end(), query);
        if(query == v[index - v.begin()])
            std::cout << "Yes " << index - v.begin() + 1 << std::endl;
        else
            std::cout << "No " << index - v.begin() + 1 << std::endl;
    }

    return 0;
}