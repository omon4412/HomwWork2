#ifndef COMPUTERCASE_HPP
#define COMPUTERCASE_HPP

#include <iostream>
#include "cpu.hpp"
#include "gpu.hpp"

enum MemoryType
{
    DDR1,
    DDR2,
    DDR3,
    DDR4,
    DDR5,
    DDR6
};

class ComputerCase
{
    struct TSize
    {
        double width;
        double height;
        double depth;
    };
    enum TColor
    {
            DEFAILT,
            BLACK,
            DARKBLUE,
            DARKGREEN,
            DARKCYAN,
            DARKRED,
            DARKMAGENTA,
            DARKYELLOW,
            DARKGRAY,
            GRAY ,
            BLUE,
            GREEN,
            CYAN,
            RED,
            MAGENTA,
            YELLOW,
            WHITE
    };

private:
    std::string _name;
    std::string _operationSystem;
    CPU _cpu;
    GPU _gpu;
    int _RAMsize;
    MemoryType _RAMtype;
    int _RAMfrequency;
    TSize _size;
    TColor _color;
    bool _isDvdDrive;
    std::string _soundSystem;
    int _SSDcapacity;
    double _weight;

public:
    ComputerCase();
    void SetName(const std::string name);
    std::string GetName();
    void SetOperationSystem(const std::string os_name);
    std::string GetOperationSystem();
    void SetSize(const TSize size);
    TSize GetSize();
    void SetRam(const int size);
    std::string GetRam();
    void SetColor(const TColor name);
    TColor GetColor();
    void TakeDvdDrive();
    void PutDvdDrive();
    void SetSoundSystem(const std::string sound_system_name);
    std::string GetSoundSystem();
    void SetSSDcapacity(const int size);
    int GetSSDcapacity();
    void SetWeight(const double weight);
    int GetWeight();
    ~ComputerCase();
};

#endif // COMPUTERCASE_HPP
