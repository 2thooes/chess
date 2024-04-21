#include <iostream>
#include <string>
#include "setup.h"
#include "length.h"
#include "Figure.h"

using namespace std;

void view(Figure* arr,int size) {
    bool is_empty;
    cout << "Доска на данный момент:" << endl;
    cout << "  a b c d e f g h" << endl << "  ---------------" << endl;
    for (int i = 0; i < 8; i++) {
        cout << 8-i << '|';
        for (int j = 0; j < 8; j++) {
            is_empty = true;
            for (int k = 0; k < size; k++) {
                if (arr[k].get_x() == j and arr[k].get_y() == i) {
                    is_empty = false;
                    cout << arr[k].get_letter()<<" ";
                    break;
                }
            }
            if (is_empty) {
                cout << "o ";
            }
            
        }
        cout << '|' << 8-i << endl;
    }
    cout  << "  ---------------" << endl << "  a b c d e f g h" << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");
    Figure* arr = new Figure[length()];
    setup(arr);
    view(arr,length());
    return 0;
}
