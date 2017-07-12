//
//  Создан файл C++ .. тест
//
//  new line
//  second line

#include <iostream>

using namespace std;

int function_S1()               // Идея для новой ветки (тест)
{
    int var = 20;               // Новая переменная в новой ветке
    int u = 100;                // Еще одна переменная
    return 10;
}

int new_func()                  // Идея для новой ветки 2 (тест)
{
    int var = 20;               // Новая переменная в новой ветке
    int u = 100;                // Еще одна переменная
    return 10;
}

int new_func_3()                // Новая функция 3!
{
    int var = 2000;             // Новая переменная в новой ветке
    int u = 10000;              // Еще одна переменная
    return 1000;
}

int main(void)
{
    int i = function_S2();      // какой-то код (редактирую функцию способом 2)
                                // new dev in master
    int j = new_func();         // продолжение работы в мастер

    int y = new_func_3();       // использую функцию 3
    return 0;
}