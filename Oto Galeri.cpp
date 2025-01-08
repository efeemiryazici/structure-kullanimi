#include <iostream>
#include <locale.h>

using namespace std;

struct Otomobil
{
	string marka;
	string model;
	int yil;
	char yakit; // B=Benzin D=Dizel G=Gaz H=Hibrit
	int km;
	int fiyat;
};

int main()
{
	
	setlocale(LC_ALL,"Turkish");

Otomobil binek;

binek.marka="Fiat";
binek.model="Egea";
binek.yil=2018;
binek.yakit='D';
binek.km=180000;
binek.fiyat=700000;

Otomobil suv;

suv.marka="Nissan";
suv.model="Qashqai";
suv.yil=2024;
suv.yakit='H';
suv.km=0;
suv.fiyat=2200000;

Otomobil ticari;

ticari.marka="Ford";
ticari.model="Transit";
ticari.yil=2015;
ticari.yakit='D';
ticari.km=250000;
ticari.fiyat=500000;

cout << "\tBinek Otomobilin Bilgileri" << endl;
cout << endl;
cout << "Marka: " << binek.marka << endl;
cout << "Model: " << binek.model << endl;
cout << "Yýl: " << binek.yil << endl;
cout << "Yakýt: " << binek.yakit << " (Dizel)" << endl;
cout << "Km: " << binek.km << endl;
cout << "Fiyat: " << binek.fiyat << endl;
cout << endl;

cout << "\tSuv Otomobilin Bilgileri" << endl;
cout << endl;
cout << "Marka: " << suv.marka << endl;
cout << "Model: " << suv.model << endl;
cout << "Yýl: " << suv.yil << endl;
cout << "Yakýt: " << suv.yakit << " (Hibrit)" << endl;
cout << "Km: " << suv.km << endl;
cout << "Fiyat: " << suv.fiyat << endl;
cout << endl;

cout << "\tTicari Otomobilin Bilgileri" << endl;
cout << endl;
cout << "Marka: " << ticari.marka << endl;
cout << "Model: " << ticari.model << endl;
cout << "Yýl: " << ticari.yil << endl;
cout << "Yakýt: " << ticari.yakit << " (Dizel)" << endl;
cout << "Km: " << ticari.km << endl;
cout << "Fiyat: " << ticari.fiyat << endl;
cout << endl;

    system("pause");
    return 0;
}
