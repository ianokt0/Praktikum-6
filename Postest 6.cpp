#include <iostream>
//Nama :Ian Oktafian Purnomosidi
//Nim :2000018199
//Kelas :D
using namespace std;

int volumebalok(int p,int l,int t){
	int hasil=p*l*t;
	cout<<"Volume Balok :"<<hasil;
}
int luaspermukaanbalok(int p,int l,int t){
	int hasil=2*(p * l + p * t + l * t);
	cout<<"Luas Permukaan Balok :"<<hasil;
}
int kelilingbalok(int p,int l,int t){
	int hasil= 4 * (p + l + t);
	cout<<"Keliling Balok :"<<hasil;
}
void volumebola(float phi,float r){
	float hasil=(phi * r * r * r)*4/3;
	cout<<"Volume Bola :"<<hasil;	
}
void luaspermukaanbola(float phi,float r){
	float hasil=4 *(phi * r * r);
	cout<<"Luas Permukaan Bola :"<<hasil;
	
}
int main(){
	int pilih;
	cout<<"================================="<<endl;
	cout<<"||		Fungsi		||"<<endl;
	cout<<"================================="<<endl;	
	cout<<"1. Balok"<<endl;
	cout<<"2. Bola"<<endl;
	cout<<"Masukkan Pilihan :";
	cin>>pilih;
	cout<<endl;
	
	if(pilih==1){
		int p,l,t;
		cout<<"Masukkan Panjang Balok :";
		cin>>p;
		cout<<"Masukkan Lebar Balok :";
		cin>>l;
		cout<<"Masukkan Tinggi Balok :";
		cin>>t;
		cout<<endl;
		volumebalok(p,l,t);
		cout<<endl;
		luaspermukaanbalok(p,l,t);
		cout<<endl;
		kelilingbalok(p,l,t);
		cout<<endl;
	}
	else if(pilih==2){
		int r;
		cout<<"Masukkan Jari-jari Bola :";
		cin>>r;
		cout<<endl;
		volumebola(3.14,r);
		cout<<endl;
		luaspermukaanbola(3.14,r);		
	}
	else{		
		cout<<"Error 404 Not Found"<<endl;
	}	
	return 0;
}
