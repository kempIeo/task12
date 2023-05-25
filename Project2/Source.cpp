#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

bool chekperiod(string str, string test)
{
	if (str.find_last_of(test)!=str.size()-1) return false;
	while (str.find(test)==0)
	{
		str.erase(0, test.size());
	}
	return str.empty();
}

int IsKPeriodic(string str)
{
	int k = 0;
	string temp;
	do 
	{
		temp.push_back(str[k++]);
	} while (!chekperiod(str, temp)&&k<=str.size()/2); 
	return k*(k <= str.size() / 2);

}


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a("abcabcabcabcabc");
	cout << "Кратность строки :" << a << " = " << IsKPeriodic(a);
}