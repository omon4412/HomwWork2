#include "computercase.hpp"

int ComputerCase::Initialization()
{
    cpu.Initialization();
    return 0;
}

ComputerCase::ComputerCase() : _name(""), _operationSystem(""),
                                _size({100,50,100}), _color(TColor::WHITE),
                                _isDvdDrive(false), _soundSystem(""),
                                _SSDcapacity(0), _weight(7), _isActive(false),
                                cpu(), gpu(), ram()
{

}

ComputerCase::ComputerCase(std::string name, std::string _operationSystem, CPU cpu, GPU gpu, RAM ram,
                           ComputerCase::TSize size, ComputerCase::TColor color, bool isDvdDrive,
                           std::string soundSystem, int SSDcapacity, double weight)
{
    _name = name;
    this->_operationSystem  = _operationSystem;
    this->cpu = cpu;
    this->gpu = gpu;
    this->ram = ram;
    _size = size;
    _color = color;
    _isDvdDrive = isDvdDrive;
    _soundSystem = soundSystem;
    _SSDcapacity = SSDcapacity;
    _weight = weight;
}

void ComputerCase::SetName(const std::string name)
{
    _name = name;
}

std::string ComputerCase::GetName()
{
    return _name;
}

void ComputerCase::SetOperationSystem(const std::string os_name)
{
    _operationSystem = os_name;
}

std::string ComputerCase::GetOperationSystem()
{
    return _operationSystem;
}

void ComputerCase::SetSize(const ComputerCase::TSize size)
{
    _size = size;
}

ComputerCase::TSize ComputerCase::GetSize()
{
    return _size;
}

void ComputerCase::SetColor(const ComputerCase::TColor name)
{
    _name = name;
}

ComputerCase::TColor ComputerCase::GetColor()
{
    return _color;
}

void ComputerCase::TakeDvdDrive()
{
    if(_isDvdDrive)
    {
       _isDvdDrive = false;
    }
}

void ComputerCase::PutDvdDrive()
{
    if(!_isDvdDrive)
    {
       _isDvdDrive = true;
    }
}

void ComputerCase::SetSoundSystem(const std::string sound_system_name)
{
    _soundSystem = sound_system_name;
}

std::string ComputerCase::GetSoundSystem()
{
    return _soundSystem;
}

void ComputerCase::SetSSDcapacity(const int size)
{
    _SSDcapacity = size;
}

int ComputerCase::GetSSDcapacity()
{
    return _SSDcapacity;
}

void ComputerCase::SetWeight(const double weight)
{
    _weight = weight;
}

int ComputerCase::GetWeight()
{
    return _weight;
}

bool ComputerCase::GetActiveStatus()
{
    return _isActive;
}

ComputerCase::~ComputerCase()
{

}
