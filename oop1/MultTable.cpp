#include "MultTable.h"

MultTable::MultTable(int size)
   :CAPACITY(size)
{
	for (int i = 0; i < CAPACITY; i++)
	{
		for (int j = 0; j < CAPACITY; j++)
		{
			table[i][j] = i * j;
		}
	}
}

void MultTable::print()
{

}