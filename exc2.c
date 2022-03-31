#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	    int n, i ;

    printf("Nhap so phan tu cua day N = ");     //nhap so lan check
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++) {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);      //nhap so de check
    }
    printf("phan tu chia het cho 50 la\n");
   for(i=0; i<n; i++) {
        if(check(a[i])==0){
            printf("%d ",a[i]);
        }
    }

}
int check(int b){
    if(b%50==0){
        return 0;   //tra ve ket qua khi dung
    } else
    return 1;    //sai khogn tra ve ket qua
}

