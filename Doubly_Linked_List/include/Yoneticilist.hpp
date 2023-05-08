 /** 
* @file Yoneticilist.hpp
* @description Yönetici Listesi Adında Bağlı liste oluşturulmuştur 
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 1.Ödev
* @date 12.11.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/
#ifndef Yoneticilist_hpp
#define Yoneticilist_hpp
#include <iostream>
#include "ObjectNode.hpp"
#include "SatirList.hpp"
#include "TasarimFonk.hpp"
#include <iomanip>


class YoneticiList
{
	private:
    ObjectNode* head;
    int size;
	Tasarim tasarim;
	

    ObjectNode* FindPrevByPosition(int);
  
public:
    YoneticiList();
    

    bool isEmpty()const;
    
    int count();
    
    const satirListesi* first();
    void printSatir(int,int);
    const satirListesi* last();
   void removeRandSatirDugum(int );
   void SortByAvarage(int );
    void add( satirListesi* );
   
    void insert(int ,  satirListesi* );
    
	void removeAt(int );
	void clear();
	void printAdress(int,int );
	void printDugum(int ,int);
    friend ostream& operator<<(ostream& , YoneticiList );
   ~YoneticiList();
   
	
	
	
	
	
	
	
};
#endif