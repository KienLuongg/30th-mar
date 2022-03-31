#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	incre();
    incre();
    incre();
	return 0;
}
incre(){
	char var = 65;
    printf("\nThe character stored in var is %c", var++);
}
