#include <stdio.h>
#include <stdlib.h>
void add_stuff (char *s, int n)
{
	if (s != NULL)
	{
		printf("%s%d\n", s, n);
	}
}
int main(void)
{
	char *text = ("Hello ");
	int n = 10;
	add_stuff(text, n);
	return 0;
}
