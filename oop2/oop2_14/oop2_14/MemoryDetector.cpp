#include<iostream>
using namespace std;

static int gCount{ 0 };
static int iCount{ 0 };

template<typename T>
T* mem(int a) {
	gCount += sizeof(T)*a;
	return new T[a];
}

template<>
int* mem(int a) {
	gCount += sizeof(int)*a;
	iCount += sizeof(int)*a;
	return new int[a];
}

int main() {
	char* cdata; //1
	int* idata; //4
	double* ddata; //8

	cdata = mem<char>(2); //2
	idata = mem<int>(2); //8
	ddata = mem<double>(3); //24

	cout << "global memory footprint : " << gCount<<endl;
	cout<< "memory footprint only of integers : " << iCount;

	delete[] cdata;
	delete[] idata;
	delete[] ddata;
	return 0;
}