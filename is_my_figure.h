#pragma once
#include <iostream>;
#include <string>;
#include <vector>
#include "Figure.h"
#include "decode_x.h"
#include "decode_y.h"

using namespace std;

bool is_my_figure(string from_square, vector <Figure*>& arr, int size , string color);