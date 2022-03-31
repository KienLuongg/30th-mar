#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float dientich(float chieudai, float chieurong){
	return (chieudai * chieurong);
}
float chuvi(float chieudai, float chieurong){
	return ((chieudai + chieurong) * 2 );
}
int main(int argc, char *argv[]) {
	float chieudai, chieurong;
	int lc, ketqua;
	char c;
	do{
		printf("\nNhap chieu dai va chieu rong cho HCN: ");
		scanf("%f %f", &chieudai, &chieurong);
		printf("An 1 de tinh dien tich \nAn 2 de tinh chu vi");
		printf("\nChon: ");
		scanf("%d", &lc);
		switch(lc){
			case 1:
				ketqua = dientich(chieudai,chieurong);
				printf("Dien tich cua hinh chu nhat la %d", ketqua);
				break;
			case 2:
			    ketqua = chuvi(chieudai,chieurong);
				printf("Chu vi cua hinh chu nhat la %d", ketqua);
				break;	
		}
		fflush(stdin);
		printf("\nBan co muon thuc hien lai ? Y/N ");
		scanf("%c", &c);
	}while(c=='Y' || c=='y');
	printf("Cam on da su dung!");
	return 0;
}

