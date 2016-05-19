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
	cout << "Enter the name of file: ";
	//cin >> FileName;

	char FileName1[N] = "2.txt";
	cout << "Enter the name of file: ";
	//cin >> FileName1;
	char NewFileName[N] = "3.txt";
	cout << "Enter the name of new file: ";
	//cin >> NewFileName;
	cout << endl;
	EnterNewFile(FileName, FileName1, NewFileName);
	system("pause");
	return 0;
}
ofstream EnterNewFile(char* File1, char* File2, char* NewFile)
{
	ifstream Arr(File1, ios_base::in);
	ifstream Arr1(File2, ios_base::in);
	ofstream Arr2(NewFile, ios_base::out);
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
