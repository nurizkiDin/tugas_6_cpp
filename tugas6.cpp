#include <iostream>

using namespace std;

int main(){
	float x, z, hasil;
	cout<<"Inputkan Nilai x : ";
	cin>>x;
	cout<<"Inputkan Nilai z : ";
	cin>>z;
	if(x>=z){
		hasil = x+z;
	}else{
		hasil = x-z;
	}
	cout<<"Hasil : "<<hasil;
}
