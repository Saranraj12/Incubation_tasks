// Write a C Program to count number of characters in a file

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp;
	char ch;
	int count = 0;
	fp = fopen("file.txt","r");
	if (fp == NULL){
		printf("\nFile not found");
		exit(0);
	}
	while((ch = getc(fp))!=EOF){
		if((ch!=' ') && ((65<= ch <= 90) || (48<=ch<=57) || (97<=ch<=122)))
			count++;
	}
	printf("\nThe number of characters in this file : %d",count);
	fclose(fp);
}