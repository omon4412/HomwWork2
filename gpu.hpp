#ifndef GPU_HPP
#define GPU_HPP

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
    std::string GetManufacturer() const;
    std::string GetModel() const;
    int GetMemoryCount() const;
    MemoryType GetMemoryType() const;
    GPU operator=(const GPU &other);
private:
    int Initialization();
};

#endif // GPU_HPP
