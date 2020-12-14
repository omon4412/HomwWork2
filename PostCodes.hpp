#ifndef POSTCODES_HPP
#define POSTCODES_HPP

enum PostCodes
{
    NoProcessor = 0x010,           //Отсутствие процессора
    ProcessorDataReadError = 0x01A,//Ошибка чтения данных с процессора
    NoRam = 0x020,                 //Отсутствие оперативной памяти
    RAMDataReadError = 0x02A,      //Ошибка чтения данных с оперативной памяти
    NoGraphicProcessor = 0x030,    //Отсутствие видеокарты
    GPUDataReadError = 0x03A,      //Ошибка чтения данных с видеокарты
};

#endif // POSTCODES_HPP
