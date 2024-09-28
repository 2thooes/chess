#pragma once
#include <string>
#include <vector>
#include "decode_x.h"
#include "decode_y.h"

using namespace std;
//Базовый клас, от которого все наследуется
class Figure{
	
public:
	bool was_moved = false;

	void switch_was_moved();

	bool get_was_moved();
	
	Figure(int x, int y, string color,char letter);

	Figure();

	int get_x();
	int get_y();
	string get_color();
	char get_letter();

	void set_x(int x);
	void set_y(int y);
	void set_color(string color);

    virtual bool get_grid(vector <Figure*>& arr,int size , char board[8][8], string to_square);

	void go(string square);

	void die();
private:
	int x = 0;
	int y = 0;
	string color = "";
	char letter;
};