/* Siti Sulaekah Okviana
	5170411165
	Informatika*/

#include<iostream>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#define enter '\r'
#define tit '\a'
#define max 100


	
	main (){
		int  a[max];
		int i, x, rata, jml;
		jml=0;
		printf("masukkan jumlah biangan : ");
		scanf("%d", &x);
		printf("\n\n");
		for (i=0;i<x; i++){
		printf("masukkan biangan ke-%d : ", i+1);
		scanf("%d", &a[i]);
		jml=jml+a[i];
	
	}
	

	printf("\a");
	printf("%s \n", "Bilangan ke");

	for(i=0; i<x; i++){
		printf("%d %d \n", i+1, a[i]);
	}
	

	printf("%s %d \n", "Jumlah", jml);

	rata=jml/x;
	printf("%s %d \n", "Rata-rata", rata);

}
