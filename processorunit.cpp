#include "processorunit.hpp"

ProcessorUnit::ProcessorUnit() : _manufacturer(""), _model("")
{

}

ProcessorUnit::ProcessorUnit(std::string manufacturer, std::string model) :
    _manufacturer(manufacturer), _model(model)
{

}

std::string ProcessorUnit::GetManufacturer() const
{
    return _manufacturer;
}

std::string ProcessorUnit::GetModel() const
{
    return _model;
}
