// Time Differences Using structure & Pointers

#include <stdio.h>

typedef struct Time{
	int hour;
	int minute;
	int seconds;
}Time;

//Time *t1,*t2,*t;

int isdig(char ch) {
	return (48 <= ch <= 57);
}

int charSlice(int start,int end,char digits[]){
	for (int i = start;i < end;i++) {
		if (!isdig(digits[i]))
			return -1;
	}
	return (digits[start] - '0') * 10 + (digits[end-1] - '0');
}

int length(char arr[]) {
	int c = 0;
	while(arr[c]!='\0') {
		c++;
	}
	return c;
}

int validateTime(char arr[]) {
	if (length(arr) != 8 || arr[2] != ':' || arr[5] != ':')
		return 0;
	int h = charSlice(0,2,arr);
	int m = charSlice(3,5,arr);
	int s = charSlice(6,8,arr);
	
	if (h == -1 || m == -1 || s == -1 || 0 > h || h > 23  || 0 > m || m > 59 || 0 > s || s > 59)
		return 0;
	return 1;
	
}

void getTime(char *time) {

	while(1){
		printf("\nEnter the time in this format '00:00:00': ");
		gets(time);
	
		if(!validateTime(time)) {
			printf("\nPlease Enter valid time format :(\n");
			continue;
		}
		break;
	}
}

void assign(char *time, Time *t) {
	int hh = charSlice(0,2,time);
	int mm = charSlice(3,5,time);
	int ss = charSlice(6,8,time);

	t->hour = hh;
	t->minute = mm;
	t->seconds = ss;
}

void timeDifference(Time t1, Time t2,Time t) {
	if (t2.seconds < t1.seconds) {
		t.seconds = 60 + t2.seconds - t1.seconds;
		t2.minute =  (t2.minute == 0) ? 59 : t2.minute - 1;
	}
	else {
		t.seconds = t2.seconds - t1.seconds;
	}
	
	if (t2.minute < t1.minute) {
		t.minute = 60 + t2.minute - t1.minute;
		t2.hour =  (t2.hour == 0) ? 23 : t2.hour - 1;
	}
	else {
		t.minute = t2.minute - t1.minute;
	}
	
	if (t2.hour < t1.hour ) {
		t.hour = 24 + t2.hour - t1.hour;
	}
	else {
		t.hour = t2.hour - t1.hour;
	}
	printf("%d:%d:%d",t.hour,t.minute,t.seconds);
}

int main() {
	Time t1,t2,t;
	printf("Enter the start time");
	printf("\nEnter the hour :");
	scanf("%d",&(t1.hour));
	printf("\nEnter the minute :");
	scanf("%d",&(t1.minute));
	printf("\nEnter the seconds :");
	scanf("%d",&(t1.seconds));
	printf("\nEnter the End time");
	printf("\nEnter the hour :");
	scanf("%d",&(t2.hour));
	printf("\nEnter the minute :");
	scanf("%d",&(t2.minute));
	printf("\nEnter the seconds :");
	scanf("%d",&(t2.seconds));
	timeDifference(t1,t2,t);
}
