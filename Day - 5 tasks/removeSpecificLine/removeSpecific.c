// To remove a specific line from a text file.\

#include <stdio.h>
#include<stdlib.h>


void concatString(char* str1,char* str2) {
	int i = 0,j = 0;
	while(str1[i] != '\0') i++;
	while(str2[j] != '\0'){
		str1[i] = str2[j];
		i++;
		j++; 
	}
	str1[i] = '\0';
}

void removeSpecificLine(char fileName[], int n) {
	FILE *temp, *fp;
	char tempFile[15] = "temp_", store[1024];
	concatString(tempFile, fileName);
	fp = fopen(fileName, "r");
	temp = fopen(tempFile, "w");
	if(fp == NULL) {
		printf("\nThere is no such file in your directory");
		exit(0);
	}
	
	int curLine = 1, indicator = 1;
	while(indicator) {
		fgets(store, 1024,fp);
		if (feof(fp)) indicator = 0;
		else if(curLine!=n) {
			fputs(store,temp);
		}
		curLine++;
	}
	fclose(fp);
	fclose(temp);
	
	remove(fileName);
	rename(tempFile,fileName);
}

int main() {
	
	char fileName[15];
	int n;
	printf("\nEnter the File Name :");
	scanf("%s",fileName);
	printf("\nEnter the delete line No:");
	scanf("%d",&n);
	removeSpecificLine(fileName, n);
}