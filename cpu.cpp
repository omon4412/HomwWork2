#include <iomanip>
#include "cpu.hpp"
#include "PostCodes.hpp"

CPU::CPU() : _type(""), _number_of_cores(0), _maximum_clock_speed(0),
              _cache_memory(0), _socket(""), _frequency(0)
{
    this->_manufacturer = "";
    this->_model = "";
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
        return "Просессор отсутствует!";
    }
    return "Производитель                 - " + _manufacturer +
        "\nТип процессора                - " + _type +
        "\nМодель                        - " + _model +
            "\nКоличество ядер               - " + std::to_string(_number_of_cores) +
            "\nМаксимальная тактовая частота - " + std::to_string(_maximum_clock_speed) +
            "\nКэш-память                    - " + std::to_string(_cache_memory) +
            "\nСокет                         - " + _socket +
            "\nЧастота процессора            - " + std::to_string(_frequency);
}

std::ostream &operator<< (std::ostream &out, const CPU &cpu)
{
    out << "\tПроцессор: " << std::endl;
    out << "\t\tПроизводитель                 - " << cpu._manufacturer << std::endl;
    out << "\t\tТип процессора                - " << cpu._type << std::endl;
    out << "\t\tМодель процессора             - " << cpu._model << std::endl;
    out << "\t\tКоличество ядер               - " << cpu._number_of_cores << std::endl;
    out << "\t\tМаксимальная тактовая частота - " << cpu._maximum_clock_speed << " ГГц" << std::endl;
    out << "\t\tСокет                         - " << cpu._socket << std::endl;
    out << "\t\tЧастота процессора            - " << cpu._frequency << " ГГц" << std::endl;
    return out;
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
    if((_manufacturer == "") && (_type == "")&&
            (_model == "")&&(_number_of_cores == 0)&&(_maximum_clock_speed == 0)&&
            (_cache_memory == 0)&&(_socket == "")&&(_frequency == 0))
    {
        return PostCodes::NoProcessor;
    }
    else if((_manufacturer == "") || (_type == "")||
            (_model == "")||(_number_of_cores == 0)||(_maximum_clock_speed == 0)||
            (_cache_memory == 0)||(_socket == "")||(_frequency == 0))
    {
        return PostCodes::ProcessorDataReadError;
    }
    return 0;
}

CPU CPU::PullOut()
{
    CPU returned(*this);
    _manufacturer = "";
    _type = "";
    _model = "";
    _number_of_cores = 0;
    _maximum_clock_speed = 0;
    _cache_memory = 0;
    _socket = "";
    _frequency = 0;
    return returned;
}

void CPU::InsertIn(const CPU &cpu)
{
    _manufacturer = cpu._manufacturer;
    _type = cpu._type;
    _model = cpu._model;
    _number_of_cores = cpu._number_of_cores;
    _maximum_clock_speed = cpu._maximum_clock_speed;
    _cache_memory = cpu._cache_memory;
    _socket = cpu._socket;
    _frequency = cpu._frequency;
}

