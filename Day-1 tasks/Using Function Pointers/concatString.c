// To Concatenate the string

#include <stdio.h>

void concatString(char* str1,char* str2) {
	int i = 0,j = 0;
	while(str1[i] != '\0') i++;
	while(str2[j] != '\0'){
		str1[i] = str2[j];
		i++;
		j++; 
	}
	str1[i] = '\0';
}

int main() {
	char str1[100], str2[100];
	printf("Enter the first String : ");
	gets(str1);
	printf("Enter the second String : ");
	gets(str2);
	void (*concat)(char*,char*) = concatString;
	concat(str1,str2);
	printf("Concatenated String : %s",str1);
}