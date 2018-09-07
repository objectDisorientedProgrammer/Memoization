/*
    Memoization  Copyright (C) 2015  Douglas Chidester
    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details.
*/

#ifndef FACTORIAL_H
#define FACTORIAL_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/**
 * Perform factorial on an integer.
 */
int factorialInt(int num);

/**
 * Perform factorial on a float.
 */
float factorialF(float num);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // FACTORIAL_H
