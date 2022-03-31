#include <stdio.h>

int lengthOfString(char* str) {
	if (str[0] == '\0')
		return 0;
	return 1 + lengthOfString(str + 1);
}

void copyString(char* original, char* copy) {
	int i;
	for (i = 0; i < lengthOfString(original);i++) 
		copy[i] = original[i];
}

int main() {
	char str[100];
	char copyStr[100];
	printf("Enter the String : ");
	gets(str);
	void (*copy)(char*,char*) = copyString;
	copy(str, copyStr);
	printf("The Copied String is : %s",copyStr);
	return 0;

}
