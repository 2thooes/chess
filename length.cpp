#include <iostream>
#include <string>
#include <fstream>
#include "length.h"
using namespace std;


//������� ��� �������� ����� �������
int length()
{
	int count = -1;// ����������� ������ ��� ������� �� �������� ��� �������� 0, ���� ����� � ����� ����� ������������ ������ ��� ��������
	string setup_path = "setup.txt";
	ifstream setup_file;
	setup_file.open(setup_path);
	string str;
	while (!setup_file.eof())
	{
		count++;
		str = "";//��������
		setup_file >> str;//��������
	}
	setup_file.close();
	return count;
}
