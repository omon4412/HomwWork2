#include <iostream>
#include "computercase.hpp"

CPU Computer::PullOutCPU()
{
    _isActive = false;
    return  cpu.PullOut();
}

GPU ComputerCase::PullOutGPU()
{
    _isActive = false;
    return  gpu.PullOut();
}

RAM Computer::PullOutRAM()
{
    _isActive = false;
    return  ram.PullOut();
}

void Computer::InsertAccessory(const CPU &cpu)
{
    this->cpu.InsertIn(cpu);
}

void ComputerCase::InsertAccessory(const GPU &gpu)
{
    this->gpu.InsertIn(gpu);
}

void Computer::InsertAccessory(const RAM &ram)
{
    this->ram.InsertIn(ram);
}

int ComputerCase::Initialization()
{
    if(cpu.Initialization() != 0)
        return cpu.Initialization();
    if(ram.Initialization() != 0)
        return ram.Initialization();
    if(gpu.Initialization() != 0)
        return gpu.Initialization();
    return 0;
}

ComputerCase::ComputerCase() : Computer(), _isDvdDrive(false), _soundSystem(""),
                                                            _SSDcapacity(0), gpu()
{

}

ComputerCase::ComputerCase(std::string name, std::string operationSystem, CPU cpu, GPU gpu, RAM ram,
                           ComputerCase::TSize size, ComputerCase::TColor color, bool isDvdDrive,
                           std::string soundSystem, int SSDcapacity, double weight) :
                        Computer(name, operationSystem, cpu, ram, size, color, weight),
                        _isDvdDrive(isDvdDrive), _soundSystem(soundSystem),
                        _SSDcapacity(SSDcapacity)
{
    this->gpu = gpu;
}

ComputerCase::ComputerCase(const ComputerCase &other) : Computer(other)
{
    _name = other._name;
    this->_operationSystem  = other._operationSystem;
    this->cpu = other.cpu;
    this->gpu = other.gpu;
    this->ram = other.ram;
    _size = other._size;
    _color = other._color;
    _isDvdDrive = other._isDvdDrive;
    _soundSystem = other._soundSystem;
    _SSDcapacity = other._SSDcapacity;
    _weight = other._weight;
}

ComputerCase ComputerCase::operator=(const ComputerCase &other)
{
    _name = other._name;
    this->_operationSystem  = other._operationSystem;
    this->cpu = other.cpu;
    this->gpu = other.gpu;
    this->ram = other.ram;
    _size = other._size;
    _color = other._color;
    _isDvdDrive = other._isDvdDrive;
    _soundSystem = other._soundSystem;
    _SSDcapacity = other._SSDcapacity;
    _weight = other._weight;
    return *this;
}


std::ostream& operator<< (std::ostream &out, const ComputerCase &computerCase)
{
     out << "Характеристики: " <<std::endl;
     out << "\tОперационная система                  - " << computerCase._operationSystem << std::endl;
     out << "\tПроцессор: " << std::endl;
     out << "\t\tПроизводитель                 - " << computerCase.cpu.GetManufacturer() << std::endl;
     out << "\t\tТип процессора                - " << computerCase.cpu.GetType() << std::endl;
     out << "\t\tМодель процессора             - " << computerCase.cpu.GetModel() << std::endl;
     out << "\t\tКоличество ядер               - " << computerCase.cpu.GetNumberOfCores() << std::endl;
     out << "\t\tМаксимальная тактовая частота - " << computerCase.cpu.GetMaximumClockSpeed() << " ГГц" << std::endl;
     out << "\t\tСокет                         - " << computerCase.cpu.GetSocket() << std::endl;
     out << "\t\tЧастота процессора            - " << computerCase.cpu.GetFrequency() << " ГГц" << std::endl;
     out << "\tВидеокарта: " << std::endl;
     out << "\t\tПроизводитель                 - " << computerCase.gpu.GetManufacturer() << std::endl;
     out << "\t\tГрафический контроллер        - " << computerCase.gpu.GetModel() << std::endl;
     out << "\t\tОбъем видеопамяти             - " << computerCase.gpu.GetMemoryCount() << " ГБ" << std::endl;
     out << "\t\tТип видеопамяти               - " << computerCase.gpu.GetMemoryType() << std::endl;
     out << "\tОперативная память: " << std::endl;
     out << "\t\tОбъём пямяти                  - " << computerCase.ram.GetSize() << " ГБ" << std::endl;
     out << "\t\tТип памяти                    - " << computerCase.ram.GetMemoryType() << std::endl;
     out << "\t\tЧастота памяти                - " << computerCase.ram.GetFrequency() << " МГц" << std::endl;
     out << "\tЦвет                                  - " << computerCase._color << std::endl;
     out << "\tОптический дисковод                   - " << std::boolalpha << computerCase._isDvdDrive << std::endl;
     out << "\tЗвуковая система                      - " << computerCase._soundSystem << std::endl;
     out << "\tОбъем SSD                             - " << computerCase._SSDcapacity << std::endl;
     out << "\tВес                                   - " << computerCase._weight << " Кг" << std::endl;
     out << "\tРазмеры: " << std::endl;
     out << "\t\tШирина                        - " << computerCase._size.width << " См" << std::endl;
     out << "\t\tВысота                        - " << computerCase._size.height << " См" << std::endl;
     out << "\t\tГлубина                       - " << computerCase._size.depth << " См" << std::endl;
     return out;
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

ComputerCase::~ComputerCase()
{

}
