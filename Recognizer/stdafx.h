// stdafx.h: ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ������ ��� ����������� �������, ������� ����� ������������, ��
// �� ����� ����������
//

#pragma once


#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct lexem {
	string title, type;
};

typedef vector<lexem> Lexem_Arr;

const int table_size = 44;


// TODO: ���������� ����� ������ �� �������������� ���������, ����������� ��� ���������
