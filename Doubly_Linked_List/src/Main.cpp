
 /** 
* @file Main.cpp
* @description Programın çalıstıgı main dosyasi.
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 1.Ödev
* @date 11.11.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "SatirList.hpp"
#include "Node.hpp"
#include "Yoneticilist.hpp"
#include "TasarimFonk.hpp"

using namespace std;





int main()
{	const int gosterilenTopIndex=8;
	Tasarim mytasarim;
	ifstream dosya("veriler.txt");
	YoneticiList* YoneticiListe=new YoneticiList();
	string tmp;
	string veri;
	int countline=0;
	int dugumsayisi=8;
	int SatirListindex=0;
	int YoneticiIndex;
	string str;
    int sayim;
    int count;
	
	if(dosya.is_open())
	{
		while(getline(dosya,tmp))
		{			
		countline++;					
		}		
	}
			dosya.close();
						
			ifstream dosyam("veriler.txt");
	satirListesi* satir=new satirListesi[countline];
  
	if(dosyam.is_open())
	{
		count=0;
			while(getline(dosyam,veri))				
			{	stringstream sstream;
				sstream<<veri;
				//cout<<veri;
				while(sstream>>sayim)
				{				
					satir[count].add(sayim);				
				}
				count++;					
			}				
	}	
	dosya.close(); 
		
   for(int i=0;i<countline;i++)
   {
	   YoneticiListe->add(&satir[i]);	   
   }
  
   while(true)
   {
	   system("CLS");
	   char ch;
	   
	   YoneticiIndex=((dugumsayisi/gosterilenTopIndex)-1);
	  
	mytasarim.ilkmisonmu(dugumsayisi,countline);
	YoneticiListe->printAdress(dugumsayisi,gosterilenTopIndex);
	mytasarim.cizgicizdir(gosterilenTopIndex);

	YoneticiListe->printDugum(dugumsayisi,gosterilenTopIndex);
	YoneticiListe->printSatir(SatirListindex+(YoneticiIndex*gosterilenTopIndex),SatirListindex);
   cin>>ch;
	
	
	switch (ch)
	{
		case 'a':
			
		if(dugumsayisi!=gosterilenTopIndex)
		{
			dugumsayisi=dugumsayisi-gosterilenTopIndex;
		}
		if(dugumsayisi<gosterilenTopIndex)
			dugumsayisi=gosterilenTopIndex;
		
		SatirListindex=0;
		break;
		case 'd':
			SatirListindex=0;
			dugumsayisi=dugumsayisi+gosterilenTopIndex;
			if(dugumsayisi>(((countline/gosterilenTopIndex)*gosterilenTopIndex)+gosterilenTopIndex))
				dugumsayisi=(((countline/gosterilenTopIndex)*gosterilenTopIndex)+gosterilenTopIndex);
			break;
		case 'c':
				
				
				
				SatirListindex++;
				if(SatirListindex>7)
				{SatirListindex=0;}		
				if(SatirListindex+(YoneticiIndex*gosterilenTopIndex)>=countline)
				{
					SatirListindex=0;
				}
			
				
		
		
			break;
		case 'z':
		
				SatirListindex--;
				if(SatirListindex<0)
					SatirListindex=0;
			break;
		case 'p':	
						
						YoneticiListe->removeAt(SatirListindex+(YoneticiIndex*gosterilenTopIndex));
						countline--;
						
						
		
		
		break;
		
		
		case 'k':
						YoneticiListe->removeRandSatirDugum(SatirListindex+(YoneticiIndex*gosterilenTopIndex));
						// YoneticiListe->SortByAvarage(SatirListindex+(YoneticiIndex*gosterilenTopIndex));
						
		
		break;
		
		
		
		
	}
		
		if(ch=='e')break;
		
   }
   
   
   delete[] satir;
   delete YoneticiListe;
}
