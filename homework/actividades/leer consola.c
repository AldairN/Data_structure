#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i;
	char *num=argv[1];
	fprintf(stdout, "arg[1]=%s\n",argv[1]);
	for (int i = 0; i < strlen(argv[1]); i++)
	{
		fprintf(stdout,"num[%d]=%c\n",i,num[i]);
	}
	return 0;
}