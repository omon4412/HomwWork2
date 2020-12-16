#include "gpu.hpp"
#include "PostCodes.hpp"

GPU::GPU() : _memoryCount(0), _memoryType(MemoryType::None)
{
    _manufacturer = "";
    _model = "";
}

GPU::GPU(std::string manufacturer, std::string model, int memoryCount, MemoryType memoryType)
{
    _manufacturer = manufacturer;
    _model = model;
    _memoryCount = memoryCount;
    _memoryType = memoryType;
}

GPU::GPU(const GPU &other) : ProcessorUnit(other)
{
    _manufacturer = other._manufacturer;
    _model = other._model;
    _memoryCount = other._memoryCount;
    _memoryType = other._memoryType;
}

int GPU::GetMemoryCount() const
{
    return _memoryCount;
}

MemoryType GPU::GetMemoryType() const
{
    return _memoryType;
}

GPU GPU::operator=(const GPU &other)
{
    _manufacturer = other._manufacturer;
    _model = other._model;
    _memoryCount = other._memoryCount;
    _memoryType = other._memoryType;
    return *this;
}

std::ostream& operator<< (std::ostream &out, const GPU &gpu)
{
    out << "\tВидеокарта: " << std::endl;
    out << "\t\tПроизводитель                 - " << gpu._manufacturer << std::endl;
    out << "\t\tГрафический контроллер        - " << gpu._model << std::endl;
    out << "\t\tОбъем видеопамяти             - " << gpu._memoryCount << " ГБ" << std::endl;
    out << "\t\tТип видеопамяти               - " << gpu._memoryType << std::endl;
    return out;
}

int GPU::Initialization()
{
    if((_manufacturer == "") && (_model == "")&&
            (_memoryCount == 0)&&(_memoryType == MemoryType::None))
    {
        return PostCodes::NoGraphicProcessor;
    }
    else if((_manufacturer == "") || (_model == "") ||
            (_memoryCount == 0) || (_memoryType == MemoryType::None))
    {
        return PostCodes::GPUDataReadError;
    }
    return 0;
}

GPU GPU::PullOut()
{
    GPU returned(*this);
    _manufacturer = "";
    _model = "";
    _memoryCount = 0;
    _memoryType = MemoryType::None;
    return returned;
}

void GPU::InsertIn(const GPU &gpu)
{
    _manufacturer = gpu._manufacturer;
    _model = gpu._model;
    _memoryCount = gpu._memoryCount;
    _memoryType = gpu._memoryType;
}
