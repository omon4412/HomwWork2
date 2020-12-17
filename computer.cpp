#include <sstream>
#include "computer.hpp"

Computer::Computer() : _name(""), _operationSystem(""), _size({0,0,0}), _color(TColor::DEFAILT)
                       ,_weight(0), _isActive(false), cpu(), ram()
{

}

Computer::Computer(std::string name, std::string operationSystem,
                   CPU new_cpu, RAM new_ram, Computer::TSize size, Computer::TColor color, int weigth) : _name(name),
                   _operationSystem(operationSystem), _size(size), _color(color), _weight(weigth),
                   cpu(new_cpu), ram(new_ram)
{
    _isActive = false;
}

Computer::Computer(const Computer &other)
{
    _name = other._name;
    _operationSystem = other._operationSystem;
    _size = other._size;
    _color = other._color;
    _weight = other._weight;
    _isActive = false;
    cpu = other.cpu;
    ram = other.ram;
}

Computer Computer::operator=(const Computer &other)
{
    _name = other._name;
    _operationSystem = other._operationSystem;
    _size = other._size;
    _color = other._color;
    _weight = other._weight;
    _isActive = false;
    cpu = other.cpu;
    ram = other.ram;
    return *this;
}

int Computer::Initialization()
{
    if(cpu.Initialization() != 0)
        return cpu.Initialization();
    if(ram.Initialization() != 0)
        return ram.Initialization();
    return 0;
}

std::ostream& operator<< (std::ostream &out, const Computer &computer)
{
    out << "��������������: " <<std::endl;
    out << "\t������������ �������                  - " << computer._operationSystem << std::endl;
    out << "\t���������: " << std::endl;
    out << "\t\t�������������                 - " << computer.cpu.GetManufacturer() << std::endl;
    out << "\t\t��� ����������                - " << computer.cpu.GetType() << std::endl;
    out << "\t\t������ ����������             - " << computer.cpu.GetModel() << std::endl;
    out << "\t\t���������� ����               - " << computer.cpu.GetNumberOfCores() << std::endl;
    out << "\t\t������������ �������� ������� - " << computer.cpu.GetMaximumClockSpeed() << " ���" << std::endl;
    out << "\t\t�����                         - " << computer.cpu.GetSocket() << std::endl;
    out << "\t\t������� ����������            - " << computer.cpu.GetFrequency() << " ���" << std::endl;
    out << "\t����������� ������: " << std::endl;
    out << "\t\t����� ������                  - " << computer.ram.GetSize() << " ��" << std::endl;
    out << "\t\t��� ������                    - " << computer.ram.GetMemoryType() << std::endl;
    out << "\t\t������� ������                - " << computer.ram.GetFrequency() << " ���" << std::endl;
    out << "\t����                                  - " << computer._color << std::endl;
    out << "\t���                                   - " << computer._weight << " ��" << std::endl;
    out << "\t�������: " << std::endl;
    out << "\t\t������                        - " << computer._size.width << " ��" << std::endl;
    out << "\t\t������                        - " << computer._size.height << " ��" << std::endl;
    out << "\t\t�������                       - " << computer._size.depth << " ��" << std::endl;
    return out;
}

std::string Computer::Start()
{
    int post_result = Initialization();
    if(post_result == 0)
    {
        _isActive = true;
        return "������ ���������";
    }
    std::stringstream stream;
    stream << std::hex << post_result;
    std::string result(stream.str());
    for (auto &c : result)
        c = std::toupper(c);
    return "0x" + result;
}

std::string Computer::Stop()
{
    _isActive = false;
    return "����������";
}

void Computer::SetName(const std::string name)
{
    _name = name;
}

std::string Computer::GetName()
{
    return _name;
}

void Computer::SetOperationSystem(const std::string os_name)
{
    _operationSystem = os_name;
}

std::string Computer::GetOperationSystem()
{
    return _operationSystem;
}

void Computer::SetSize(const Computer::TSize size)
{
    _size = size;
}

Computer::TSize Computer::GetSize()
{
    return _size;
}

void Computer::SetColor(const Computer::TColor name)
{
    _name = name;
}

Computer::TColor Computer::GetColor()
{
    return _color;
}

void Computer::SetWeight(const double weight)
{
    _weight = weight;
}

int Computer::GetWeight()
{
    return _weight;
}

std::string Computer::GetActiveStatus()
{
    if(_isActive)
    {
        return "��������";
    }
    return "�� ��������";
}

CPU Computer::PullOutCPU()
{
    _isActive = false;
    return  cpu.PullOut();
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

void Computer::InsertAccessory(const RAM &ram)
{
    this->ram.InsertIn(ram);
}
