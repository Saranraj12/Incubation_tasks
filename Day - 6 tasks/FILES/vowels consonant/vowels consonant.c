/*
C Program to read a text from the user and find vowels, consonants and digits
and write them in different files(vowels.txt, consonants.txt, digits.txt).
*/
#include <stdio.h>
#include <ctype.h>

int isVowel(char ch){
	char arr[] = "aeiouAEIOU";
	for(int i = 0;i < 10;i++){
		if(ch == arr[i])
			return 1;
	}
	return 0;
}

int main() {
	FILE *fp1,*fp2,*fp3;
	fp1 = fopen("vowels.txt","w");
	fp2 = fopen("consonants.txt","w");
	fp3 = fopen("digits.txt","w");
	char ch;
	while((ch=getchar())!='@'){
		if(ch == ' ' || ch == '\n'){
			continue;
		}
		if(isdigit(ch)){
			fputc(ch,fp3);
		}
		else if(isVowel(ch)){
			fputc(ch,fp1);
		}
		else{
			fputc(ch,fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}