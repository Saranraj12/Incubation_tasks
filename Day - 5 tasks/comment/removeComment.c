// Count and remove comment lines
// Header File
#include <stdio.h>

/*

Multiline Comment

*/

void removeLines(){
	FILE *fp1,*fp2;
	char ch;
	int f=0,count = 0;
	fp1 = fopen("removeComment.c","r");
	fp2 = fopen("removed.txt","w");
	
	while((ch = fgetc(fp1))!=EOF) {
		if(f == 3 && ch == '\n') count++;
		if (ch == '/' && f == 0)
		{
			f = 1;
			continue;
		}
		else if(ch == '/' && f == 1){
			f = 2;
			continue;
		}
		else if(ch == '*' && f == 1){
			f = 3;
			continue;
		}
		if(f == 2) {
			if (ch == '\n') {
				count++;
				f = 0;
				fputc(ch,fp2);
			}
			continue;	
		}
		if(f == 3) {
			if (ch == '*') {
				f = 4;
			}
			continue;	
		}
		if(f == 4) {
			if (ch == '/') {
				f = 0;
			}
			continue;	
		}
		if (f == 0){
			fputc(ch,fp2);
		}
		
	}
	fclose(fp1);
	fclose(fp2);
	printf("%d",count);
}

//Main Function
int main() {
	removeLines();
}