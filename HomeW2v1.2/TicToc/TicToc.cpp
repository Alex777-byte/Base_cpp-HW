// TicToc.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cstring>
#include <string.h>
#include "TicToc.h"

using namespace std; // нужно для идентификации string наряду с библиотекой

#define  SIZE 3

string positions[3][3] = { " "," "," "," "," "," "," "," "," ", };
int     inputSF;
char    inputSS;
string  currentSymbol = "X";

int X;
int Y;

void changeSymbol()
{
    if (currentSymbol == "X")
        currentSymbol = "0";
    else
        currentSymbol = "X";
}

void PrintGameField()
{
    cout << "Игровое поле (--- пусто):" << endl;
    for (int i = 0;i < SIZE;i++)
    {
        for (int j = 0;j < SIZE;j++)
        {
            cout << positions[i][j] << " | ";
        }
        cout << endl;
    }
}

void inputPleer()
{
    cout << "Введите координату X:";
    cin >> X;
    cout << "Введите координату Y:";
    cin >> Y;
//    if(X< SIZE)
//    if(positions[X][Y]== " ")
    positions[X][Y] = currentSymbol;
}

int main()
{
    setlocale(LC_ALL, "Russian");    // подключаем русский язык
    PrintGameField();

    for (int q = 0; q <= 9; ++q)
    {
        inputPleer();
        changeSymbol();
        PrintGameField();
    }
    return 0;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
