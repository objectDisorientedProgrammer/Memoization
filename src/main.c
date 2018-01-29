/*
    Memoization  Copyright (C) 2015  Douglas Chidester
    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details.
*/

#include "main.h"

int main(int argc, char* argv[])
{
    // init
    int userNumber = 0;
    int result = 0;
    memset(tableInt, 0, TABLE_SIZE);

    // TODO check argc, argv

    // TODO start loop
    
    puts("Enter a value (-1 to quit):");
    scanf("%d", &userNumber);
    // TODO start timer
    result = factorialInt(userNumber);
    // TODO end timer
    printf("%d! = %d\n", userNumber, result); // add time taken to compute
    
    // TODO end loop

    return 0;
}
