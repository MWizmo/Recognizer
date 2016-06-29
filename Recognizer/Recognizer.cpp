#include "stdafx.h"
#include "Input-Output.h"
#include "Transliteration_Block.h"
//#include "Lexical_Block.h"
//#include "Syntax_Block.h"

int main()
{
	string a = Input();
	Lexem_Arr b;
	Output(Transliteration(a, b));
	/*if (Transliteration(a, b)) {
		for (int i = 0; i < b.size(); i++) {
			cout << b[i].title << " " << b[i].type << endl;
		}
	}*/
	system("pause");
    return 0;
}

