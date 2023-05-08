/** 
* @file Dosya adı
* @description Yönetici listesinin düğümü oluşturulmustur
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 1.Ödev
* @date 12.11.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/ 
 
 #ifndef ObjectNode_hpp
#define ObjectNode_hpp
#include "SatirList.hpp"
 #include <cstddef>
class ObjectNode
{
public:
    satirListesi* item;
    ObjectNode* next;
    ObjectNode* prev;

    ObjectNode(satirListesi* , ObjectNode* , ObjectNode* );
	
};
#endif
