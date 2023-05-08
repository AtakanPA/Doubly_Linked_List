 /** 
* @file ObjectNode.cpp
* @description Yonetici listesinin dugumunu olusturan sınıf
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 1.Ödev
* @date 12.11.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/
 
 #include "ObjectNode.hpp"

	ObjectNode::ObjectNode(satirListesi* item, ObjectNode* next , ObjectNode* prev)
    {
        this->item = item;
        this->next = next;
        this->prev = prev;
    }
