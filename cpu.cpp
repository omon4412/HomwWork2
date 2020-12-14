#include "cpu.hpp"

CPU::CPU() : _manufacturer(""), _type(""), _model(""),
              _number_of_cores(0), _maximum_clock_speed(0),
              _cache_memory(0), _socket(""), _frequency(0)
{

}

CPU::CPU(std::string manufacturer, std::string type, std::string model,
         int number_of_cores, double maximum_clock_speed, int cache_memory,
         std::string socket, double frequency)
{
    _manufacturer = manufacturer;
    _type = type;
    _model = model;
    _number_of_cores = number_of_cores;
    _maximum_clock_speed = maximum_clock_speed;
    _cache_memory = cache_memory;
    _socket = socket;
    _frequency = frequency;
}

CPU::CPU(const CPU &other)
{
    _manufacturer = other._manufacturer;
    _type = other._type;
    _model = other._model;
    _number_of_cores = other._number_of_cores;
    _maximum_clock_speed = other._maximum_clock_speed;
    _cache_memory = other._cache_memory;
    _socket = other._socket;
    _frequency = other._frequency;
}

std::string CPU::GetCPUinfo()
{
    if(_manufacturer == "")
    {
        return "��������� �����������!";
    }
    return "�������������                 - " + _manufacturer +
        "\n��� ����������                - " + _type +
        "\n������                        - " + _model;
           // "\n���������� ����               - " + std::to_string(_number_of_cores) +
           // "\n������������ �������� ������� - " + std::to_string(_maximum_clock_speed) +
           // "\n���-������                    - " + std::to_string(_cache_memory) +
           // "\n�����                         - " + _socket +
           // "\n������� ����������            - " + std::to_string(_frequency);
}

std::string CPU::GetManufacturer() const
{
    return _manufacturer;
}

std::string CPU::GetType() const
{
    return _type;
}

std::string CPU::GetModel() const
{
    return _model;
}

int CPU::GetNumberOfCores() const
{
    return _number_of_cores;
}

double CPU::GetMaximumClockSpeed() const
{
    return _maximum_clock_speed;
}

int CPU::GetCacheMemory() const
{
    return _cache_memory;
}

std::string CPU::GetSocket() const
{
    return _socket;
}

double CPU::GetFrequency() const
{
    return _frequency;
}

CPU CPU::operator=(const CPU &other)
{
    _manufacturer = other._manufacturer;
    _type = other._type;
    _model = other._model;
    _number_of_cores = other._number_of_cores;
    _maximum_clock_speed = other._maximum_clock_speed;
    _cache_memory = other._cache_memory;
    _socket = other._socket;
    _frequency = other._frequency;
    return *this;
}

int CPU::Initialization()
{
    return 0;
}

