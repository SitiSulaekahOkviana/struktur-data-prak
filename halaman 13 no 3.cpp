/*/* Siti Sulaekah Okviana
	5170411165
	Informatika*/

#include<iostream>
#include<conio.h>
using namespace std;

main (){
	
	string k;
	cout<<"Masukkan suatu kata: ";
	cin>>k;
	cout<<endl;
	int i=k.length()-1;
	for (i;  i>=0; i--){
		for (int j=0; j<=i;j++){
			cout<<k[j];
		}
		cout<<endl;
		}
	
}
