#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>

using namespace std;

int main() 
{
    FILE* F1 = fopen("C:\\Users\\Данил\\Desktop\\F1.txt", "r");
    FILE* F2 = fopen("C:\\Users\\Данил\\Desktop\\F2.txt", "w");

    if (F1 == NULL) {
        std::cerr << "Не удалось открыть файл F1!" << std::endl;
        return 1;
    }
    if (F2 == NULL) {
        std::cerr << "Не удалось открыть файл F2!" << std::endl;
        fclose(F1);
        return 1;
    }

    char data[1024];
    int NUMBER = 0;
    int i = 0;
    char curChar;

    while ((curChar = fgetc(F1)) != EOF)
    {
        if (NUMBER == 3)
        {
            data[i] = curChar;
            ++i;
        }
        else if (curChar == '\n') { ++NUMBER; }
    }

    data[i] = '\0';

    for (int i = 0; data[i]; ++i)
    {
        fputc(data[i], F2);
    }

    fclose(F1);
    fclose(F2);

    int j = i - 1;
    int len = 0;
    while (j >= 0 && data[j] != ' ') { --j; }
    if (j >= 0) { ++j; }
    for (; j < i; ++j) { ++len; }

    cout << len;

    return 0;
}