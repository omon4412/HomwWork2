#ifndef GPU_HPP
#define GPU_HPP

#include <iostream>
#include "MemoryType.hpp"

class GPU
{    
private:
    std::string _manufacturer;
    std::string _model;
    int _memoryCount;
    MemoryType _memoryType;
public:
    GPU();
    void SetManufacturer(const std::string manufacturer);
    std::string GetManufacturer();
    void SetModel(const std::string model);
    std::string GetModel();
    void SetMemoryCount(const int count);
    int GetMemoryCount();
    void SetMemoryType(const MemoryType &memoryType);
    MemoryType GetMemoryType();
private:
    int Initialization();
};

#endif // GPU_HPP
