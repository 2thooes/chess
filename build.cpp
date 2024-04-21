#include <iostream>
#include "build.h"

using namespace std;

void build(string str, int* arr)
{
	arr[0] = 1;
	arr[1] = 2;
	cout << str.substr(0, str.find(";"));

}
