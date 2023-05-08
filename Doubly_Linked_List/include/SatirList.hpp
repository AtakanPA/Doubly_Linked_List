 /** 
* @file Satirlist.hpp
* @description Satır Listesi  Adında Bağlı liste oluşturulmuştur 
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 1.Ödev
* @date 11.11.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/

#ifndef SatirList_hpp
#define SatirList_hpp
#include <iostream>
#include "Node.hpp"
#include "TasarimFonk.hpp"
#include "Time.h"
using namespace std;


class satirListesi
{
private:
    Node* head;
    int size;
	Tasarim satirTasarim;
    Node* FindPrevByPosition(int);
  
public:
    satirListesi();
    

    bool isEmpty()const;
    
    int count();
    
    const int& first();
    
    const int& last();
    
    void add(const int& );
   void yazdir(int);
    void insert(int , const int& );
    void randRemove();
    float FindAvarage();
	void removeAt(int);
	void getAdress(int );
   
	
	void clear();
	
   ~satirListesi();
	


};
#endif
