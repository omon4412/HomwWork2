#include "ram.hpp"

RAM::RAM() : _size(0), _type(MemoryType::None), _frequency(0)
{

}

RAM::RAM(int size, MemoryType type, int frequency)
{
    _size = size;
    _type = type;
    _frequency = frequency;
}

RAM::RAM(const RAM &other)
{
    _size = other._size;
    _type = other._type;
    _frequency = other._frequency;
}

RAM RAM::operator=(const RAM &other)
{
    _size = other._size;
    _type = other._type;
    _frequency = other._frequency;
    return *this;
}

int RAM::Initialization()
{
    return 0;
}
