#include <forward_list>
#include <functional>
#include <iostream>
#include <ostream>

int main()
{
    std::forward_list<int> list = {1,2,3,4,5,6,7};
    list.push_front(0);

    auto it = list.begin();
    list.insert_after(it, 50);

    for(auto &i : list)
        std::cout << i << std::endl;
 
    list.pop_front();
    auto it2 = list.begin();
    list.erase_after(it2, list.end());

    std::cout << "-----------" << std::endl;
    for(auto &x : list)
        std::cout << x << std::endl;


    std::forward_list<int> list1 = {23,0,2,-3,90,-1};
    list1.sort(std::greater<int>());
    for(auto &i : list1) 
        std::cout << i <<  "  ";
}

