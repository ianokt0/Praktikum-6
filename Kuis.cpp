#include <iostream>
using namespace std;

float luas(float phi,float r){
	
	float hasil=phi*r*r;
	cout<<"Luas ="<<hasil;
}
float keliling(float phi,float r){
	
	float hasil=2*phi*r;
	cout<<"Keliling ="<<hasil;
}

int main(){
	int r;
	cout<<"Masukkan Jari-jari :";
	cin>>r;
	
	luas(3.14 , r);
	cout<<endl;
	keliling(3.14 , r);
	
	return 0;
	}

