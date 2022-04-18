/*
Create a structure named Date having day, month and year as its elements.
Store the current date in the structure. Now add 45 days to the current date
and display the final date.
*/

#include <stdio.h>
#include <time.h>
#include<stdbool.h>

struct Date {
	int day;
	int month;
	int year;
}date,new_date;

int charSlice(int start,int end,char arr[])
{
	char month[13][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	
	if(start == 4 && end == 6){
		for(int j = 0;j < 12;j++){
			bool flag = true;
			for(int i = 0;i <= 2;i++){
				if (month[j][i] != arr[i+start]){
					flag = false;
					break;
				}
			}
			if (flag) return j+1;
		}
			
	}
	else if(start == 8 && end == 9){
		return ((arr[start] - '0') * 10) + (arr[end] - '0');
	}
	else{
		return ((arr[start] - '0') * 1000) + 	((arr[start + 1] - '0') * 100) + ((arr[start + 2] - '0') * 10) + (arr[end] - '0');
	}
}

void add45Days(char str[])
{
	int add = 45;
	date.day = charSlice(8,9,str);
	date.month =  charSlice(4,6,str);
	date.year = charSlice(20,23,str);
	printf("%02d/%02d/%d\n",date.day,date.month,date.year);
	
	new_date.day = 30 - date.day;
	add -= new_date.day;
	new_date.year = date.year;
	if(date.month != 12){
		new_date.month = date.month + 1;
	}
	else {
		new_date.month = 1;
		new_date.year++;
	}
	
	while(add >= 30){
		new_date.day = add - 30;
		add -= 30;
		if (new_date.month!= 12 && add!=0)
			new_date.month++;
		else if(add!=0){
			new_date.month = 1;
			new_date.year++;
		}	 
	}
	new_date.day = add!=0?add:30;
	
	printf("%02d/%02d/%d\n",new_date.day,new_date.month,new_date.year);
}
int main()
{
    time_t currDate;
    time(&currDate);
    add45Days(ctime(&currDate));
	char arr[] ="Sat Dec 15 12:09:06 2022";
	add45Days(arr);
//    printf("%s\n", ctime(&currDate));
    return 0;
}