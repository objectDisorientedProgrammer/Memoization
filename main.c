#include "factorial.h"
#include "main.h"

int main(int argc, char* argv[])
{
	float userNumber = 0;
	puts("Enter a value:");
	scanf("%f", &userNumber);

	printf("%f! = %f\n", userNumber, factorialF(userNumber));

	return 0;
}
