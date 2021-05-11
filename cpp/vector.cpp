#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>

int main()
{
    // empty vector {}
    std::vector<int> v;
    v.push_back(1); 
    v.push_back(2);
    v.insert(v.begin(), 0);
    v.insert(std::find(v.begin(), v.end(), 1), 4);
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << std::endl; 
    std::cout << "-------------" << std::endl;

    std::vector<int> v1 = {0,1,2,1,4,5,6,7,8,9};
    v1.erase(v1.begin());
    v1.erase(v1.begin() + 1, v1.begin() + 4);
    for(auto & elem : v1)
        std::cout << elem << std::endl; //
    //for (auto i : v1) 
    //std::cout << v1[1] << std::endl;

    std::cout << "-------------" << std::endl;
    std::string hello = "hello";
    std::vector<std::string> string_container;
    string_container.push_back(hello);
    string_container.push_back("world!");
    std::cout << string_container[0]
        << ' '
        << string_container[1]
        << "\n";
}
