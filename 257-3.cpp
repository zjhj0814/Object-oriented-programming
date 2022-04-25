#include<iostream>
using namespace std;

int main()
{
	int num;
	int sum = 0;
	int counter = 0;
	cout << "1000보다 작은 숫자(종료하려면 1000입력):";
	cin >> num;
	while (num != 1000)
	{
		sum += num;
		counter++;
		do {
			cout << "1000보다 작은 숫자(종료하려면 1000입력):";
			cin >> num;
		} while (num > 1000);
	}
	cout << static_cast<double>(sum) / counter;
}