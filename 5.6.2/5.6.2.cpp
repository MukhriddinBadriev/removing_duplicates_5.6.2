#include <iostream>

#include <set>

int main()
{
    std::set<int> num;
    int size=0;
 
    std::cout << "[IN]:" << '\n';
    std::cin>>size;    
    int* a = new int[size];
    for (int i = 0; i < size; i++) {
        std::cin >> a[i];
    }

    for (int elem = 0; elem < size;elem++) {
        num.insert(a[elem]);
    }

    auto r_i = num.rbegin();
    std::cout << "[OUT]:" << '\n';
    while (r_i != num.rend()){
        std::cout << *r_i << std::endl;
        r_i++;
    }

    delete[]a;

    return 0;
}