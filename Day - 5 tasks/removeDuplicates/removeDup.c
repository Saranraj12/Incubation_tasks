// Program to remove duplicate letters in a file

#include <stdio.h>

int main() {
	FILE *fp1,*fp2;
	char ch;
	fp1 =  fopen("duplicate.txt","r");
	fp2 = fopen("new.txt","w");
	int arr[256] = {0};
	while((ch = fgetc(fp1)) != EOF) {
		if (ch == 32){//space check
			fputc(ch,fp2);
		}
		else if (arr[ch] == 0) {
			fputc(ch,fp2);
			arr[ch]++;
		}0
	}
	fclose(fp1);
	fclose(fp2);
}