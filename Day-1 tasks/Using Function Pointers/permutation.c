// To print the permutations of a given string using Function pointers

#include <stdio.h>

void swap(char* ch1,char* ch2){
	char temp;
	temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;
}

void permutation(char* str, int start, int end) {
	if(start == end){
		printf("%s\n",str);
	}
	else { 
		for(int j = start;j <= end;j++) {
			swap((str + start),(str + j));
			permutation(str, start + 1, end);
			swap((str + start),(str + j));
		}
	}	
}

int length(char* str){
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

int main() {
	char str[100];
	printf("Enter a string  : ");
	gets(str);
	void (*perm)(char*,int,int) = permutation;
	perm(str, 0, length(str)-1);
	return 0;
}