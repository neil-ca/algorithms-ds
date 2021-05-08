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
    std::cout << "shared_ptr test started" << std::endl;
    std::shared_ptr<CruiseControl> cruiseControlMaster(nullptr);
    {
        std::shared_ptr<CruiseControl> cruiseControlSlave =
            std::make_shared<CruiseControl>();
        cruiseControlMaster = cruiseControlSlave;
    }
    std::cout << "shared_ptr test finished" << std::endl;
}
