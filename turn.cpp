#include <iostream>
#include "turn.h"
#include "is_square_correct.h"
#include "is_square_empty.h"
#include "is_my_figure.h"
#include "search.h"
#include "Find_figure.h"
#include "view.h"


bool turn(vector <Figure*>& arr, int size, char board[8][8], bool is_white_turn)
{
    string colorr , from_square , to_square;
    if (is_white_turn) {
        colorr = "white";
    }
    else {
        colorr = "black";
    }
    error:
    cout << "������� ���������� ������ � ������� ������ �������� ������:" << endl;
    cin >> from_square;
    if (!is_square_correct(from_square)) {//������
        cout << "������, ������������ ����������" << endl;
        goto error;
    }
    if (!is_square_empty(from_square, board)) {
        cout << "������, ��� ������ �����" << endl;
        goto error;
    }
    if (!is_my_figure(from_square , arr , size, colorr)) {
        cout << "������, ��� �� ���� ������" << endl;
        goto error;
    }
   
    cout << "�������" << endl;
    cout << "������� ���������� ������ �� ������� ������ �������� ������:" << endl;
    cin >> to_square;
    if (find_figure(arr, size, to_square)->get_letter() == 'K') {
        cout << "�����";
        return false;
    }
    if (to_square == from_square) {
        goto error;
    }
    while (!find_figure(arr, size, from_square)->get_grid(arr, size, board,to_square)) {
        cout << "������" << endl;
        cout << "������� ���������� ������ �� ������� ������ �������� ������:" << endl;
        cin >> to_square;
        if (to_square == from_square) {
            goto error;
        }
    }
    find_figure(arr, size, from_square)->go(to_square);
    
    return true;
}
