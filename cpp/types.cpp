#include <iostream>
#include <limits>
#include <ostream>

int main()
{
    // integral types section
    std::cout << "char " << int(std::numeric_limits<char>::min())
        << " - " << int(std::numeric_limits<char>::max())
        << " size (Byte) = " << sizeof(char) << std::endl;
    std::cout << "wchar_t " << std::numeric_limits<wchar_t>::min()
        << " - " << std::numeric_limits<wchar_t>::max()
        << " size (Byte) = " << sizeof(wchar_t) << std::endl;
    std::cout << "int " << std::numeric_limits<int>::min()
        << " - " << std::numeric_limits<int>::max() << " size (Byte) = " << sizeof(int) << std::endl;
    std::cout << "bolean " << std::numeric_limits<bool>::min()
        << " - " << std::numeric_limits<bool>::max() << " size (Byte) = " << sizeof(bool) << std::endl;
    std::cout << "long " << std::numeric_limits<long>::min()
        << " - " << std::numeric_limits<long>::max() << " size (Byte) = " << sizeof(long) << std::endl;
    std::cout << "float " << std::numeric_limits<float>::min()
        << " - " << std::numeric_limits<float>::max() << " size (Byte) = " << sizeof(float) << std::endl;
    
    // Automatic type deduction and decltype 
    auto speed = 10; // speed is an int
    std::cout << speed;
    // auto height = calculate (); // height will be of the type returned by calculate()
    // decltype() is another mechanism offered by C++ that can deduce the type of expression
    // when the expression is more complex than auto case
    // decltype(a) y = x + 1; // deducing the type of a 
    // decltype(str->x) y; // deducing the type of str->x, where str is a struct and x 
    // an int element of that struct
    return 0;
}
