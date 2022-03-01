#include<iostream>
using namespace std;
int n[5];
int j,t,r;

int main (){
	for(int i=1 ; i<=5 ; i++){
		cout<< "masukan nilai array ke15" << i << ":";
		cin >> n[1];
		t= t + n[1];
	}
	j = sizeof (n)/sizeof(n[0]);
	r = r / j;
	cout <<"jumlah elemen array:"<<j<< endl;
	cout <<"total array:"<< t<< endl;
	cout <<"rata rata array:" << r << endl;
	
	}
