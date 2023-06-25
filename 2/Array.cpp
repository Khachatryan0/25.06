#include <iostream>
class Array
{
    int size;
    int* ptr;
    public:
    Array(const int size1) : size()
    {
        size = size1;
        ptr = new int[size];
    }
    int get_size()const
    {
        return size;
    }
    ~Array()
    {
        delete[] ptr;
    }


};