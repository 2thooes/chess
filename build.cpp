#include <iostream>
#include "build.h"

using namespace std;

void build(string str, Figure* arr,int index)
{
	cout << str.substr(0, str.find(";"));
	arr[0] = Pawn(0,0,"black");
}
