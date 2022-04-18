// Program to print all uppercase alphabets from 'A' to 'Z' using a while loop.


#include <stdio.h>

int main() {
	int start = 65,end = 90;
	while(start <= end){
		printf("%c ",start);
		start++;
	}
}