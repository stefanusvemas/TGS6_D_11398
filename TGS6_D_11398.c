#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pil, pesanan, i, j;
	float harga, hargaDiskon;
	bool menu, statusPesanan;
	
	menu=true;
	statusPesanan=false;
	
	while(menu==true){
		system("cls");
		printf("====Alat Tulis====");
		printf("\n1. Masukkan Pesanan");	
		printf("\n2. Print Bukti Pembayaran");
		printf("\n3. Menu Kupon");
		printf("\n4. Tugas");
		printf("\n0. Keluar");
		printf("\n---------------------");
		printf("\nPilih menu : "); scanf("%d", &pil);

		switch(pil){
			case 1:
				pesanan=0;
				while(pesanan<=0){
					printf("Masukkan banyak pesanan alat tulis(Paket)	:"); scanf("%d",&pesanan);
				}
				if(pesanan>0){
					printf("Berhasil memasukkan pesanan");
					statusPesanan=true;
					harga=0;
					harga=12000*pesanan;
				}
				break;
				
			case 2:
				if(statusPesanan==true){
					printf("Bukti pembelian %d paket alat tulis \n",pesanan);
					for(i=0;i<5;i++){
						for(j=0;j<pesanan;j++){
							printf("|*");
						}
						printf("\n");
					}
					printf("Total Harga %.2f", harga);
				}else{
					printf("Harap pesan terlebih dahulu");
				}
				break;
				
			case 3:
				if(statusPesanan==true){
					if(pesanan>=6){
						for (i = 1; i <= 6; i++) {
							for (j = 1; j <= pesanan; j++) {
								if (i == 1 || j == 1 || i == 6 || j == pesanan){
									printf("*");
								} else{
									printf(" ");
								}
							}
                        	printf("\n");
						}	
						hargaDiskon= harga-(harga*0.10);
						printf("Total harga pembelian %d alat tulis menjadi\n",pesanan);
						printf("%.2f",hargaDiskon);
					} else{
						printf("Kupon tidak tersedia");
					}
				} else{
					printf("Harap pesan terlebih dahulu");
				}
				break;
				
			case 4:
				if(statusPesanan==true){
					if (pesanan >= 2 && pesanan % 2 != 0){
						printf("\n");
						for (i = 1; i <= pesanan; i++){
							for (j = 1; j <= i; j++){
								if (j % 2 == 0){
									printf("* ");
								} else{
									printf("%d ", i);
								}
							}
							printf("\n");
						}
						printf("\nSelamat anda mendapatkan penggaris Segitiga Unik");
					} else{
						printf("\nAnda tidak mendapatkan penggaris Segitiga Unik");
					}
				} else{
					printf("Harap pesan terlebih dahulu");
				}
				break;
				
			case 0:
				printf("\n\tStefanus Vemas Aditya Mahardika/D/210711398");
				menu=false;
				break;
				
			default:
				printf("Pilihan menu tidak tersedia");
				break;
		}getch();
	}
	
	return 0;
}
