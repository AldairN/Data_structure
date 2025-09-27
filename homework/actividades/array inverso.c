#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int arr[10];
	int numCuenta=424129695;
	int ultimo=numCuenta%10;
	for (int i = 10; i > 0; i--){
		arr[i]=i*2;
		fprintf(stdout, " |%i| ",arr[i]);
	}
	fprintf(stdout,"\n");
	for (int i = 10; i > 0; i--)
	{
		arr[ultimo]=-1;
		fprintf(stdout," |%i| ",arr[i]);
	}
	return 0;
}