#include <stdio.h>

int hrs;         
int mins;         
int total_mins;     

const int MINaHOUR = 60;      

char line_text[50];      

int main() {
  printf("RA2211042010037\n");
	printf("Input hours: 5");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d", &hrs);

	printf("Input minutes: 37");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d", &mins);

	total_mins = mins + (hrs * MINaHOUR);

	printf("Total: %d minutes.\n", total_mins);

	return(0);
}
