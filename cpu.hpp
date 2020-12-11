#ifndef CPU_HPP
#define CPU_HPP

#include <iostream>

class CPU
{
private:
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
    void SetManufacturer(const std::string manufacturer);
    std::string GetManufacturer();
    void SetType(const std::string type);
    std::string GetType();
    void SetModel(const std::string model);
    std::string GetModel();
    void SetNumberOfCores(const int number_of_cores);
    int GetNumberOfCores();
    void SetMaximumClockSpeed(const double maximum_clock_speed);
    double GetMaximumClockSpeed();
    void SetCacheMemory(const int cache_memory);
    int GetCacheMemory();
    void SetSocket(const std::string socket);
    std::string GetSocket();
    void Setfrequency();
    double Getfrequency(const double frequency);
};

#endif // CPU_HPP
