#include <iostream>
#include <string>
#include "setup.h"
#include "length.h"

//#include "figure.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int* arr = new int(length());
    setup(arr);
    cout << arr[0] << arr[1] << endl;
    return 0;
}
