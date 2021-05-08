#include <array>
#include <iostream>
#include <stdexcept>

int sumArray(std::array<int, 5> arr) {
    int sum = 0;
    //for (auto el: arr){
    for(int i =0 ; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    std::array<int, 5> arr1 = {1,2,3,4,5};
    std::cout << sumArray(arr1) << std::endl;
    
    std::cout << arr1.front() << std::endl; // 1
    std::cout << arr1.back() << std::endl; // 5
    std::cout << *(arr1.data() + 1) << std::endl; // 2

    std::array<int, 4> arr = {1,2,3,4};
    for(int i = 0; i < arr.size(); i++) 
        std::cout << arr[i] << std::endl;
    try {
        std::cout << arr.at(3) << std::endl; // No error
        std::cout << arr.at(4);
    } catch (const std::out_of_range& ex){
        std::cerr << ex.what();
    }
    return 0;
}
