//menggunakan metode quick sort
//Siti Sulaekah Okviana 5170411165
//infrmatika C

#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;


void qs (int B[], int left, int right);

main(){
	int A[6]={20, 10, 15, 5, 8, 3};
	
	cout<<"Data yang akan diurutkan:";
	
	for(int i=0; i<6; i++){
		cout<<setw(3)<<A[i];
	}
	
	cout<<endl;
	
	qs (A,0,6);
	cout<<"Data yang telah dirutkan: ";
	for(int ii=0; ii<6; ii++){
		cout<<setw(3)<<A[ii];
	}
	
}

void qs (int B[], int size){
qs (B, 0, size-1);
}

void qs (int B[], int left, int right){
	int pivot, l, r;
	l=left;
	r=right;
	pivot=B[left];

	while (left<right){
		while ((B[right]>=pivot)&&(left<right))
		right--;
			if(left!=right){
				B[left]=B[right];
				left++;
			}
			while ((B[left]<=pivot)&&(left<right)){
				left++;
			}
			if (left!=right){
				B[right]=B[left];
				right--;
			}
	}
	
	B[left]=pivot;
	pivot=left;
	left=l;
	right=r;
	if(left<pivot){
		qs (B, left, pivot-1);
	}
	if(right>pivot){
		qs (B, pivot+1, right);
	}
}
