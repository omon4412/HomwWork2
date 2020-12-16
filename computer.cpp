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
    out << "Характеристики: " <<std::endl;
    out << "\tОперационная система                  - " << computer._operationSystem << std::endl;
    out << "\tПроцессор: " << std::endl;
    out << "\t\tПроизводитель                 - " << computer.cpu.GetManufacturer() << std::endl;
    out << "\t\tТип процессора                - " << computer.cpu.GetType() << std::endl;
    out << "\t\tМодель процессора             - " << computer.cpu.GetModel() << std::endl;
    out << "\t\tКоличество ядер               - " << computer.cpu.GetNumberOfCores() << std::endl;
    out << "\t\tМаксимальная тактовая частота - " << computer.cpu.GetMaximumClockSpeed() << " ГГц" << std::endl;
    out << "\t\tСокет                         - " << computer.cpu.GetSocket() << std::endl;
    out << "\t\tЧастота процессора            - " << computer.cpu.GetFrequency() << " ГГц" << std::endl;
    out << "\tОперативная память: " << std::endl;
    out << "\t\tОбъём пямяти                  - " << computer.ram.GetSize() << " ГБ" << std::endl;
    out << "\t\tТип памяти                    - " << computer.ram.GetMemoryType() << std::endl;
    out << "\t\tЧастота памяти                - " << computer.ram.GetFrequency() << " МГц" << std::endl;
    out << "\tЦвет                                  - " << computer._color << std::endl;
    out << "\tВес                                   - " << computer._weight << " Кг" << std::endl;
    out << "\tРазмеры: " << std::endl;
    out << "\t\tШирина                        - " << computer._size.width << " См" << std::endl;
    out << "\t\tВысота                        - " << computer._size.height << " См" << std::endl;
    out << "\t\tГлубина                       - " << computer._size.depth << " См" << std::endl;
    return out;
}

std::string Computer::Start()
{
    int post_result = Initialization();
    if(post_result == 0)
    {
        _isActive = true;
        return "Запуск произошёл";
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
    return "Выключение";
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
        return "Работает";
    }
    return "Не работает";
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
