#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
	if (argc == 2){
		printf("string length : %li\n", strlen(argv[1]));
		int sum = 0;
		for (int i=0; i <= strlen(argv[1]); i++){
			sum += (int) argv[1][i];
		}
		printf("ascii sum : %d\n", sum);

		if(sum == 811){
			printf("Successfully bypassed the key !\n");
		} else {
			printf("No you cant gahaha !\n");		
		}

	} else {
		printf("Usage: %s <key>\n", argv[0]);
	}
}
