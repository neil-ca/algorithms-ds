#include <forward_list>
#include <iostream>
#include <ostream>

int main()
{
    std::forward_list<int> list = {1,2,3};
    list.push_front(0);

    auto it = list.begin();
    list.insert_after(it, 50);

    for(auto &i : list)
        std::cout << i << std::endl;
    list.pop_front();
    for(auto &x : list)
        std::cout << x << std::endl;
}

