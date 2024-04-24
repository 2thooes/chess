#include <iostream>
#include <string>
#include <fstream>
#include "setup.h"
#include "build.h"

using namespace std;

string isopen(ifstream& file)//Функциядля проверки открытия файла
{
	if (file.is_open()) {
		return("open!");
	}
	return("dont open!");
}

void setup(Figure* arr)//Задача этой функции расчленить файл setup.txt на строки и передать их в build() функцию
{
	int index = 0;
	string setup_path = "setup.txt";
	ifstream setup_file;
	setup_file.open(setup_path);
	cout << isopen(setup_file);
	string str;
	while (!setup_file.eof())
	{
		str = "";
		setup_file >> str;
		build(str, arr,index);
		index++;
	}
	setup_file.close();
}
