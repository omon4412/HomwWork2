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

std::ostream& operator<< (std::ostream &out, const RAM &ram)
{
    out << "\t����������� ������: " << std::endl;
    out << "\t\t����� ������                  - " << ram._size << " ��" << std::endl;
    out << "\t\t��� ������                    - " << ram._type << std::endl;
    out << "\t\t������� ������                - " << ram._frequency << " ���" << std::endl;
    return out;
}

int RAM::GetSize() const
{
    return _size;
}

MemoryType RAM::GetMemoryType() const
{
    return _type;
}

int RAM::GetFrequency() const
{
    return _frequency;
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

RAM RAM::PullOut()
{
    RAM returned(*this);
    _size = 0;
    _type = MemoryType::None;
    _frequency = 0;
    return returned;
}

void RAM::InsertIn(const RAM &ram)
{
    _size = ram._size;
    _type = ram._type;
    _frequency = ram._frequency;
}
