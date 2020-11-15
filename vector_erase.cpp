#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n, m, a, b;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int data;
        std::cin >> data;
        v.push_back(data);
    }

    std::cin >> m;
    v.erase(v.begin()+m - 1);


    std::cin >> a >> b;

    v.erase(v.begin() + a - 1, v.begin() + b - 1);

    std::cout << v.size() << std::endl;

    for(auto i : v)
        std::cout<<i << " ";
    return 0;
}