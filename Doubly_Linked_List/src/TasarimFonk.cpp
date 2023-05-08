 /** 
* @file TasarimFonk.cpp
* @description  Tasarim sınıfının fonksiyonları yazılmıştır 
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 1.Ödev
* @date 15.11.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/

#include "TasarimFonk.hpp"


Tasarim::Tasarim()
{}


void Tasarim::cizgicizdir(int adet)
{	
	for(int i=0;i<adet;i++)
	{
		
		cout<<"----------- "<<setw(7)<<"";
		
		
	}	
	cout<<endl;
}


void Tasarim::ilkmisonmu(int index,int	countline)
{
	if(index==8)
	{
			cout<<"ilk"<<setw(133)<<">>>>>>>>>>>>>>>>>>>";
		
		
	}
	else if(index>=countline)
	{
		if((index-countline)>0)
		cout<<"<<<<<<<<<<<<<<<<<<<"<<setw(((countline%8)-1)*19)<<"son";
		
		
		
	}
	else if(countline<8)
	{
		
		if((index-countline)>0)
		cout<<"<<<<<<<<<<<<<<<<<<<"<<setw(((countline%8)-1)*19)<<"son";
	}
	else
	{	
		cout<<"<<<<<<<<<<<<<<<<<<<"<<setw(133)<<">>>>>>>>>>>>>>>>>>>";
		
		
		
		
	}
cout<<endl;
}


void Tasarim::boslukBirak(int index)
{
	
	cout<<setw(index*19)<<"";
	
	
	
}
