#include<iostream>
using namespace std;

int main()
{
	int num;
	int sum = 0;
	int counter = 0;
	cout << "1000���� ���� ����(�����Ϸ��� 1000�Է�):";
	cin >> num;
	while (num != 1000)
	{
		sum += num;
		counter++;
		do {
			cout << "1000���� ���� ����(�����Ϸ��� 1000�Է�):";
			cin >> num;
		} while (num > 1000);
	}
	cout << static_cast<double>(sum) / counter;
}