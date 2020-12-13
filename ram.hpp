#ifndef RAM_HPP
#define RAM_HPP

#include "MemoryType.hpp"

class RAM
{
private:
    friend class ComputerCase;
    int _size;
    MemoryType _type;
    int _frequency;
public:
    RAM();
    RAM(int size, MemoryType type, int frequency);
    RAM(const RAM &other);
    void SetSize(const int size);
    int GetSize();
    MemoryType SetMemoryType(const MemoryType type);
    int GetMemoryType();
    void SetFrequency(const int frequency);
    int GetFrequency();
    RAM operator=(const RAM &other);
private:
    int Initialization();
};

#endif // RAM_HPP
