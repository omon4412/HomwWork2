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
    int GetSize() const;
    MemoryType GetMemoryType() const;
    int GetFrequency() const;
    RAM operator=(const RAM &other);
private:
    int Initialization();
};

#endif // RAM_HPP
