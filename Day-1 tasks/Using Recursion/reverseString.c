// To reverse  a  String

#include <stdio.h>

void reverseString(char str[100]){
	if (str[0] == '\0')
		return;
	reverseString(str+1);
	printf("%c",str[0]);
}

int main() {
	char str[100];
	printf("Enter the String : ");
	gets(str);
	printf(" Reversed String : ");
	reverseString(str);
	return 0;
}