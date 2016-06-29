#include "Transliteration_Block.h"


bool Transliteration(string input_string, Lexem_Arr & main_vec)
{
	Str_Tolower(input_string);
	Fragmentation_Str(input_string, main_vec);
	if (Assign_Class(main_vec)) return true;
	else {
		cout << "REJECT" << endl;
		return false;
	}
}

void Str_Tolower(string & str) {
	for (int i = 0; i < str.size(); i++) {
		str[i] = tolower(str[i]);
	}
}

void Fragmentation_Str(string inputString, Lexem_Arr & main_vec)
{
	for (int i = 0; i < inputString.size(); i++) {
		lexem cur;
		cur.title = inputString[i];
		main_vec.push_back(cur);
	}
}

bool Assign_Class(Lexem_Arr & main_vec)
{
	for (int i = 0; i < main_vec.size(); i++) {
		bool flag = false;
		for (int j = 0; j < table_size; j++) {
			if (Transliteration_Table[j][0] == main_vec[i].title) {
				main_vec[i].type = Transliteration_Table[j][1];
				flag = true;
			}
		}
		if (flag == false) return false;
	}
	return true;
}

