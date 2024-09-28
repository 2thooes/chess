#include <iostream>
#include <string>
#include <fstream>
#include "length.h"
using namespace std;


//Ôóíêöèÿ äëÿ ïîäñ÷åòà äëèíû ìàññèâà
int length()
{
	int count = -1;// ĞÀÇÎÁĞÀÒÜÑß ÏÎ×ÅÌÓ İÒÀ ÕÓÅÒÅÍÜ ÍÅ ĞÀÁÎÒÀÅÒ ÏĞÈ ÇÍÀ×ÅÍÈÈ 0, ÕÎÒß ÊÎÃÄÀ ß ÏÈÑÀË ×ÅĞÅÇ ÄÈÍÀÌÈ×ÅÑÊÈÉ ÌÀÑÑÈÂ ÎÍÀ ĞÀÁÎÒÀËÀ
	string setup_path = "setup.txt";
	ifstream setup_file;
	setup_file.open(setup_path);
	string str;
	while (!setup_file.eof())
	{
		count++;
		str = "";//çàãëóøêà
		setup_file >> str;//çàãëóøêà
	}
	setup_file.close();
	return count;
}
