//Write a program to check whether the entered string is palindrome or not

#include <stdio.h>
#include<string.h>

int isPalindrome(int n, char str[])
{
	for(int i = 0;i <= n/2;i++){
		if (str[i] != str[n - 1 - i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	char str[100];
	printf("\nEnter the String : ");
	scanf("%s",str);
	int len = strlen(str);
	if(isPalindrome(len, str))
		printf("\nPalindrome");
	else
		printf("\nNot a Palindrome");
}