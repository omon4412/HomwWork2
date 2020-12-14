#ifndef PROCESSORUNIT_HPP
#define PROCESSORUNIT_HPP

#include <iostream>

class ProcessorUnit
{
public:
    ProcessorUnit();
protected:
    std::string _manufacturer;
    std::string _model;
    int Initialization();
};

#endif // PROCESSORUNIT_HPP
