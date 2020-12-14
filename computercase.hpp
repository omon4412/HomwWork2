#ifndef COMPUTERCASE_HPP
#define COMPUTERCASE_HPP

#include <iostream>
#include "cpu.hpp"
#include "gpu.hpp"
#include "ram.hpp"

class ComputerCase
{
public:
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
    TSize _size;
    TColor _color;
    bool _isDvdDrive;
    std::string _soundSystem;
    int _SSDcapacity;
    double _weight;
    bool _isActive;
public:
    CPU cpu;
    GPU gpu;
    RAM ram;
public:
    void Start();
    void Stop();
    CPU PullOutCPU();
    GPU PullOutGPU();
    RAM PullOutRAM();
    void InsertAccessory(const CPU cpu);
    void InsertAccessory(const GPU gpu);
    void InsertAccessory(const RAM ram);

private:
    int Initialization();

public:
    ComputerCase();
    ComputerCase(std::string name,
                 std::string _operationSystem,
                 CPU cpu,
                 GPU gpu,
                 RAM ram,
                 TSize size,
                 TColor color,
                 bool isDvdDrive,
                 std::string soundSystem,
                 int SSDcapacity,
                 double weight);
    ComputerCase(const ComputerCase &other);
    ComputerCase operator=(const ComputerCase &other);
    friend std::ostream& operator<< (std::ostream &out, const ComputerCase &computerCase);
    void SetName(const std::string name);
    std::string GetName();
    void SetOperationSystem(const std::string os_name);
    std::string GetOperationSystem();
    void SetSize(const TSize size);
    TSize GetSize();
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
    bool GetActiveStatus();
    ~ComputerCase();
};


#endif // COMPUTERCASE_HPP
