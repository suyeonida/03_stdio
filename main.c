#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("enter a character :");
	scanf("%c", &x);
	
	printf("the next characcter of %c (%d) is %c (%d)", x, x, x+1, x+1);
	
	return 0;
}
