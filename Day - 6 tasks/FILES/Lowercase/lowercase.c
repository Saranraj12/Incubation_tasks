// C Program to Convert text of File to LowerCase

#include<stdio.h>

int main() {
	FILE *fp,*fp1;
	fp = fopen("file.txt","r");
	fp1 = fopen("temp.txt","w");
	char ch;
	while((ch=fgetc(fp))!=EOF){
		if (65<=ch && ch<=90){
			fputc(ch+32,fp1);
		}
		else{
			fputc(ch,fp1);
		}
	}
	fclose(fp);
	fclose(fp1);
	remove("file.txt");
	rename("temp.txt","file.txt");
}