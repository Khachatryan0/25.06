#include "car_interface.cpp"
class BMW : public car_interface
{
    public:
    std :: string starter() override
    {
        return "your car is ready to go.\n";
    }
    std :: string gas_pedal() override
    {
        return "The car speeds up \n";
    }
    std :: string brake_pedal() override
    {
        return "the car is slows down \n";
    }
    

};