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

int main(void)
{
    int i = function_S2();      // какой-то код (редактирую функцию способом 2)
                                // new dev in master
    int j = new_func();         // продолжение работы в мастер
    return 0;
}