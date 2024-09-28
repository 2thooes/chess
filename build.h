#pragma once
#include <vector>
#include "Figure.h"
#include "Pawn.h"
#include "Rook.h"
#include "Horse.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"
using namespace std;
void build(string str, vector <Figure*>& arr,int index);