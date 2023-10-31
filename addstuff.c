#include <stdio.h>

int main()
{
	char str[] = "Open the noor";
	int num = 16;

	char result[17];
	sprintf(result, "%s %d", str, num);

	printf("Result: %s\n", result);

	return 0;
}
