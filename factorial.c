#include "factorial.h"

float factorialF(float num)
{
	if(num == 0)
		return 1;
	else if(num < TABLE_SIZE && table[num] > 0)
		return table[num];
	else
	{
		float value = factorialF(num - 1) * num;
		table[num] = value;
		return value;
	}
}
