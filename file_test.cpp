//
//  Создан файл C++ .. тест
//
//  new line
//  second line

#include <iostream>

using namespace std;

int func()                      // Идея для новой ветки (тест)
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

int main(void)
{
    int i = func();             // какой-то код
                                // new dev in master
    return 0;
}