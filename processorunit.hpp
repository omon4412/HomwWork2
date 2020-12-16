#ifndef PROCESSORUNIT_HPP
#define PROCESSORUNIT_HPP

#include <iostream>

class ProcessorUnit
{
public:
    ProcessorUnit();
    ProcessorUnit(std::string manufacturer, std::string model);
    std::string GetManufacturer() const;
    std::string GetModel() const;
protected:
    std::string _manufacturer;
    std::string _model;
    virtual int Initialization() = 0;
};

#endif // PROCESSORUNIT_HPP
