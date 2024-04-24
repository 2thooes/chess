#include <iostream>
#include <string>
#include <fstream>
#include "length.h"
using namespace std;


//Функция для подсчета длины массива
int length()
{
	int count = 0;
	string setup_path = "setup.txt";
	ifstream setup_file;
	setup_file.open(setup_path);
	string str;
	while (!setup_file.eof())
	{
		count++;
		str = "";//заглушка
		setup_file >> str;//заглушка
	}
	setup_file.close();
	return count;
}
