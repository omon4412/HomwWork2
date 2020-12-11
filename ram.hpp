#ifndef RAM_HPP
#define RAM_HPP

#include "MemoryType.hpp"

class RAM
{
private:
    int _size;
    MemoryType _type;
    int _frequency;
public:
    RAM();
    void SetSize(const int size);
    int GetSize();
    MemoryType SetMemoryType(const MemoryType type);
    int GetMemoryType();
    void SetFrequency(const int frequency);
    int GetFrequency();
private:
    int Initialization();
};

#endif // RAM_HPP
