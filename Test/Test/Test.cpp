// Test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <map>
#include <Windows.h>

using namespace std;
typedef struct _MyBase
{
	int ID;
	vector<string> Paramlist;
	map<string, vector<string>> Name_Paramlist;
}MyBase;

int main()
{
	MyBase *base = new MyBase;
	for (size_t i = 0; i < 10; i++)
	{
		base->ID = i;
		string param = "Base LITO_";
		param += i;
		param += "_IODSL_878";
		base->Paramlist.push_back(param);
		//string name = "Name";
		//base->Name_Paramlist.insert(name,param);
	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID: " << base->ID << "\t";
		
	}
	cout << "I don't know!" << endl;
	system("pause");
    return 0;
}

