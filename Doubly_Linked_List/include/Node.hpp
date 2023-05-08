 /** 
* @file Dosya adı
* @description SatirList sınıfının düğüm sınıfı 
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 1.Ödev
* @date 11.11.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/

#ifndef Node_hpp
#define Node_hpp
#include <cstddef>
class Node
{
public:
    int item;
    Node* next;
    Node* prev;

    Node(int , Node* , Node* );

};
#endif
