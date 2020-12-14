#include <iostream>
#include <clocale>
#include "computercase.hpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    CPU cpu("Intel", "Core i5", "9400F", 6, 4.1, 9, "1151 v2", 2.9);
    RAM test;
    GPU gpu("NVIDIA", "GeForce RTX 2060", 6, MemoryType::GDDR6);
    RAM ram(6, MemoryType::GDDR6, 2666);
    ComputerCase cp("Test", "Windows 10", cpu, gpu, ram, {100,50,100}, ComputerCase::TColor::WHITE, true, "���", 512, 6);

    cout << cp.ram;
    test = cp.PullOutRAM();
    cout << cp.ram;
    cp.InsertAccessory(ram);
    cout << cp.ram;
    return 0;
}
