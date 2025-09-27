#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long long ll;
int main(int argc, char *argv[])
{
	ll num=atoll(argv[1]);
	int arr[10];
	int ultimo=num%10;
	fprintf(stdout, "numero de cuenta: %s\n",argv[1]);
	for (int i = 0; i < 10; i++) {
        arr[i] =(i+1)*2;
    }
	for (int i = 9; i >= 0; i--){
		fprintf(stdout, " |%d| ",arr[i]);
	}
	printf("\n");
	if (ultimo >= 0 && ultimo < 10) {
        arr[ultimo] = -1;
    }
		//arr[ultimo]=-1;
	for (int i = 9; i >= 0; i--)
	{
		fprintf(stdout," |%i| ",arr[i]);
	}
	return 0;
}