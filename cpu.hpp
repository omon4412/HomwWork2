#ifndef CPU_HPP
#define CPU_HPP

#include <iostream>

class CPU
{
private:
    std::string _CPUmanufacturer;
    std::string _CPUType;
    std::string _CPUModel;
    int _number_of_cores;
    double _maximum_clock_speed;
    int _cache_memory;
    std::string _socket;
    double _CPUfrequency;

public:
    CPU();
    void SetCPUmanufacturer();
    std::string GetCPUmanufacturer();
    void SetCPUType();
    std::string GetCPUType();
    void SetCPUModel();
    std::string GetCPUModel();
    void SetNumberOfCores();
    int GetNumberOfCores;
    void SetMaximumClockSpeed();
    double GetMaximumClockSpeed();
    void SetCacheMemory();
    int GetCacheMemory();
    void SetSocket();
    std::string GetSocket();
    void SetCPUfrequency();
    double GetCPUfrequency;
};

#endif // CPU_HPP
