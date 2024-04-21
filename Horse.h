#pragma once
#include <string>
#include "Figure.h"

using namespace std;

class Horse :public Figure {
public:

	Horse(int x, int y, string color, char letter);

	Horse();

};