#include "main.h"

int main(int argc, char* argv[])
{
	int userNumber = 0;

	memset(table, 0, TABLE_SIZE);

	puts("Enter a value:");
	scanf("%d", &userNumber);

	printf("%d! = %d\n", userNumber, factorialInt(userNumber));
	//printf("%.2f! = %.2f\n", userNumber, factorialF(userNumber));

	return 0;
}
