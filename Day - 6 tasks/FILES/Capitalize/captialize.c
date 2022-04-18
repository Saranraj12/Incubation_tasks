// C Program to Replace First Letter with Capital Letter

#include <stdio.h>

int main() {
	FILE *fp,*fp1;
	char ch;
	int f = 0;
	fp = fopen("captialize.txt","r");
	fp1 = fopen("temp.txt","w");
	ch = getc(fp);
	if (97<=ch<=122){
		fputc(ch-32,fp1);
	}
	
	while((ch = getc(fp))!=EOF){
		if(ch == ' '){
			fputc(ch,fp1);
			f = 1;
		}
		else if(ch!= ' ' && f!=1){
			fputc(ch,fp1);
		}
		if (f == 1) {
			if(97<=ch<=122 && ch!=' '){
				fputc(ch-32,fp1);
				f = 0;
			}
		}
	}
	fclose(fp);
	fclose(fp1);
	
}