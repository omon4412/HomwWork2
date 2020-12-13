#include "gpu.hpp"

GPU::GPU() : _manufacturer(""), _model(""), _memoryCount(0), _memoryType(MemoryType::None)
{

}

GPU GPU::operator=(const GPU &other)
{
    _manufacturer = other._manufacturer;
    _model = other._model;
    _memoryCount = other._memoryCount;
    _memoryType = other._memoryType;
    return *this;
}

int GPU::Initialization()
{
    return 0;
}
