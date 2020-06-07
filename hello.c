#include <stdio.h>

int main(int argc, char* argv[], char* env[])
{
	int i=0;
	printf("Content-type:text/plain\n\n");
	printf("\nHello World!\n");
	for (; i<argc; i++)
	{
		printf("\nParameter %d is %s", i, argv[i]);
	}
	i=0;
	printf ("\n Environment Variables\n");
	while(env[i])
	{
		printf("\nVariable %d is %s", i, env[i]);
		i++;
	}
	return 0;
}
