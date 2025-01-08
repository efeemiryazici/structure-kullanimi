#include <iostream>
#include <locale.h>

using namespace std;

struct Kumas
{
   string ipliktipi;
   int dm2agirlik;
   string dokumatipi;
   string renk;
   int miktar;
};

struct Iskelet
{
   string malzeme;
   string birlestirme;
   string tarz;
   string boyut;
   string miktar;		
};

struct Mobilya
{
   string kaplama;  //Kumas kaplama seklinde yaptýðýmda hata veriyordu,sebebini anlayamadým.
   string malzeme;
   int fiyat;
   int adet;
};

int main()
{
	
	setlocale(LC_ALL,"Turkish");

Kumas kumas1;
kumas1.ipliktipi="Pamuk Ýpliði";
kumas1.dm2agirlik=250;
kumas1.dokumatipi="Saten Dokuma";
kumas1.renk="Beyaz";
kumas1.miktar=30;

Kumas kumas2;
kumas2.ipliktipi="Polyester Ýpliði";
kumas2.dm2agirlik=200;
kumas2.dokumatipi="Jakarlý Dokuma";
kumas2.renk="Kýrmýzý";
kumas2.miktar=40;

Kumas kumas3;
kumas3.ipliktipi="Akrilik Ýpliði";
kumas3.dm2agirlik=300;
kumas3.dokumatipi="Þönil Dokuma";
kumas3.renk="Mor";
kumas3.miktar=50;

Kumas kumas4;
kumas4.ipliktipi="Yün Ýpliði";
kumas4.dm2agirlik=300;
kumas4.dokumatipi="Keçeleþmiþ Dokuma";
kumas4.renk="Kahverengi";
kumas4.miktar=10;

Kumas kumas5;
kumas5.ipliktipi="Keten Ýpliði";
kumas5.dm2agirlik=180;
kumas5.dokumatipi="Düz Dokuma";
kumas5.renk="Bej";
kumas5.miktar=20;

Kumas kumas6;
kumas6.ipliktipi="Viskon Ýpliði";
kumas6.dm2agirlik=120;
kumas6.dokumatipi="Jakarlý Dokuma";
kumas6.renk="Turkuaz";
kumas6.miktar=40;

Kumas kumas7;
kumas7.ipliktipi="Naylon Ýpliði";
kumas7.dm2agirlik=100;
kumas7.dokumatipi="File Dokuma";
kumas7.renk="Turuncu";
kumas7.miktar=100;

Kumas kumas8;
kumas8.ipliktipi="Deri Görünümlü Ýplik";
kumas8.dm2agirlik=400;
kumas8.dokumatipi="Kaplama Malzemesi";
kumas8.renk="Siyah";
kumas8.miktar=600;

Kumas kumas9;
kumas9.ipliktipi="Mikrofiber Ýplik";
kumas9.dm2agirlik=80;
kumas9.dokumatipi="Sýk Dokuma";
kumas9.renk="Lacivert";
kumas9.miktar=50;

Kumas kumas10;
kumas10.ipliktipi="Þönil Ýplik";
kumas10.dm2agirlik=350;
kumas10.dokumatipi="Þönil Dokuma";
kumas10.renk="Mürdüm";
kumas10.miktar=30;

//-----------------------------------------

Iskelet iskelet1;
iskelet1.malzeme="Masif Ahþap";
iskelet1.birlestirme="Ahþap Dübel";
iskelet1.tarz="Klasik";
iskelet1.boyut="50*50";
iskelet1.miktar="10 kg/m³";

Iskelet iskelet2;
iskelet2.malzeme="MDF";
iskelet2.birlestirme="Vidalama";
iskelet2.tarz="Modern";
iskelet2.boyut="120x240";
iskelet2.miktar="700 kg/m³";

Iskelet iskelet3;
iskelet3.malzeme="Kontrplak";
iskelet3.birlestirme="Zýmbalama";
iskelet3.tarz="Minimalist";
iskelet3.boyut="90x180";
iskelet3.miktar="500 kg/m³";

Iskelet iskelet4;
iskelet4.malzeme="Sunta";
iskelet4.birlestirme="Tutkallama";
iskelet4.tarz="Endüstriyel";
iskelet4.boyut="120x240";
iskelet4.miktar="550 kg/m³";

Iskelet iskelet5;
iskelet5.malzeme="Çelik";
iskelet5.birlestirme="Kaynak";
iskelet5.tarz="Endüstriyel";
iskelet5.boyut="Çubuk:2x2";
iskelet5.miktar="8 kg/m";

Iskelet iskelet6;
iskelet6.malzeme="Alüminyum";
iskelet6.birlestirme="Perçinleme";
iskelet6.tarz="Minimalist";
iskelet6.boyut="Çubuk: 2x2";
iskelet6.miktar="4 kg/m";

Iskelet iskelet7;
iskelet7.malzeme="Plastik";
iskelet7.birlestirme="Enjeksiyonla montaj";
iskelet7.tarz="Postmodern";
iskelet7.boyut="100x50x5";
iskelet7.miktar="3 kg/m³";

Iskelet iskelet8;
iskelet8.malzeme="Masif meþe";
iskelet8.birlestirme="Ahþap lamello";
iskelet8.tarz="Rustik";
iskelet8.boyut="50x50";
iskelet8.miktar="700 kg/m³";

Iskelet iskelet9;
iskelet9.malzeme="Paslanmaz çelik";
iskelet9.birlestirme="Kaynak";
iskelet9.tarz="Modern";
iskelet9.boyut="Çubuk: 2x2";
iskelet9.miktar="7 kg/m";

Iskelet iskelet10;
iskelet10.malzeme="Kompozit malzeme";
iskelet10.birlestirme="Vidalar";
iskelet10.tarz="Esnek tasarým";
iskelet10.boyut="120x240";
iskelet10.miktar="400 kg/m³";

//-----------------------------------------

Mobilya mobilya1;
mobilya1.kaplama="Koltuk";
mobilya1.malzeme=iskelet1.malzeme;
mobilya1.fiyat=4000;
mobilya1.adet=12;

Mobilya mobilya2;
mobilya2.kaplama="Kanepe";
mobilya2.malzeme=iskelet2.malzeme;
mobilya2.fiyat=8500;
mobilya2.adet=8;

Mobilya mobilya3;
mobilya3.kaplama="Bahçe Salýncaðý";
mobilya3.malzeme=iskelet3.malzeme;
mobilya3.fiyat=6000;
mobilya3.adet=3;

Mobilya mobilya4;
mobilya4.kaplama="Koltuk";
mobilya4.malzeme=iskelet4.malzeme;
mobilya4.fiyat=4500;
mobilya4.adet=16;

Mobilya mobilya5;
mobilya5.kaplama="Lüks Koltuk";
mobilya5.malzeme=iskelet5.malzeme;
mobilya5.fiyat=9000;
mobilya5.adet=4;

Mobilya mobilya6;
mobilya6.kaplama="Sandalye";
mobilya6.malzeme=iskelet6.malzeme;
mobilya6.fiyat=2000;
mobilya6.adet=7;

Mobilya mobilya7;
mobilya7.kaplama="Koltuk";
mobilya7.malzeme=iskelet7.malzeme;
mobilya7.fiyat=6000;
mobilya7.adet=2;

Mobilya mobilya8;
mobilya8.kaplama="Yatak";
mobilya8.malzeme=iskelet8.malzeme;
mobilya8.fiyat=10000;
mobilya8.adet=4;

Mobilya mobilya9;
mobilya9.kaplama="Klasik Koltuk";
mobilya9.malzeme=iskelet9.malzeme;
mobilya9.fiyat=7500;
mobilya9.adet=5;

Mobilya mobilya10;
mobilya10.kaplama="Masa";
mobilya10.malzeme=iskelet10.malzeme;
mobilya10.fiyat=6000;
mobilya10.adet=3;

//----------------------------------------

cout << "\tMobilya Bilgileri" << endl;
cout << endl;

cout << "1.mobilya için;"<<endl;
cout << "Ýplik Tipi: " << kumas1.ipliktipi << endl;
cout << "Dm2 Aðýrlýk: " << kumas1.dm2agirlik << endl;
cout << "Dokuma Tipi: " << kumas1.dokumatipi << endl;
cout << "Renk: " << kumas1.renk << endl;
cout << "Miktar: " << kumas1.miktar << endl;
cout << "Ýskelet Malzemesi: " << iskelet1.malzeme << endl;
cout << "Birleþtirme Yöntemi: " << iskelet1.birlestirme << endl;
cout << "Tarz: " << iskelet1.tarz << endl;
cout << "Boyut: " << iskelet1.boyut << endl;
cout << "Miktar: " << iskelet1.miktar << endl;
cout << "Kaplama: " << mobilya1.kaplama << endl;
cout << "Fiyat: " << mobilya1.fiyat << endl;
cout << "Adet: " << mobilya1.adet << endl;
int top1;
top1=mobilya1.fiyat*mobilya1.adet;
cout<<"1.mobilya için toplam fiyat: " << top1 << endl;
cout<<endl;

cout << "2.mobilya için;"<<endl;
cout << "Ýplik Tipi: " << kumas2.ipliktipi << endl;
cout << "Dm2 Aðýrlýk: " << kumas2.dm2agirlik << endl;
cout << "Dokuma Tipi: " << kumas2.dokumatipi << endl;
cout << "Renk: " << kumas2.renk << endl;
cout << "Miktar: " << kumas2.miktar << endl;
cout << "Ýskelet Malzemesi: " << iskelet2.malzeme << endl;
cout << "Birleþtirme Yöntemi: " << iskelet2.birlestirme << endl;
cout << "Tarz: " << iskelet2.tarz << endl;
cout << "Boyut: " << iskelet2.boyut << endl;
cout << "Miktar: " << iskelet2.miktar << endl;
cout << "Kaplama: " << mobilya2.kaplama << endl;
cout << "Fiyat: " << mobilya2.fiyat << endl;
cout << "Adet: " << mobilya2.adet << endl;
int top2;
top2=mobilya2.fiyat*mobilya2.adet;
cout<<"2.mobilya için toplam fiyat: " << top2 << endl;
cout<<endl;

cout << "3.mobilya için;"<<endl;
cout << "Ýplik Tipi: " << kumas3.ipliktipi << endl;
cout << "Dm2 Aðýrlýk: " << kumas3.dm2agirlik << endl;
cout << "Dokuma Tipi: " << kumas3.dokumatipi << endl;
cout << "Renk: " << kumas3.renk << endl;
cout << "Miktar: " << kumas3.miktar << endl;
cout << "Ýskelet Malzemesi: " << iskelet3.malzeme << endl;
cout << "Birleþtirme Yöntemi: " << iskelet3.birlestirme << endl;
cout << "Tarz: " << iskelet3.tarz << endl;
cout << "Boyut: " << iskelet3.boyut << endl;
cout << "Miktar: " << iskelet3.miktar << endl;
cout << "Kaplama: " << mobilya3.kaplama << endl;
cout << "Fiyat: " << mobilya3.fiyat << endl;
cout << "Adet: " << mobilya3.adet << endl;
int top3;
top3=mobilya3.fiyat*mobilya3.adet;
cout<<"3.mobilya için toplam fiyat: " << top3 << endl;
cout<<endl;

cout << "4.mobilya için;"<<endl;
cout << "Ýplik Tipi: " << kumas4.ipliktipi << endl;
cout << "Dm2 Aðýrlýk: " << kumas4.dm2agirlik << endl;
cout << "Dokuma Tipi: " << kumas4.dokumatipi << endl;
cout << "Renk: " << kumas4.renk << endl;
cout << "Miktar: " << kumas4.miktar << endl;
cout << "Ýskelet Malzemesi: " << iskelet4.malzeme << endl;
cout << "Birleþtirme Yöntemi: " << iskelet4.birlestirme << endl;
cout << "Tarz: " << iskelet4.tarz << endl;
cout << "Boyut: " << iskelet4.boyut << endl;
cout << "Miktar: " << iskelet4.miktar << endl;
cout << "Kaplama: " << mobilya4.kaplama << endl;
cout << "Fiyat: " << mobilya4.fiyat << endl;
cout << "Adet: " << mobilya4.adet << endl;
int top4;
top4=mobilya4.fiyat*mobilya4.adet;
cout<<"4.mobilya için toplam fiyat: " << top4 << endl;
cout<<endl;

cout << "5.mobilya için;"<<endl;
cout << "Ýplik Tipi: " << kumas5.ipliktipi << endl;
cout << "Dm2 Aðýrlýk: " << kumas5.dm2agirlik << endl;
cout << "Dokuma Tipi: " << kumas5.dokumatipi << endl;
cout << "Renk: " << kumas5.renk << endl;
cout << "Miktar: " << kumas5.miktar << endl;
cout << "Ýskelet Malzemesi: " << iskelet5.malzeme << endl;
cout << "Birleþtirme Yöntemi: " << iskelet5.birlestirme << endl;
cout << "Tarz: " << iskelet5.tarz << endl;
cout << "Boyut: " << iskelet5.boyut << endl;
cout << "Miktar: " << iskelet5.miktar << endl;
cout << "Kaplama: " << mobilya5.kaplama << endl;
cout << "Fiyat: " << mobilya5.fiyat << endl;
cout << "Adet: " << mobilya5.adet << endl;
int top5;
top5=mobilya5.fiyat*mobilya5.adet;
cout<<"5.mobilya için toplam fiyat: " << top5 << endl;
cout<<endl;

cout << "6.mobilya için;"<<endl;
cout << "Ýplik Tipi: " << kumas6.ipliktipi << endl;
cout << "Dm2 Aðýrlýk: " << kumas6.dm2agirlik << endl;
cout << "Dokuma Tipi: " << kumas6.dokumatipi << endl;
cout << "Renk: " << kumas6.renk << endl;
cout << "Miktar: " << kumas6.miktar << endl;
cout << "Ýskelet Malzemesi: " << iskelet6.malzeme << endl;
cout << "Birleþtirme Yöntemi: " << iskelet6.birlestirme << endl;
cout << "Tarz: " << iskelet6.tarz << endl;
cout << "Boyut: " << iskelet6.boyut << endl;
cout << "Miktar: " << iskelet6.miktar << endl;
cout << "Kaplama: " << mobilya6.kaplama << endl;
cout << "Fiyat: " << mobilya6.fiyat << endl;
cout << "Adet: " << mobilya6.adet << endl;
int top6;
top6=mobilya6.fiyat*mobilya6.adet;
cout<<"6.mobilya için toplam fiyat: " << top6 << endl;
cout<<endl;

cout << "7.mobilya için;"<<endl;
cout << "Ýplik Tipi: " << kumas7.ipliktipi << endl;
cout << "Dm2 Aðýrlýk: " << kumas7.dm2agirlik << endl;
cout << "Dokuma Tipi: " << kumas7.dokumatipi << endl;
cout << "Renk: " << kumas7.renk << endl;
cout << "Miktar: " << kumas7.miktar << endl;
cout << "Ýskelet Malzemesi: " << iskelet7.malzeme << endl;
cout << "Birleþtirme Yöntemi: " << iskelet7.birlestirme << endl;
cout << "Tarz: " << iskelet7.tarz << endl;
cout << "Boyut: " << iskelet7.boyut << endl;
cout << "Miktar: " << iskelet7.miktar << endl;
cout << "Kaplama: " << mobilya7.kaplama << endl;
cout << "Fiyat: " << mobilya7.fiyat << endl;
cout << "Adet: " << mobilya7.adet << endl;
int top7;
top7=mobilya7.fiyat*mobilya7.adet;
cout<<"7.mobilya için toplam fiyat: " << top7 << endl;
cout<<endl;

cout << "8.mobilya için;"<<endl;
cout << "Ýplik Tipi: " << kumas8.ipliktipi << endl;
cout << "Dm2 Aðýrlýk: " << kumas8.dm2agirlik << endl;
cout << "Dokuma Tipi: " << kumas8.dokumatipi << endl;
cout << "Renk: " << kumas8.renk << endl;
cout << "Miktar: " << kumas8.miktar << endl;
cout << "Ýskelet Malzemesi: " << iskelet8.malzeme << endl;
cout << "Birleþtirme Yöntemi: " << iskelet8.birlestirme << endl;
cout << "Tarz: " << iskelet8.tarz << endl;
cout << "Boyut: " << iskelet8.boyut << endl;
cout << "Miktar: " << iskelet8.miktar << endl;
cout << "Kaplama: " << mobilya8.kaplama << endl;
cout << "Fiyat: " << mobilya8.fiyat << endl;
cout << "Adet: " << mobilya8.adet << endl;
int top8;
top8=mobilya8.fiyat*mobilya8.adet;
cout<<"8.mobilya için toplam fiyat: " << top8 << endl;
cout<<endl;

cout << "9.mobilya için;"<<endl;
cout << "Ýplik Tipi: " << kumas9.ipliktipi << endl;
cout << "Dm2 Aðýrlýk: " << kumas9.dm2agirlik << endl;
cout << "Dokuma Tipi: " << kumas9.dokumatipi << endl;
cout << "Renk: " << kumas9.renk << endl;
cout << "Miktar: " << kumas9.miktar << endl;
cout << "Ýskelet Malzemesi: " << iskelet9.malzeme << endl;
cout << "Birleþtirme Yöntemi: " << iskelet9.birlestirme << endl;
cout << "Tarz: " << iskelet9.tarz << endl;
cout << "Boyut: " << iskelet9.boyut << endl;
cout << "Miktar: " << iskelet9.miktar << endl;
cout << "Kaplama: " << mobilya9.kaplama << endl;
cout << "Fiyat: " << mobilya9.fiyat << endl;
cout << "Adet: " << mobilya9.adet << endl;
int top9;
top9=mobilya9.fiyat*mobilya9.adet;
cout<<"9.mobilya için toplam fiyat: " << top9 << endl;
cout<<endl;

cout << "10.mobilya için;"<<endl;
cout << "Ýplik Tipi: " << kumas10.ipliktipi << endl;
cout << "Dm2 Aðýrlýk: " << kumas10.dm2agirlik << endl;
cout << "Dokuma Tipi: " << kumas10.dokumatipi << endl;
cout << "Renk: " << kumas10.renk << endl;
cout << "Miktar: " << kumas10.miktar << endl;
cout << "Ýskelet Malzemesi: " << iskelet10.malzeme << endl;
cout << "Birleþtirme Yöntemi: " << iskelet10.birlestirme << endl;
cout << "Tarz: " << iskelet10.tarz << endl;
cout << "Boyut: " << iskelet10.boyut << endl;
cout << "Miktar: " << iskelet10.miktar << endl;
cout << "Kaplama: " << mobilya10.kaplama << endl;
cout << "Fiyat: " << mobilya10.fiyat << endl;
cout << "Adet: " << mobilya10.adet << endl;
int top10;
top10=mobilya10.fiyat*mobilya10.adet;
cout<<"10.mobilya için toplam fiyat: " << top10 << endl;
cout<<endl;

int top;
top=top1+top2+top3+top4+top5+top6+top7+top8+top9+top10;

cout << "Bütün mobilyalar için toplam fiyat: " << top << endl;

    system("pause");
    return 0;
}
