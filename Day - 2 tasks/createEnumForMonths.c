// Create an enum data-type for the months in a year.

#include <stdio.h>

enum {
	January = 1,February,March,April,May,June,July,August,September,October,November,December
};

void main() {
	printf("********Enum Data-Type For Months********\n");
	printf("January   - %d\n",January);
	printf("February  - %d\n",February);
	printf("March     - %d\n",March);
	printf("April     - %d\n",April);
	printf("May       - %d\n",May);
	printf("June      - %d\n",June);
	printf("July      - %d\n",July);
	printf("August    - %d\n",August);
	printf("September - %d\n",September);
	printf("October   - %d\n",October);
	printf("November  - %d\n",November);
	printf("December  - %d\n",December);
}