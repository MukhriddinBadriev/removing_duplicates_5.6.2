#include <iostream>

#include <set>
#include <vector>

int main()
{
    std::set<int> num;
    std::vector<int>v;

    std::cout << "[IN]:" << '\n';
    int size = 0;
    std::cin >> size;

    for (int i = 0; i < size; i++) {
        int elem;
        std::cin >> elem;
        v.push_back(elem);
    }

    for (int elem = 0; elem < v.size(); elem++){
        num.insert(v[elem]);
    }

    auto r_i = num.rbegin();
    std::cout << "[OUT]:" << '\n';
    while (r_i != num.rend()) {
        std::cout << *r_i << std::endl;
        r_i++;       
    }

    return 0;
}