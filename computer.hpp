#ifndef COMPUTER_HPP
#define COMPUTER_HPP

#include <iostream>
#include "cpu.hpp"
#include "ram.hpp"

class Computer
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
    Computer();
    Computer(std::string name, std::string operationSystem,
             CPU new_cpu, RAM new_ram, TSize size,TColor color, int weigth);
    Computer(const Computer &other);
    Computer operator=(const Computer &other);
    std::string Start();
    std::string Stop();
    CPU PullOutCPU();
    RAM PullOutRAM();
    void InsertAccessory(const CPU &cpu);
    void InsertAccessory(const RAM &ram);
    friend std::ostream& operator<< (std::ostream &out, const Computer &computer);
    void SetName(const std::string name);
    std::string GetName();
    void SetOperationSystem(const std::string os_name);
    std::string GetOperationSystem();
    void SetSize(const TSize size);
    TSize GetSize();
    void SetColor(const TColor name);
    TColor GetColor();
    void SetWeight(const double weight);
    int GetWeight();
    std::string GetActiveStatus();
protected:
    std::string _name;
    std::string _operationSystem;
    TSize _size;
    TColor _color;
    double _weight;
    bool _isActive;
    virtual int Initialization(); //в дочернем классе переопределим, тк нужно проинициализировать видеокарту
public:
    CPU cpu;
    RAM ram;
};

#endif // COMPUTER_HPP
