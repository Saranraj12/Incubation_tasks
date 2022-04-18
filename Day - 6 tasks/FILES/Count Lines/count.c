/* 
C Program to Count Lines,Blank Lines,
Comments in File
*/

#include <stdio.h> //header
#include <stdlib.h>

int countBlankLines() {
	FILE *fp = fopen("count.c","r");
	char ch;
	int count = 0;
	while((ch=fgetc(fp))!=EOF) {
		if(ch == '\n'){
			if(ch =fgetc(fp)=='\n'){
				count++;
			}
		}

	}
	fclose(fp);
	return count;
}

int countCommentLines() {
	FILE *fp = fopen("count.c","r");
	char ch;
	int count = 0,f = 0;
	while((ch=fgetc(fp))!=EOF) {
		if(f!=1 && ch ==  '/'){
			if((ch = fgetc(fp)) == '*'){
				f = 1;
				continue;
			}
			
		}	
		if(f == 1){
			if(ch == '\n'){
				count++;
			}
			if(ch == '*'){
				if((ch=fgetc(fp))=='/'){
					count++;
					f = 0;
				}
			}
		}

	}
	rewind(fp);
	while((ch = fgetc(fp))!=EOF){
		if(ch ==  '/' && (ch = fgetc(fp)) == '/' ){
			count++;
			while((ch=fgetc(fp))!='\n'); 
		}
	}
	fclose(fp);
	return count;
}

int countLines() {
	FILE *fp = fopen("count.c","r");
	char ch;
	int count = 1;
	while((ch=fgetc(fp))!=EOF) {
		if (ch == '\n') count++;
	}
	fclose(fp);
	return count;

}

int main() {
	printf("\nNo. of lines : %d",countLines());
	printf("\nNo. of blank lines : %d",countBlankLines());
	printf("\nNo. of comment lines : %d",countCommentLines());

}
