#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int count1=0 , count2=0 ;
	int num;
	ifstream infile;
	infile.open("inFile.txt");

	while ((infile>>num)&&(num != 0))
	{
		if (num > 0)
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}

	infile.close();
	cout << "���� ����:" << count1 << ",  ��������:" << count2;
}