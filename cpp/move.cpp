#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
#include <utility>
#include <vector>


void print (std::string &&s) {
    std::cout << "print (std::string &&s) " << std::endl;
    std::string str (std::move(s));
    std::cout << "universal reference ==> str = " << str << std::endl;
    std::cout << "universal reference ==> s = " << s << std::endl;
}

void print (std::string &s) {
    std::cout << "print (std::string &s) " << std::endl;
}

int main() {
    std::vector<int> a = {1, 2, 3, 4, 5};
    auto b = std::move(a); // It casts the vector, a, to the tvalue reference
    // As it as an rvalue reference, the vector move constructor is called, thich moves
    // the content of the a vector to the b vector
    // 3. a doesn't have the original data anymore, b has.
    std::cout << "a: " << a.size() << std::endl;
    std::cout << "b: " << b.size() << std::endl;
    
    std::cout << "-----------------" << std::endl;

    std::string str ("This is a string");
    print(str);
    std::cout << "==> str = " << str << std::endl;
    
    std::cout << "-----------------" << std::endl;
    print("Hello");
    return 0;
}
