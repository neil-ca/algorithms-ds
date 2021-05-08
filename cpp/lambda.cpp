#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v1 { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for_each (begin (v1), end(v1), [](int x) {std::cout << x << std::endl;});
    
    std::string prefix ("0");
    for_each (begin (v1), end(v1), [&prefix](int x) {std::cout << prefix << x << std::endl;} );
    return 0;
}
