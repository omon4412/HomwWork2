#ifndef CPU_HPP
#define CPU_HPP

#include <iostream>

class CPU
{
private:
    friend class ComputerCase;
    std::string _manufacturer;
    std::string _type;
    std::string _model;
    int _number_of_cores;
    double _maximum_clock_speed;
    int _cache_memory;
    std::string _socket;
    double _frequency;

public:
    CPU();
    std::string GetCPUinfo();
    std::string GetManufacturer();
    std::string GetType();
    std::string GetModel();
    int GetNumberOfCores();
    double GetMaximumClockSpeed();
    int GetCacheMemory();
    std::string GetSocket();
    double SetFrequency();
    CPU operator=(const CPU &other);
private:
    int Initialization();
};

#endif // CPU_HPP
