#ifndef RAM_HPP
#define RAM_HPP

class RAM
{
    enum MemoryType
    {
        DDR1,
        DDR2,
        DDR3,
        DDR4,
        DDR5,
        DDR6
    };
private:
    int _size;
    MemoryType _type;
    int _frequency;
public:
    RAM();
    void SetSize(const int size);
    int GetSize();
    MemoryType SetMemoryType(const MemoryType type);
    int GetMemoryType();
    void SetFrequency(const int frequency);
    int GetFrequency();
};

#endif // RAM_HPP
