 /** 
* @file Node.cpp
* @description Satırlistesinin düğümünu olusturan sınıf
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 1.Ödev
* @date 11.11.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/
 #include "Node.hpp"
 
	Node::Node(int item, Node* next = NULL, Node* prev = NULL)
    {
        this->item = item;
        this->next = next;
        this->prev = prev;
    }
