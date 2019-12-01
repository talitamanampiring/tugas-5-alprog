#include <iostream>
#include <cmath>
using namespace std;
int volume_kubus(int sisi){
	return sisi*sisi*sisi;
}
int volume_balok(int panjang, int lebar, int tinggi){
	return panjang*lebar*tinggi;
}
int volume_kerucut (int jari_jari, int tinggi){
	return 0.33*3.14*pow(jari_jari,2)*tinggi;
}

int main(){
	int sisi,volume;
	cout<<"== Hitung Volume Kubus =="<<endl;
	cout<<"Masukan Panjang Sisi : ";
	cin>>sisi;
	volume=volume_kubus(sisi);
	cout<<"Volume Kubus = "<<volume<<endl;
	
	int panjang,lebar,tinggi;
	cout<<"== Hitung volume balok =="<<endl;
	cout<<"masukan panjang balok :";
	cin>>panjang;
	cout<<"masukan lebar balok : ";
	cin>>lebar;
	cout<<"masukan tinggi balok :";
	cin>>tinggi;
	volume=volume_balok(panjang, lebar, tinggi);
	cout<<"volume balok = "<<volume<<endl;
	
	int jari_jari;
	cout<<"== Hitung Volume Kerucut =="<<endl;
	cout<<"masukan panjang jari-jari : ";
	cin>>jari_jari;
	cout<<"masukan tinggi kerucut : ";
	cin>>tinggi;
	volume=volume_kerucut (jari_jari, tinggi);
	cout<<"volume kerucut = "<<volume<<endl;
}

