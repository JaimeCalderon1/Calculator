#pragma once
#include <iostream>
#include <Windows.h>

void clear() {
    COORD topLeft = { 0, 0 };
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(
        console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    FillConsoleOutputAttribute(
        console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
        screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    SetConsoleCursorPosition(console, topLeft);
}

int startProgram()
{
    std::cout << "______--------------Calculator.Exe--------------------________" << std::endl;
	int uInput;
	std::cout << "Select operation." << std::endl;
	std::cout << "1. +" << std::endl;
	std::cout << "2. -" << std::endl;
	std::cout << "3. /" << std::endl;
	std::cout << "4. *" << std::endl;
	std::cin >> uInput;
	return uInput;
}

int addition(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
    if (x > y)
    {
        return x - y;
    }
    else
    {
        return y - x;
    }
}

float divi(int x, float y)
{

    return x / y;
}

int multip(int x, int y)
{
    return x * y;
}
