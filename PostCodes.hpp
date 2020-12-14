#ifndef POSTCODES_HPP
#define POSTCODES_HPP

enum PostCodes
{
    NoProcessor = 0x010,           //���������� ����������
    ProcessorDataReadError = 0x01A,//������ ������ ������ � ����������
    NoRam = 0x020,                 //���������� ����������� ������
    RAMDataReadError = 0x02A,      //������ ������ ������ � ����������� ������
    NoGraphicProcessor = 0x030,    //���������� ����������
    GPUDataReadError = 0x03A,      //������ ������ ������ � ����������
};

#endif // POSTCODES_HPP
