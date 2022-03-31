#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float reverse(int size, float F[5]);
int main(int argc, char *argv[]) {
	int i;
	float F[5];
	int size=5;
	printf("\nEnter numbers:\n");
	for(i=0; i<size; i++){   
		scanf("%f", &F[i]);
	}
	    reverse(size,F); // goi ham reverse de in gia tri 
	return 0;
}
float reverse(int size, float F[]){
	int x;
	printf("The result after reverse is:");
	for(x=4; x>=0; x--){ // dieu kien de dao nguoc vi tri cac so thuc da nhap
		printf("\n%f", F[x]); // gia tri F[x] la dao nguoc cua F[i]
	}
	return (x); 
}
