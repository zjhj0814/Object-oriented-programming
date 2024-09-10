#include<iostream>
#include<cstring>
#include<algorithm> //max,min_element
#include<sstream> //stringstream 헤더파일
using namespace std;

int main()
{
	int a[5];
	cout << "Please type five numbers.";
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}

	cout << "The input was ";
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "Max: " << *max_element(a, a + 5) << endl;
	cout << "Min: " << *min_element(a, a + 5);

}