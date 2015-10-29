#include "factorial.h"
#include "main.h"

int main(int argc, char* argv[])
{
	float userNumber = 0;
	cout << "Enter a value:" << endl;
	cin >> userNumber;

	cout << factorial(userNumber) << endl;

	return 0;
}
