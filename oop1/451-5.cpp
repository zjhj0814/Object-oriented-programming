#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	int arr[10];
	int size = 10;

	int high = 100;
	int low = 1;

	int small = 1000;
	int large = -1000;
	int smallpos;
	int largepos;

	srand(time(0));

	for (int i = 0; i < size; i++)
	{
		int temp = rand();
		arr[i] = temp % (high - low + 1) + low;
		
		if (arr[i] < small)
		{
			small = arr[i];
			smallpos = i; //�ε��� ��ȣ�� ����س��� ���� ����Ʈ!
		}
		if (arr[i] > large)
		{
			large = arr[i];
			largepos = i;//�ε��� ��ȣ�� ����س��� ���� ����Ʈ!
		}
	}

	cout << largepos << "�ּҰ�"<<smallpos << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = smallpos ; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	size--;

	for (int j = largepos; j < size; j++)
	{
		arr[j] = arr[j + 1];
	}
	size--;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

}