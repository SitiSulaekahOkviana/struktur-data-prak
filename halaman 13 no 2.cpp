/*/* Siti Sulaekah Okviana
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
		int i,  sd, varian, x, j, jml1, jml2, rata;
		jml1=0;
		jml2=0;
		printf("masukkan jumlah biangan : ");
		scanf("%d", &x);
		printf("\n\n");
		for (i=0;i<x; i++){
		printf("masukkan biangan ke-%d : ", i+1);
		scanf("%d", &a[i]);
		jml1=jml1+a[i];
		jml2=jml2+(a[i]*a[i]);
	}
	

	printf("\a");
	printf("%s \n", "Bilangan ke", "x");
	for(i=0; i<x; i++){
		printf("%d %d \n", i+1, a[i]);
	}
	

	printf("%s %d \n", "Jumlah", jml1);
	rata=jml1/x;
	varian=(jml2-jml1*jml1/x)/x-1;
	sd=sqrt(varian);
	printf("%s %d \n", "Rata-rata", rata);

	printf("%s %d \n", "deviasi", sd);

	getch();
}
