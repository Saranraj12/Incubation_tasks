// To replace a specific line from a another file.\

#include <stdio.h>
#include<stdlib.h>

void replaceSpecificLine(char fileName1[], char fileName2[], int n) {
	FILE *fp1, *fp2, *temp;
	char store1[1024],store2[1024];
	fp1 = fopen(fileName1, "r");
	fp2 = fopen(fileName2, "r");
	temp = fopen("temp.txt","w");
	if(fp1 == NULL || fp2 == NULL) {
		printf("\nThere is no such file in your directory");
		exit(0);
	}
	
	int curLine = 1, indicator = 1;
	while(indicator) {
		fgets(store1, 1024,fp1);
		fgets(store2, 1024,fp2);
		if (feof(fp1) && feof(fp2)) indicator = 0;
		else if(curLine!=n) {
			fputs(store1,temp);
		}
		else if(curLine == n){
			fputs(store2,temp);
		}
		curLine++;
	}
	fclose(fp1);
	fclose(fp2);
	fclose(temp);
	
	remove(fileName1);
	rename("temp.txt",fileName1);
}

int main() {
	
	char fileName1[15],fileName2[15];
	int n;
	printf("\nEnter the First File Name :");
	scanf("%s",fileName1);
	printf("\nEnter the Second File Name :");
	scanf("%s",fileName2);
	printf("\nEnter the line Number  you want to replace:");
	scanf("%d",&n);
	replaceSpecificLine(fileName1, fileName2, n);
}