// To append a content to a file

#include <stdio.h>

void append(FILE *fp){
	char ch;
	printf("Enter the sentence you want to add  at the last you should put @\n\n");
	while(1){
		scanf("%c",&ch);
		if (ch == '@')
			break;
		fputc(ch,fp);
	}
}

int main(){
	FILE *fp;
	fp = fopen("addContent.txt","a");
	append(fp);
	fclose(fp);
	
}