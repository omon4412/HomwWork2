#ifndef COMPUTERCASE_HPP
#define COMPUTERCASE_HPP

#include <iostream>

class ComputerCase
{
    struct Size
    {
        double width;
        double height;
        double depth;
    };
    enum Color
    {
            DEFAILT = -1,
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
    Size _size;
    Color _color;
    bool _isDvdDrive;
    std::string _soundSystem;
    int _SSDcapacity;
    double _weight;

public:
    ComputerCase();
    ~ComputerCase();
};

#endif // COMPUTERCASE_HPP
