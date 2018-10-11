//membuat program movie
//Siti Sulaekah Okviana 5170411165
//infrmatika C

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define mov 5

using namespace std;

struct movies_t{
	char title [50];
	int year;
} yours [mov];

void printmovie (movies_t movie);

int main ()
{
	char buffer[50];
	int i;
	int kode, data;
	
	
	cout<<"============" <<endl;
	cout<<"MovieProgram" <<endl;
	cout<<"============" <<endl;
	cout<<"pilih kode dibawah ini " <<endl;
	
	cout<<"1. Banyaknya data" <<endl;
	cout<<"2. Tampil data" <<endl;
	cout<<"3. keluar" <<endl;
	
	while(kode>=0){
	cout<<"Masukkan kode: ";
	cin>>kode;
	
	switch(kode){
	
		case 1:
			cout<<"Banyaknya data: ";
			cin>>data;
			for(i=1; i<=data; i++)
			{
				cout<<"Data ke-"<<i<<endl;
				cout<<"================"<<endl;
				
				cout<<"Masukkan Judul Film: ";
				cin.getline (yours[i].title,50);
				cout<<endl;
				cout<<"Masukkan tahun: ";
				cin.getline (buffer,50);
  				yours[i].year = atoi (buffer);
  			
			}
		break;
		
		case 2:{
			cout<<"Tampil Data: " <<endl;
			for (i=1; i<data; i++){
			cout<<i<<" ";
			printmovie(yours[i]); }
			
		break;
		}
	
	case 3:
		exit(3);
		break;
	default:
		cout << "Kode Yang Anda Masukan Salah...!!!"<< endl;
	
		}
	}

   
	   getch ();
}

 void printmovie (movies_t movie)
 {
 	cout<<movie.title;
 	cout<<"("<<movie.year<<")\n";
 }
