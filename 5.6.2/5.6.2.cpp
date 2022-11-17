#include <iostream>

#include <set>
#include <vector>

int main()
{
    std::set<int> num;
    std::vector<int>v = { 1,5,1,3,4,4 };

    std::cout << "[IN]:" << '\n'<<v.size()<<'\n';   
    
    for (const auto& elem : v) {
        std::cout << elem << '\n';
    }

    for (int elem = 0; elem < v.size(); elem++) {
        num.insert(v[elem]);
    }

    auto r_i = num.rbegin();
    std::cout << "[OUT]:" << '\n';
    while (r_i != num.rend()){
        std::cout << *r_i << std::endl;
        r_i++;
    }

    return 0;
}