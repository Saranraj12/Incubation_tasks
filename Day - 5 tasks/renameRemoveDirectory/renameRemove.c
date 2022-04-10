// Rename,Remove,check whether a file or directory exists or not

#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *fp,*temp;
	char ch;
	fp = fopen("old_file.txt","r");
	temp = fopen("temp_file.txt","w");
	if (fp == NULL)
	{
		printf("No such file directory");
		exit(0);
	}
	while((ch = fgetc(fp))!=EOF) {
		fputc(ch, temp);
	}

	fclose(fp);
	rename("temp_file.txt","file.txt");
	remove("old_file.txt");
}