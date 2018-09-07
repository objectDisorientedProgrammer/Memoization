/*
    Memoization  Copyright (C) 2015  Douglas Chidester
    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details.
*/

#include "factorial.h"

#define TABLE_SIZE 50

// tables to store pre-computed values
int tableInt[TABLE_SIZE];
float table[TABLE_SIZE];

int factorialInt(int num)
{
    if(num == 0)
        return 1;
    else if(num < TABLE_SIZE && tableInt[num] > 0)
        return tableInt[num];
    else
    {
        int value = factorialInt(num - 1) * num;
        tableInt[num] = value;
        return value;
    }
}

float factorialF(float num)
{
    if(num == 0.0f)
        return 1.0f;
    else if(num < TABLE_SIZE && table[(int)num] > 0.0f)
        return table[(int)num];
    else
    {
        float value = factorialF(num - 1.0f) * num;
        table[(int)num] = value;
        return value;
    }
}
