// To find the length of a string using function pointers

#include <stdio.h>

int lengthOfString(char* str) {
	if (str[0] == '\0')
		return 0;
	return 1 + lengthOfString(str + 1);
}

int main() {
	char str[100];
	printf("Enter the String : ");
	gets(str);
	int (*length)(char*) = lengthOfString;
	printf("Length Of The String is %d",length(str));
}