#ifndef RAM_HPP
#define RAM_HPP

#include "MemoryType.hpp"

class RAM
{
private:
    friend class ComputerCase;
    friend class Computer;
    int _size;
    MemoryType _type;
    int _frequency;
public:
    RAM();
    RAM(int size, MemoryType type, int frequency);
    RAM(const RAM &other);
    friend std::ostream& operator<< (std::ostream &out, const RAM &ram);
    int GetSize() const;
    MemoryType GetMemoryType() const;
    int GetFrequency() const;
    RAM operator=(const RAM &other);
private:
    int Initialization();
    RAM PullOut();
    void InsertIn(const RAM &ram);
};

#endif // RAM_HPP
