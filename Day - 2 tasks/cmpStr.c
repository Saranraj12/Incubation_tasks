#include <stdio.h>
void compareString(char* str1,char* str2) {
	int i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
		i++;
	if(str1[i] > str2[i])
		printf("Str1 is greater than Str2");
	else if(str1[i] < str2[i])
		printf("Str1 is less than Str2");
	else
		printf("Both are Equal");
}

int main() {
	char str1[100], str2[100];
	printf("Enter the First String : ");
	gets(str1);
	printf("Enter the Second String : ");
	gets(str2);
	void (*compare)(char*,char*) = compareString;
	compare(str1, str2);
}
