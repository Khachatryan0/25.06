#ifndef _CAR_INTERFACE_CPP_
#define _CAR_INTERFACE_CPP_
#include <string>
#include <iostream>
class car_interface
{
    public:
    virtual std ::string starter() = 0;
    virtual std :: string gas_pedal() = 0;
    virtual std :: string brake_pedal() = 0;
};
#endif
