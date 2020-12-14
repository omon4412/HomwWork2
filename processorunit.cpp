#include "processorunit.hpp"

ProcessorUnit::ProcessorUnit()
{

}

int ProcessorUnit::Initialization()
{
    if((_manufacturer == "") && (_model == ""))
    {
        return 1;
    }
    else if((_manufacturer == "") || (_model == ""))
    {
        return 2;
    }
    return 0;
}
