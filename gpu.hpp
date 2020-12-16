#ifndef GPU_HPP
#define GPU_HPP

#include "MemoryType.hpp"
#include "processorunit.hpp"

class GPU : ProcessorUnit
{    
private:
    friend class ComputerCase;
    int _memoryCount;
    MemoryType _memoryType;
public:
    GPU();
    GPU(std::string manufacturer, std::string model, int memoryCount, MemoryType memoryType);
    GPU(const GPU &other);
    friend std::ostream& operator<< (std::ostream &out, const GPU &gpu);
    std::string GetManufacturer() const;
    std::string GetModel() const;
    int GetMemoryCount() const;
    MemoryType GetMemoryType() const;
    GPU operator=(const GPU &other);
private:
    int Initialization() override;
    GPU PullOut();
    void InsertIn(const GPU &gpu);
};

#endif // GPU_HPP
