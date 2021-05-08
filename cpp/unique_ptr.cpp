#include <iostream>
#include <memory>
#include <ostream>

class CruiseControl {
    public:
        CruiseControl() {
            std::cout << "Cruise control object created :D" << std::endl; 
        }
        ~CruiseControl() {
            std::cout << "Cruise control object destroyed" << std::endl;
        }
        void increaseSpeedTo(int speed) {
            std::cout << "Speed at " << speed << std::endl;
        }
};
int main() 
{
    std::cout << "unique_ptr test started " << std::endl;
    std::unique_ptr<CruiseControl> cruiseControl = std::make_unique<CruiseControl>();
    cruiseControl->increaseSpeedTo(12);
    std::cout << "unique_ptr test finished " << std::endl;
    cruiseControl->increaseSpeedTo(15);

    // with arrays
    std::cout << "unique_ptr test started 2" << std::endl;
    std::unique_ptr<CruiseControl[]> cruiseControl2 =
        std::make_unique<CruiseControl[]> (3);
    cruiseControl2[1].increaseSpeedTo(25);
    std::cout << "unique_ptr test finished 2" << std::endl;
}
