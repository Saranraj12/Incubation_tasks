// to find the length of the string

#include <stdio.h>

int stringLength(char* str) {
	if (str[0] == '\0')
		return 0;
	return 1 + stringLength(str+1);
}

int main() {
	char str[100];
	printf("Enter the String : ");
	gets(str);
	int length = stringLength(str);
	printf("Length of your entered string is %d",length);
	return 0;
}