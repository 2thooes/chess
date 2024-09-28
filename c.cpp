#include <iostream>
#include <string>
#include <vector>
#include "setup.h"//Подключение зависимостей
#include "length.h"
#include "Figure.h"
#include "view.h"
#include "start_game.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    char board[8][8];
    vector<Figure*> arr;
    //Создание массива для хранения фигур
    setup(arr);
    view(arr, length(), board);
    start_game(arr, length(), board);
    for (Figure* ptr : arr) {
        delete ptr;
    }
    return 0;
}
