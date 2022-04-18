// C program to compare data of two files in File Handling

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	FILE *fp1,*fp2;
	char str[1024],str1[1024];
	fp1 = fopen("file1.txt","r");
	fp2 = fopen("file2.txt","r");
	if(fp1 == NULL || fp2 == NULL){
		printf("File not found");
		exit(0);
	}
	while((!feof(fp1)) && (!feof(fp2))){
		fgets(str,1024,fp1);
		fgets(str1,1024,fp2);
		if(strcmp(str,str1) != 0)
		{
			printf("\nBoth files are different\n");
			exit(0);
		}
	}
	printf("\nBoth files are same");
	fclose(fp1);
	fclose(fp2);
}