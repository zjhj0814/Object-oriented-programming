#include "Brand.h"
#include<stdio.h>

Brand::Brand(int a, string brand, string model)
	:Brand_name(brand), Model_name(model)
{
	ID = new int{ a };
}

Brand::Brand(const Brand& br)
	:Brand_name(br.Brand_name), Model_name(br.Model_name)
{
	ID = new int{ *(br.ID) };
}

Brand::~Brand()
{
	delete ID;
}

void Brand::print()
{
	cout << "ID:" << *ID << " Brand name:" << Brand_name << " Model_name:" << Model_name;
	//printf("ID:%d Brand_name:%s Model_name:%s", (*ID), Brand_name, Model_name); 문자열 인코딩 영문 string이 왜 안 되는거지?
}