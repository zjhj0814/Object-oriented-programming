#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int low, high, score;
	int count = 0;
	ifstream infile;
	infile.open("score.txt");

	if (infile >> score)
	{
		count++;
		low = score;
		high = score;
	}

	while (infile >> score&&(count>=1&&count<10))
	{
		count++;
		if (score > high)
		{
			high = score;
		}
		if (score < low)
		{
			low = score;
		}
	}

	infile.close();

	cout << "���� ���� ����: " << low << ",  ���� ū ����:" << high;
}