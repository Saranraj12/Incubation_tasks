// C Program to Find Size of File in File Handling

#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *fp;
	fp = fopen("file.txt","r");
	if(fp == NULL){
		printf("File Not Found");
		exit(0);
	}
	int count = 0;
	while(getc(fp)!=EOF){
		count++;
	}
	printf("\nSize : %d bytes",count);
	fclose(fp);
}