//  Copy concat and compare using call back

#include <stdio.h>

int lengthOfString(char* str) {
	if (str[0] == '\0')
		return 0;
	return 1 + lengthOfString(str + 1);
}

void copyString(char* copy, char* original) {
	int i;
	for (i = 0; i < lengthOfString(original);i++) 
		copy[i] = original[i];
	copy[i] = '\0';
}

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

void main()  {
	int choice;
	char str[20],str1[20];
	void (*fun[3])(char*,char*) = {copyString,concatString,compareString};
	while(1) {
		printf("\n1 - Copy\n2 - Concatenation\n3 - Comparing Two Strings\n");
		printf("\nEnter the choice you want : \n");
		scanf("%d",&choice);
		switch(choice) {
			case 1: printf("\nEnter the first String : ");
					scanf("%s",str);
					fun[0](str1,str);
					printf("\n Copied String is %s\n",str1);
					break;
			case 2: printf("\nEnter the first String : ");
					scanf("%s",str);
					printf("\nEnter the second String : ");
					scanf("%s",str1);
					fun[1](str,str1);
					printf("\n Concatenated String : %s",str);
					break;
			case 3: printf("\nEnter the first String : ");
					scanf("%s",str);
					printf("\nEnter the second String : ");
					scanf("%s",str1);
					fun[2](str,str1);
					break;
			default: printf("\nEnter the number between 1-2");
		}
	}
}