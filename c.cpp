#include <iostream>
#include <string>
#include "setup.h"
#include "length.h"
#include "Figure.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    Figure* arr = new Figure[length()];
    setup(arr);
    return 0;
}
