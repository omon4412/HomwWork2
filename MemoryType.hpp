#ifndef MEMORYTYPE_HPP
#define MEMORYTYPE_HPP

#include <iostream>

enum MemoryType
{
    None,
    DDR1,
    DDR2,
    DDR3,
    DDR4,
    DDR5,
    DDR6,
    GDDR6
};
std::ostream& operator << (std::ostream& out, const MemoryType& mt);

#endif // MEMORYTYPE_HPP
