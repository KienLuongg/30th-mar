#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int arr[10];
	int size=10;
	for(i=0; i<size;i++){
		printf("Enter number: ");
		scanf("%d", &arr[i]);
	}
	int min	= indexMin(size, arr);  //khoi tao bien min de tim ra phan tu nho nhat
	
	printf("IndexMin is %d", min);
	return 0;
}
int indexMin(int size, int arr[]){
    int min=arr[0];   // gia su 1 phan tu la nho nhat
    int j;
    for(j=0; j<size; j++){
    	if(min>arr[j]){
    		min=arr[j];  //so sanh voi cac phan tu trong mang
		}
	}
    for(j=0; j<size; j++){  
    	if(min==arr[j]){
    		return (j);   //tra ve index cua phan tu nho nhat
		}
	}
	return -1;  //neu khong xuat hien phan tu nho nhat tra ve 1
}

