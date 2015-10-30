#include "factorial.h"

float factorialF(float num)
{
	if(num == 0)
		return 1;
	else if(num < TABLE_SIZE && table[(int)num] > 0)
		return table[(int)num];
	else
	{
		float value = factorialF(num - 1) * num;
		table[(int)num] = value;
		return value;
	}
}
