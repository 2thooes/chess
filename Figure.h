#pragma once
#include <string>

using namespace std;

class Figure{
public:
	Figure(int x, int y, string color);

	Figure();

	int get_x();
	int get_y();
	string get_color();

	void set_x(int x);
	void set_y(int y);
	void set_color(string color);
private:
	int x = 0;
	int y = 0;
	string color = "";
};