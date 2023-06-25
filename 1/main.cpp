#include "e90.cpp"
int main(int argc, char** argv)
{
    e90 our_car;
    std :: cout << "Engine workin volume = " << our_car.get_engine_volume() << std :: endl;
    std :: cout << "Horsepower = " << our_car.get_horsepower() << std :: endl;
    std :: cout << our_car.starter() << std :: endl;
    std :: cout << our_car.gas_pedal() << std :: endl;
    std :: cout << our_car.brake_pedal() << std :: endl;
    int b = 0;
    std :: cin >> b;
    return 0;
}