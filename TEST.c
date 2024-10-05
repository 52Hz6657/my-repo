/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // 定义十六进制字符串
    char hexStr[] = "00 04 75 05";

    // 去掉空格
    char cleanHexStr[10]; // 假设最大长度为10
    int j = 0;
    for (int i = 0; i < strlen(hexStr); i++)
    {
        if (hexStr[i] != ' ')
        {
            cleanHexStr[j++] = hexStr[i];
        }
    }
    cleanHexStr[j] = '\0'; // 添加字符串结束符

    // 转换为十进制
    long decimalValue = strtol(cleanHexStr, NULL, 16);

    // 输出结果
    printf("十六进制 %s 转换为十进制为: %ld\n", cleanHexStr, decimalValue);

    return 0;
}*/

/*#include <stdlib.h>

int main()
{
    // 定义每个字节的十六进制数值
    unsigned char bytes[4] = {0x00, 0x04, 0x75, 0x05};

    // 合并字节为一个 32 位的整数
    unsigned long decimalValue = (bytes[0] << 24) | (bytes[1] << 16) | (bytes[2] << 8) | bytes[3];

    // 输出结果
    printf("十六进制 00 04 75 05 转换为十进制为: %lu\n", decimalValue);

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
        factor *= 100; // ?ò??????BCD±à????????×????ù????????100
    }
    return decimal;
}

// ??BCD????×???????????
int bcdToDecimal(unsigned char bcd)
{
    return ((bcd / 16) * 10) + (bcd % 16);
}