// C program to print source code of itself as output

#include <stdio.h>

void showSourceCode(FILE *fp) {
	char ch;
	while(!feof(fp)){
		ch = fgetc(fp);
		printf("%c",ch);
	}
}

int main() {
	FILE *fp;
	fp = fopen("viewsource.c","r");
	showSourceCode(fp);
	fclose(fp);
}