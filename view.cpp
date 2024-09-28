#include <iostream>
#include "view.h"
#include "Find_figure.h"
using namespace std;

//Создана для обновления данных псоле изменений для корректного отображения
//Также будет очень важна для просчета фигур
void refresh(vector <Figure*>& arr, int size, char board[8][8]) {
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j] = 'O';
        }
    }
    
    for (int i = 0; i < 8; i++) { 
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < size; k++) {
                if (arr[k]->get_x() == j and arr[k]->get_y() == i) {
                    board[i][j] = arr[k]->get_letter();//break
                }
            }
        }
        
    }
    
}

//Фукция для вывода "доски". Не работает без refresh()
void view(vector <Figure*>& arr, int size, char board[8][8]) {
    const string red = "\033[31m";
    const string blue = "\033[36m";
    const string nul = "\033[0m";
    string white = "white";
    refresh(arr, size, board);
    cout << "Доска на данный момент:" << endl;
    cout << "  a b c d e f g h" << endl << "  ---------------" << endl;
    for (int i = 0; i < 8; i++) {
        cout << 8 - i << '|';
        for (int j = 0; j < 8; j++) {
            
            if (find_figure(arr, size, i, j)->get_color() == "white") {//отвечает за цветастость
                cout << red << board[i][j] << nul << " ";
            }
            if (find_figure(arr, size, i, j)->get_color() == "black") {
                cout << blue << board[i][j] << nul << " ";
            }
            if (find_figure(arr, size, i, j)->get_color() == "null") {
                cout  << board[i][j]  << " ";
            }
        }
        cout << '|' << 8 - i << endl;
    }
    cout << "  ---------------" << endl << "  a b c d e f g h" << endl;
}

void view(int board[8][8])//дописать отображение сетки
{

}
