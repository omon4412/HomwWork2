#ifndef GPU_HPP
#define GPU_HPP

#include <iostream>
#include "MemoryType.hpp"

class GPU
{    
private:
    friend class ComputerCase;
    std::string _manufacturer;
    std::string _model;
    int _memoryCount;
    MemoryType _memoryType;
public:
    GPU();
    GPU(std::string manufacturer, std::string model, int memoryCount, MemoryType memoryType);
    GPU(const GPU &other);
    void SetManufacturer(const std::string manufacturer);
    std::string GetManufacturer();
    void SetModel(const std::string model);
    std::string GetModel();
    void SetMemoryCount(const int count);
    int GetMemoryCount();
    void SetMemoryType(const MemoryType &memoryType);
    MemoryType GetMemoryType();
    GPU operator=(const GPU &other);
private:
    int Initialization();
};

#endif // GPU_HPP
