/*
    Memoization  Copyright (C) 2015  Douglas Chidester
    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details.
*/

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    // init
    int userNumber = 0;
    int result = 0;
    int repetitions;
    int cmdLine = 0;
    memset(tableInt, 0, TABLE_SIZE);

    // TODO create menu for user to choose from
    // can pick integer or floating point computations

    if (argc < 2)
    {
        puts("Enter a value (-1 to quit):");
        scanf("%d", &userNumber);
        repetitions = 2;
    }
    else
    {
        repetitions = argc;
        cmdLine = 1;
    }

    for (int i = 1; i < repetitions; ++i)
    {
        if (cmdLine == 1)
        {
            userNumber = atoi(argv[i]);
        }
        // TODO start timer
        result = factorialInt(userNumber);
        // TODO end timer

        printf("%d! = %d\n", userNumber, result); // add time taken to compute
    }
    
    // TODO end menu loop

    return 0;
}
