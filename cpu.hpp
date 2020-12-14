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
    CPU(std::string manufacturer, std::string type, std::string model,
        int number_of_cores, double maximum_clock_speed, int cache_memory, std::string socket, double frequency);
    CPU(const CPU &other);
    std::string GetCPUinfo();
    std::string GetManufacturer() const;
    std::string GetType() const;
    std::string GetModel() const;
    int GetNumberOfCores() const;
    double GetMaximumClockSpeed() const;
    int GetCacheMemory() const;
    std::string GetSocket() const;
    double GetFrequency() const;
    CPU operator=(const CPU &other);
private:
    int Initialization();
};

#endif // CPU_HPP
