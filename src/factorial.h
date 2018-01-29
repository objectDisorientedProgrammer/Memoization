/*
    Memoization  Copyright (C) 2015  Douglas Chidester
    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details.
*/

#ifndef FACTORIAL_H
#define FACTORIAL_H

#define TABLE_SIZE 50

int tableInt[TABLE_SIZE];
float table[TABLE_SIZE];

int factorialInt(int);
float factorialF(float);

#endif
