#include "Array.h"

Array::Array(int c, int s)
	:capacity(c), size(s)
{
	pArray = new int[capacity];
	for (int i = 0; i < size; i++)
	{
		cout << i << "번째 요소의 값을 입력하시오:";
		cin >> *(pArray + i);
	}
}

Array::Array(const Array& arr)
	:capacity(arr.capacity), size(arr.size)
{
	pArray = new int[capacity];
}

Array::~Array()
{
	for (int i = 0; i < size; i++)
	{
		delete[] (pArray + i);
	}
	delete pArray;
}

void Array::insert(int insert)
{
	if (capacity <= size)
	{
		cout << "배열이 꽉 차서 요소를 추가할 수 없습니다." << endl;
	}
	else
	{
		*(pArray + size) = insert;
		size++;
	}
}

void Array::print()
{
	int col = 1;
	for (int i = 0; i < size; i++)
	{
		col++;
		cout << *(pArray + i) << " ";
		if (col > 5)
		{
			cout << endl;
			col = 1;
		}
	}
}