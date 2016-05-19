#include <iostream>
#include <fstream>
using namespace std;
ofstream EnterNewFile(char*, char*, char*);
void BubbleSort(int*, int);
void Swap(int&, int&);
const int N = 100;
int main()
{
	char FileName[N] = "1.txt";
	char FileName1[N] = "2.txt";
	char NewFileName[N] = "3.txt";
	EnterNewFile(FileName, FileName1, NewFileName);
	system("pause");
	return 0;
}
ofstream EnterNewFile(char* File1, char* File2, char* NewFile)
{
	ifstream Arr(File1);
	ifstream Arr1(File2);
	ofstream Arr2(NewFile);
	int a = 0, b = 0, c = 0, d = 0;
	while (!Arr.eof()&&!Arr.eof())
	{
		Arr.seekg(d);
		Arr >> a;
		cout <<"a="<< a;
		cout << d;
		system("pause");
		Arr1.seekg(c);
		Arr1 >> b;
		cout <<"b="<< b;
		cout << c;
		system("pause");
		if (a >= b)
		{
			Arr2 << b<<" ";
			c+=2;
		}
		else
		{
			Arr2 << a<<" ";
			d+=2;
		}
		
	}
	return Arr2;
}
