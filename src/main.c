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
	
	
	//printf("%.2f! = %.2f\n", userNumber, factorialF(userNumber));

	return 0;
}
