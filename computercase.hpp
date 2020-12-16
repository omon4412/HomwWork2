#ifndef COMPUTERCASE_HPP
#define COMPUTERCASE_HPP

#include <iostream>
#include "computer.hpp"
#include "gpu.hpp"

class ComputerCase : public Computer
{
private:    
    bool _isDvdDrive;
    std::string _soundSystem;
    int _SSDcapacity;    
public:   
    using Computer::InsertAccessory; //разрешение перегружать родительский метод, а не переопределять
    GPU gpu;
    GPU PullOutGPU();   
    void InsertAccessory(const GPU &gpu);
private:
    int Initialization() override;
public:
    ComputerCase();
    ComputerCase(std::string name,
                 std::string operationSystem,
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
    void TakeDvdDrive();
    void PutDvdDrive();
    void SetSoundSystem(const std::string sound_system_name);
    std::string GetSoundSystem();
    void SetSSDcapacity(const int size);
    int GetSSDcapacity();    
    ~ComputerCase();
};


#endif // COMPUTERCASE_HPP
