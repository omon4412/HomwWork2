#include <iostream>
#include <clocale>
#include "computer.hpp"
#include "computercase.hpp"
#include "processorunit.hpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    CPU cpu1("Intel", "Core i5", "9400F", 6, 4.1, 9, "1151 v2", 2.9);
    CPU cpu2;
    GPU gpu1("NVIDIA", "GeForce RTX 2060", 6, MemoryType::GDDR6);
    GPU gpu2("NVIDIA", "GeForce RTX 2060", 6, MemoryType::GDDR6);
    RAM ram1(6, MemoryType::GDDR6, 2666);
    RAM ram2(6, MemoryType::GDDR6, 2666);
    ComputerCase cp1("Test", "Windows 10", cpu1, gpu1, ram1, {100,50,100},
                    Computer::TColor::WHITE, true, "Нет", 512, 6);
    ComputerCase cp2;
    Computer comp1("Test", "DOS", cpu1, ram1, {100,100,100}, Computer::TColor::GREEN, 25);
    Computer comp2;
    comp2.InsertAccessory(cpu1);
    comp2.InsertAccessory(ram2);
    cp2.InsertAccessory(cpu1);
    cp2.InsertAccessory(ram1);
    cp2.InsertAccessory(gpu1);


    //cp.PullOutGPU();
    //r.PullOutCPU();
    cout << gpu1.GetManufacturer();
    cout << comp2.Start();
    cout << cp1.Start();
    cout << comp2.GetActiveStatus();
    cout << cp1.GetActiveStatus();

    return 0;
}
