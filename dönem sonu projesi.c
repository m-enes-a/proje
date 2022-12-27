#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	/*
	uçak bileti alýrken sadece 14.00 ve 15.30 saatleri için uçak olacaktýr.
	bu saatlerin dýþýnda uçak kalkýþý yapýlmayacaktýr 
	uçakta 20 tane koltuk olacaktýr
	uçak þu an boþtur ve kimse koltuk alýmý yapmamýþtýr
	uçakta alýnacak satýn alýnacak koltuk kamadýðý zaman koltuk rezerve etme iþlemi duracaktýr 
	*/
	
	int i=0;
	char isim[100];
	float saat=0;
	int koltuksayisi=0;
	int kacincikoltuk=0;
	int bfiyat=0;
	int toplampara=0;
	int kacbilet=0;
	printf("HOSGELDÝNÝZ DÝLERÝZ ALICAGÝNÝZ HÝZMETTEN MEMNUN KALÝRSÝNÝZ");
	
	printf("ucakta kac tane koltuk var? \n");
	scanf("%d",&koltuksayisi);
	if(koltuksayisi<=20)
	{
		printf("hangi saatte ucmak isrersiniz? \n");
		scanf("%f",&saat);
		printf("bir ucak bileti ne kadar?\n");
		scanf("%d",&bfiyat);
		printf("kac tane bilet alacaksiniz? \n");
		scanf("%d",&kacbilet);
	if(saat==14.00)
	{	for(i=0;i<=19;i++)
		{
		printf(" koltuk numarasi giriniz \n");
		scanf("%d",&kacincikoltuk);
	if(kacincikoltuk<=20)
	{		
		printf("isminizi giriniz \n");
		scanf("%s",&isim);
		printf("sayin %s saat %.2f da ve %d nolu koltukta yerinizi ayirttiniz \n",isim,saat,kacincikoltuk);
		koltuksayisi=koltuksayisi-1;
		printf("mevcut bos koltuk sayisi %d dir \n",koltuksayisi);
		toplampara=toplampara+kacbilet*bfiyat;
		printf("biriken toplmam para su kadardir:%d \n",toplampara);
		
	}
		}
	}
	else 
	{
		printf("gecersiz koltuk numarasi girdiniz islem sonlandý\n");
	}
		
	
	if(saat==15.30)
	{	
	for(i=0;i<=19;i++)
		{
		
		printf("koltuk numarasi giriniz \n");
		scanf("%d",&kacincikoltuk);
	if(kacincikoltuk<=20)
	{		
		printf("isminizi giriniz \n");
		scanf("%s",&isim);
		printf("sayin %s saat %.2f da ve %d nolu koltukta yerinizi ayirttiniz \n",isim,saat,kacincikoltuk);
		koltuksayisi=koltuksayisi-1;
		printf("mevcut bos koltuk sayisi %d dir \n",koltuksayisi);
	}
	else 
	{
	
		printf("gecersiz koltuk numarasi girdiniz islem sonlandý\n");
	}
		}
	}	
	else
	{
		printf("gecersiz saat girdiniz\n");
	}
	}
	else
	{
		printf("gereginden fazla koltuk sayisi tusladiniz \n");
	}
	
	return 0;
}
