#include "cpu.hpp"

CPU::CPU() : _manufacturer(""), _type(""), _model(""),
              _number_of_cores(0), _maximum_clock_speed(0),
              _cache_memory(0), _socket(""), _frequency(0)
{

}

std::string CPU::GetCPUinfo()
{
    if(_manufacturer == "")
    {
        return "Просессор отсутствует!";
    }
    return "Производитель                 - " +_manufacturer +
            "\nТип процессора                - " + _type +
            "\nМодель                        - " +_model +
            "\nКоличество ядер               - " + std::to_string(_number_of_cores) +
            "\nМаксимальная тактовая частота - " + std::to_string(_maximum_clock_speed) +
            "\nКэш-память                    - " + std::to_string(_cache_memory) +
            "\nСокет                         - " + _socket +
            "\nЧастота процессора            - " + std::to_string(_frequency);
}

std::string CPU::GetManufacturer()
{
    return _manufacturer;
}

std::string CPU::GetType()
{
    return _type;
}

std::string CPU::GetModel()
{
    return _model;
}

int CPU::GetNumberOfCores()
{
    return _number_of_cores;
}

double CPU::GetMaximumClockSpeed()
{
    return _maximum_clock_speed;
}

int CPU::GetCacheMemory()
{
    return _cache_memory;
}

std::string CPU::GetSocket()
{
    return _socket;
}

double CPU::SetFrequency()
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

