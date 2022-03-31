// Add two distances feet-inch

#include <stdio.h>

typedef struct feet {
	int inch;
	int feet;
}Feet;

void addInchFeet(Feet value1,Feet value2) {
	Feet total;
	total.feet = value1.feet + value2.feet;
	total.inch = value1.inch + value2.inch;
	while(total.inch >= 12) {
		total.inch -= 12;
		total.feet++;
	}
	printf("The total distance is %d ft %d in",total.feet,total.inch);
}

int main() {
	Feet data1,data2;
	printf("Enter the feet1 value :");
	scanf("%d",&data1.feet);
	printf("Enter the inch1 value :");
	scanf("%d",&data1.inch);
	printf("Enter the feet2 value :");
	scanf("%d",&data2.feet);
	printf("Enter the inch2 value :");
	scanf("%d",&data2.inch);
	addInchFeet(data1,data2);
}
