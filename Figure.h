#pragma once
#include <string>

using namespace std;

class Figure{
public:
	Figure(int x, int y, string color);

	Figure();
private:
	int x = 0;
	int y = 0;
	string color = "";
};