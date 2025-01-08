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
gonderen1.gadres="Diyarbak�r"; // uzatmad�m.
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
gonderen2.gadsoyad="Ahmet Ta�";
gonderen2.gadres="Diyarbak�r"; // uzatmad�m.
gonderen2.gtelno=5658234812;

Alan alan2;
alan2.aadsoyad="H�seyin Bacaks�z";
alan2.aadres="Artvin";
alan2.atelno=523421283;

Kurye kurye2;
kurye2.kadsoyad="Necati �a�maz";
kurye2.ktelno=5343212422;


Gonderi gonderi3;
gonderi3.gonderino=32325214;
gonderi3.agirlik=2;
gonderi3.hacim=1;
gonderi3.garanti=false;
gonderi3.ucret=150;

Gonderen gonderen3;
gonderen3.gadsoyad="Ahmet Laleli";
gonderen3.gadres="Diyarbak�r"; 
gonderen3.gtelno=563232122;

Alan alan3;
alan3.aadsoyad="Keriman Kaleli";
alan3.aadres="Konya";
alan3.atelno=23941022421;

Kurye kurye3;
kurye3.kadsoyad="Ay�e Kule";
kurye3.ktelno=533411422;


Gonderi gonderi4;
gonderi4.gonderino=323215214;
gonderi4.agirlik=5;
gonderi4.hacim=1.2;
gonderi4.garanti=true;
gonderi4.ucret=300;

Gonderen gonderen4;
gonderen4.gadsoyad="Leyla Leyla";
gonderen4.gadres="Diyarbak�r"; 
gonderen4.gtelno=523123122;

Alan alan4;
alan4.aadsoyad="Tahsin Neden";
alan4.aadres="�stanbul";
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
gonderen5.gadsoyad="�simsiz";
gonderen5.gadres="Diyarbak�r"; 
gonderen5.gtelno=5652315812;

Alan alan5;
alan5.aadsoyad="Adam Loter";
alan5.aadres="Mu�la";
alan5.atelno=565217283;

Kurye kurye5;
kurye5.kadsoyad="Fatma Tatar";
kurye5.ktelno=523145122;


cout << "\t1.g�nderi i�in bilgiler" << endl;
cout << endl;
cout << "G�nderi No: " << gonderi1.gonderino << endl;
cout << "A��rl�k: " << gonderi1.agirlik << endl;
cout << "Hacim: " << gonderi1.hacim << endl;
cout << "Garanti: " <<gonderi1.garanti << endl;
cout << "�cret: " << gonderi1.ucret << endl;
cout << "G�nderen: " << gonderen1.gadsoyad << endl;
cout << "G�nderenin Adresi: " << gonderen1.gadres << endl;
cout << "G�nderenin Tel No: " << gonderen1.gtelno << endl;
cout << "Alan: " << alan1.aadsoyad << endl;
cout << "Alan�n Adresi: " << alan1.aadres << endl;
cout << "Alan�n Tel No: " << alan1.atelno << endl;
cout << "Kurye: " << kurye1.kadsoyad << endl;
cout << "Kurye Tel No: " << kurye1.ktelno << endl;
cout << endl;


cout << "\t2.g�nderi i�in bilgiler" << endl;
cout << endl;
cout << "G�nderi No: " << gonderi2.gonderino << endl;
cout << "A��rl�k: " << gonderi2.agirlik << endl;
cout << "Hacim: " << gonderi2.hacim << endl;
cout << "Garanti: " <<gonderi2.garanti << endl;
cout << "�cret: " << gonderi2.ucret << endl;
cout << "G�nderen: " << gonderen2.gadsoyad << endl;
cout << "G�nderenin Adresi: " << gonderen2.gadres << endl;
cout << "G�nderenin Tel No: " << gonderen2.gtelno << endl;
cout << "Alan: " << alan2.aadsoyad << endl;
cout << "Alan�n Adresi: " << alan2.aadres << endl;
cout << "Alan�n Tel No: " << alan2.atelno << endl;
cout << "Kurye: " << kurye2.kadsoyad << endl;
cout << "Kurye Tel No: " << kurye2.ktelno << endl;
cout << endl;


cout << "\t3.g�nderi i�in bilgiler" << endl;
cout << endl;
cout << "G�nderi No: " << gonderi3.gonderino << endl;
cout << "A��rl�k: " << gonderi3.agirlik << endl;
cout << "Hacim: " << gonderi3.hacim << endl;
cout << "Garanti: " <<gonderi3.garanti << endl;
cout << "�cret: " << gonderi3.ucret << endl;
cout << "G�nderen: " << gonderen3.gadsoyad << endl;
cout << "G�nderenin Adresi: " << gonderen3.gadres << endl;
cout << "G�nderenin Tel No: " << gonderen3.gtelno << endl;
cout << "Alan: " << alan3.aadsoyad << endl;
cout << "Alan�n Adresi: " << alan3.aadres << endl;
cout << "Alan�n Tel No: " << alan3.atelno << endl;
cout << "Kurye: " << kurye3.kadsoyad << endl;
cout << "Kurye Tel No: " << kurye3.ktelno << endl;
cout << endl;


cout << "\t4.g�nderi i�in bilgiler" << endl;
cout << endl;
cout << "G�nderi No: " << gonderi4.gonderino << endl;
cout << "A��rl�k: " << gonderi4.agirlik << endl;
cout << "Hacim: " << gonderi4.hacim << endl;
cout << "Garanti: " <<gonderi4.garanti << endl;
cout << "�cret: " << gonderi4.ucret << endl;
cout << "G�nderen: " << gonderen4.gadsoyad << endl;
cout << "G�nderenin Adresi: " << gonderen4.gadres << endl;
cout << "G�nderenin Tel No: " << gonderen4.gtelno << endl;
cout << "Alan: " << alan4.aadsoyad << endl;
cout << "Alan�n Adresi: " << alan4.aadres << endl;
cout << "Alan�n Tel No: " << alan4.atelno << endl;
cout << "Kurye: " << kurye4.kadsoyad << endl;
cout << "Kurye Tel No: " << kurye4.ktelno << endl;
cout << endl;


cout << "\t5.g�nderi i�in bilgiler" << endl;
cout << endl;
cout << "G�nderi No: " << gonderi5.gonderino << endl;
cout << "A��rl�k: " << gonderi5.agirlik << endl;
cout << "Hacim: " << gonderi5.hacim << endl;
cout << "Garanti: " <<gonderi5.garanti << endl;
cout << "�cret: " << gonderi5.ucret << endl;
cout << "G�nderen: " << gonderen5.gadsoyad << endl;
cout << "G�nderenin Adresi: " << gonderen5.gadres << endl;
cout << "G�nderenin Tel No: " << gonderen5.gtelno << endl;
cout << "Alan: " << alan5.aadsoyad << endl;
cout << "Alan�n Adresi: " << alan5.aadres << endl;
cout << "Alan�n Tel No: " << alan5.atelno << endl;
cout << "Kurye: " << kurye5.kadsoyad << endl;
cout << "Kurye Tel No: " << kurye5.ktelno << endl;
cout << endl;

    system("pause");
    return 0;
}
