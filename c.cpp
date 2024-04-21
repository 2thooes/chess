#include <iostream>
#include <string>
#include "setup.h"
#include "length.h"
#include "Figure.h"
//coded by hardkode mewing sigma male
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    Figure* arr = new Figure[length()];
    setup(arr);
    cout << endl << arr[0].get_x() << endl << arr[0].get_y() << endl << arr[0].get_color() << endl;
    cout << endl << arr[1].get_x() << endl << arr[1].get_y() << endl << arr[1].get_color() << endl;
    return 0;
}
