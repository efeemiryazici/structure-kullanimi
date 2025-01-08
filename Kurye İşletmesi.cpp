#include <iostream>
#include <locale.h>

using namespace std;

struct Gonderi
{
	int gonderino;
	int agirlik;  // kg cinsinden
	float hacim;  // m3 cinsinden
	bool garanti; // e/h 1 se var 0 sa yok.
	int ucret;    // tl cinsinden
};

struct Gonderen
{
	string gadsoyad;
	string gadres;
	int gtelno;
};

struct Alan
{
	string aadsoyad;
	string aadres;
	int atelno;
};

struct Kurye
{
	string kadsoyad;
	int ktelno;
};

int main()
{
	
	setlocale(LC_ALL,"Turkish");

Gonderi gonderi1;
gonderi1.gonderino=3215214;
gonderi1.agirlik=3;
gonderi1.hacim=0.8;
gonderi1.garanti=true;
gonderi1.ucret=120;

Gonderen gonderen1;
gonderen1.gadsoyad="Hasan Armut";
gonderen1.gadres="Diyarbakýr"; // uzatmadým.
gonderen1.gtelno=5658415812;

Alan alan1;
alan1.aadsoyad="Emre Demir";
alan1.aadres="Ankara";
alan1.atelno=5654817283;

Kurye kurye1;
kurye1.kadsoyad="Tahsin Durmaz";
kurye1.ktelno=5321312422;


Gonderi gonderi2;
gonderi2.gonderino=3213214;
gonderi2.agirlik=6;
gonderi2.hacim=0.4;
gonderi2.garanti=true;
gonderi2.ucret=80;

Gonderen gonderen2;
gonderen2.gadsoyad="Ahmet Taþ";
gonderen2.gadres="Diyarbakýr"; // uzatmadým.
gonderen2.gtelno=5658234812;

Alan alan2;
alan2.aadsoyad="Hüseyin Bacaksýz";
alan2.aadres="Artvin";
alan2.atelno=523421283;

Kurye kurye2;
kurye2.kadsoyad="Necati Þaþmaz";
kurye2.ktelno=5343212422;


Gonderi gonderi3;
gonderi3.gonderino=32325214;
gonderi3.agirlik=2;
gonderi3.hacim=1;
gonderi3.garanti=false;
gonderi3.ucret=150;

Gonderen gonderen3;
gonderen3.gadsoyad="Ahmet Laleli";
gonderen3.gadres="Diyarbakýr"; 
gonderen3.gtelno=563232122;

Alan alan3;
alan3.aadsoyad="Keriman Kaleli";
alan3.aadres="Konya";
alan3.atelno=23941022421;

Kurye kurye3;
kurye3.kadsoyad="Ayþe Kule";
kurye3.ktelno=533411422;


Gonderi gonderi4;
gonderi4.gonderino=323215214;
gonderi4.agirlik=5;
gonderi4.hacim=1.2;
gonderi4.garanti=true;
gonderi4.ucret=300;

Gonderen gonderen4;
gonderen4.gadsoyad="Leyla Leyla";
gonderen4.gadres="Diyarbakýr"; 
gonderen4.gtelno=523123122;

Alan alan4;
alan4.aadsoyad="Tahsin Neden";
alan4.aadres="Ýstanbul";
alan4.atelno=565327283;

Kurye kurye4;
kurye4.kadsoyad="Burak Kjun";
kurye4.ktelno=53212422;


Gonderi gonderi5;
gonderi5.gonderino=321521214;
gonderi5.agirlik=1;
gonderi5.hacim=1;
gonderi5.garanti=true;
gonderi5.ucret=250;

Gonderen gonderen5;
gonderen5.gadsoyad="Ýsimsiz";
gonderen5.gadres="Diyarbakýr"; 
gonderen5.gtelno=5652315812;

Alan alan5;
alan5.aadsoyad="Adam Loter";
alan5.aadres="Muðla";
alan5.atelno=565217283;

Kurye kurye5;
kurye5.kadsoyad="Fatma Tatar";
kurye5.ktelno=523145122;


cout << "\t1.gönderi için bilgiler" << endl;
cout << endl;
cout << "Gönderi No: " << gonderi1.gonderino << endl;
cout << "Aðýrlýk: " << gonderi1.agirlik << endl;
cout << "Hacim: " << gonderi1.hacim << endl;
cout << "Garanti: " <<gonderi1.garanti << endl;
cout << "Ücret: " << gonderi1.ucret << endl;
cout << "Gönderen: " << gonderen1.gadsoyad << endl;
cout << "Gönderenin Adresi: " << gonderen1.gadres << endl;
cout << "Gönderenin Tel No: " << gonderen1.gtelno << endl;
cout << "Alan: " << alan1.aadsoyad << endl;
cout << "Alanýn Adresi: " << alan1.aadres << endl;
cout << "Alanýn Tel No: " << alan1.atelno << endl;
cout << "Kurye: " << kurye1.kadsoyad << endl;
cout << "Kurye Tel No: " << kurye1.ktelno << endl;
cout << endl;


cout << "\t2.gönderi için bilgiler" << endl;
cout << endl;
cout << "Gönderi No: " << gonderi2.gonderino << endl;
cout << "Aðýrlýk: " << gonderi2.agirlik << endl;
cout << "Hacim: " << gonderi2.hacim << endl;
cout << "Garanti: " <<gonderi2.garanti << endl;
cout << "Ücret: " << gonderi2.ucret << endl;
cout << "Gönderen: " << gonderen2.gadsoyad << endl;
cout << "Gönderenin Adresi: " << gonderen2.gadres << endl;
cout << "Gönderenin Tel No: " << gonderen2.gtelno << endl;
cout << "Alan: " << alan2.aadsoyad << endl;
cout << "Alanýn Adresi: " << alan2.aadres << endl;
cout << "Alanýn Tel No: " << alan2.atelno << endl;
cout << "Kurye: " << kurye2.kadsoyad << endl;
cout << "Kurye Tel No: " << kurye2.ktelno << endl;
cout << endl;


cout << "\t3.gönderi için bilgiler" << endl;
cout << endl;
cout << "Gönderi No: " << gonderi3.gonderino << endl;
cout << "Aðýrlýk: " << gonderi3.agirlik << endl;
cout << "Hacim: " << gonderi3.hacim << endl;
cout << "Garanti: " <<gonderi3.garanti << endl;
cout << "Ücret: " << gonderi3.ucret << endl;
cout << "Gönderen: " << gonderen3.gadsoyad << endl;
cout << "Gönderenin Adresi: " << gonderen3.gadres << endl;
cout << "Gönderenin Tel No: " << gonderen3.gtelno << endl;
cout << "Alan: " << alan3.aadsoyad << endl;
cout << "Alanýn Adresi: " << alan3.aadres << endl;
cout << "Alanýn Tel No: " << alan3.atelno << endl;
cout << "Kurye: " << kurye3.kadsoyad << endl;
cout << "Kurye Tel No: " << kurye3.ktelno << endl;
cout << endl;


cout << "\t4.gönderi için bilgiler" << endl;
cout << endl;
cout << "Gönderi No: " << gonderi4.gonderino << endl;
cout << "Aðýrlýk: " << gonderi4.agirlik << endl;
cout << "Hacim: " << gonderi4.hacim << endl;
cout << "Garanti: " <<gonderi4.garanti << endl;
cout << "Ücret: " << gonderi4.ucret << endl;
cout << "Gönderen: " << gonderen4.gadsoyad << endl;
cout << "Gönderenin Adresi: " << gonderen4.gadres << endl;
cout << "Gönderenin Tel No: " << gonderen4.gtelno << endl;
cout << "Alan: " << alan4.aadsoyad << endl;
cout << "Alanýn Adresi: " << alan4.aadres << endl;
cout << "Alanýn Tel No: " << alan4.atelno << endl;
cout << "Kurye: " << kurye4.kadsoyad << endl;
cout << "Kurye Tel No: " << kurye4.ktelno << endl;
cout << endl;


cout << "\t5.gönderi için bilgiler" << endl;
cout << endl;
cout << "Gönderi No: " << gonderi5.gonderino << endl;
cout << "Aðýrlýk: " << gonderi5.agirlik << endl;
cout << "Hacim: " << gonderi5.hacim << endl;
cout << "Garanti: " <<gonderi5.garanti << endl;
cout << "Ücret: " << gonderi5.ucret << endl;
cout << "Gönderen: " << gonderen5.gadsoyad << endl;
cout << "Gönderenin Adresi: " << gonderen5.gadres << endl;
cout << "Gönderenin Tel No: " << gonderen5.gtelno << endl;
cout << "Alan: " << alan5.aadsoyad << endl;
cout << "Alanýn Adresi: " << alan5.aadres << endl;
cout << "Alanýn Tel No: " << alan5.atelno << endl;
cout << "Kurye: " << kurye5.kadsoyad << endl;
cout << "Kurye Tel No: " << kurye5.ktelno << endl;
cout << endl;

    system("pause");
    return 0;
}
