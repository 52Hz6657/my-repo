/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // ����ʮ�������ַ���
    char hexStr[] = "00 04 75 05";

    // ȥ���ո�
    char cleanHexStr[10]; // ������󳤶�Ϊ10
    int j = 0;
    for (int i = 0; i < strlen(hexStr); i++)
    {
        if (hexStr[i] != ' ')
        {
            cleanHexStr[j++] = hexStr[i];
        }
    }
    cleanHexStr[j] = '\0'; // ����ַ���������

    // ת��Ϊʮ����
    long decimalValue = strtol(cleanHexStr, NULL, 16);

    // ������
    printf("ʮ������ %s ת��Ϊʮ����Ϊ: %ld\n", cleanHexStr, decimalValue);

    return 0;
}*/

/*#include <stdlib.h>

int main()
{
    // ����ÿ���ֽڵ�ʮ��������ֵ
    unsigned char bytes[4] = {0x00, 0x04, 0x75, 0x05};

    // �ϲ��ֽ�Ϊһ�� 32 λ������
    unsigned long decimalValue = (bytes[0] << 24) | (bytes[1] << 16) | (bytes[2] << 8) | bytes[3];

    // ������
    printf("ʮ������ 00 04 75 05 ת��Ϊʮ����Ϊ: %lu\n", decimalValue);

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
double data_Convert(unsigned char bcd[], int size);
int bcdToDecimal(unsigned char bcd);
int main()
{
    unsigned char bcd[] = {0x04, 0x75, 0x05};
    printf("%.2f\n", data_Convert(bcd, 2));
    return 0;
}
double data_Convert(unsigned char bcd[], int size) // size ????????????????BCD????????????????????
{
    double decimal = 0;
    int factor = 1;
    for (int i = size; i >= 0; i--)
    {
        decimal += bcdToDecimal(bcd[i]) * factor;
        factor *= 100; // ?��??????BCD����????????��????��????????100
    }
    return decimal;
}

// ??BCD????��???????????
int bcdToDecimal(unsigned char bcd)
{
    return ((bcd / 16) * 10) + (bcd % 16);
}