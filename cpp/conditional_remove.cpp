#include <iostream>
#include <forward_list>
#include <ostream>

struct citizen {
    std::string name;
    int age;
};

std::ostream& operator << (std::ostream& os, const citizen& c) {
    return (os << "[Name: " << c.name << " , Age: " << c.age << "]");
}

int main()
{
    std::forward_list<citizen> citizens = {{"Neil", 22}, {"Rohit", 16}, {"Rohan", 9}, {"lodritch", 35}};

    auto copy = citizens;
    std::cout << "All: ";
    for(const auto &i : copy)
        std::cout << i << "   " << std::endl;


    std::cout << "---- List of people that can vote -----" << std::endl;
    citizens.remove_if([](const citizen& c) {
            return (c.age < 18);
            });
    for (const auto &c : citizens) 
        std::cout << c << "   ";
}
