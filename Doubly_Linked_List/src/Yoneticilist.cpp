 /** 
* @file Yoneticilist.cpp
* @description  Yonetici listesinin fonksiyonları yazılmıştır 
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 1.Ödev
* @date 12.11.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/
 #include "Yoneticilist.hpp"
 
  ObjectNode* YoneticiList::FindPrevByPosition(int position)
    {
        if (position<0 || position>size) throw "Index Out Of Range";
        int index = 1;
        for (ObjectNode* itr = head; itr != NULL; itr = itr->next, index++)
        {
            if (position == index)
                return itr;

        }
        return NULL;

    }
  YoneticiList::YoneticiList()
    {
        head = NULL;
        size = 0;

    }

    bool YoneticiList::isEmpty()const
    {
        return size == 0;

    }
    int YoneticiList::count()
    {
        return size;
    }
    const satirListesi* YoneticiList::first()
    {
        if (isEmpty()) throw "Bos Liste";
        return head->item;
    }
    const satirListesi* YoneticiList::last()
    {
        if (isEmpty()) throw "Bos Liste";
		 return FindPrevByPosition(size)->item;

    }
    void YoneticiList::add( satirListesi* data)
    {	 
		int gecicisayi;
		bool gectimi=false;
		if(isEmpty())insert(size, data);
		else
		{ gecicisayi=0;
			for(ObjectNode* itr=head;itr!=NULL;itr=itr->next)
			{
				if(data->FindAvarage()<=itr->item->FindAvarage())
				{
					
					insert((gecicisayi), data);
					gectimi=true;
					break;
					
				}
				else if(itr->next==NULL&&gectimi==false)
				{
					insert(size, data);
				break;
			
				}
				gecicisayi++;
			}
				
				
				
			
		}
    }
    void YoneticiList::insert(int index, satirListesi* item)
    {
		
        if (index == 0)
        {
          
            head = new ObjectNode(item, head,NULL);
           if(head->next!=NULL) head->next->prev = head;
        }
        else  
        {

            ObjectNode* Previus = FindPrevByPosition(index);
            Previus->next = new ObjectNode(item, Previus->next, Previus);
            if(Previus->next->next!=NULL) Previus->next->next->prev = Previus->next;
        }
      
        size++;
    }
	void YoneticiList::removeAt(int index)
	{ 	if (index<0 || index>=size) throw "Index Out Of Range";
		if (size==0) throw "Empty List";
		ObjectNode *del;
		if(index==0)
		{
			del=head;
			head=head->next;
			if(head!=NULL)head->prev=NULL;
		}
		else{
			ObjectNode* Previus=FindPrevByPosition(index);
			del=Previus->next;
			Previus->next=Previus->next->next;
			if(Previus->next->next!=NULL)del->next->prev=Previus;
			
		}
		delete del;
		size--;
		
		
	}
	void YoneticiList::SortByAvarage(int index)
	{
		ObjectNode* myNode=FindPrevByPosition(index)->next;
		
		while(myNode->item->FindAvarage()<myNode->prev->item->FindAvarage()||myNode->item->FindAvarage()>myNode->next->item->FindAvarage())		
		{		
				
				if(myNode->item->FindAvarage()>myNode->next->item->FindAvarage())
				{
				
					myNode->next->next->prev=myNode->next;
					myNode->prev->next=myNode->next->next;
					myNode->next->prev=myNode->next->prev;
					myNode->next=myNode->next->next->next;
					myNode->prev->next->next=myNode->next;
					myNode->prev=myNode->next->prev->next;
					
					
				}
				else if(myNode->item->FindAvarage()<myNode->prev->item->FindAvarage())
				{
					
					myNode->next->next->prev=myNode->next->prev;
					myNode->next->prev->next=myNode->next->next;
					myNode->next->prev->prev->next=myNode->next;
					myNode->next->next=myNode->next->prev;
					myNode->next->prev->prev=myNode->next;
					
					
				}
				
				
			
		}
	}
	void YoneticiList::removeRandSatirDugum(int index)
	{
		
		satirListesi* tmp;		
		if(index==0) tmp=head->item;
		else
		tmp=(FindPrevByPosition(index+1)->item);
		
		tmp->randRemove();
		
		
	}
	
	
	void YoneticiList::clear()
	{
		for(int i=0;i<size;i++)
		{
			removeAt(0);
		}
		
		
	}
	void YoneticiList::printAdress(int element,int topindex)
	{			int i=0;
				
		for(ObjectNode* itr=head; i<element;itr=itr->next)
		{
			if(i>=element-topindex&&i<element)
			{
				
				 cout<<setw(11)<<itr<<setw(8)<<"";
							
			}
			i++;
			
			if(i==size) break;
		}
		
		
		
		cout<<endl;
	}
	
	
	void YoneticiList::printDugum(int element,int topindex)
	{			int i=0;
				
		for(ObjectNode* itr=head; i<element;itr=itr->next)
		{
			if(i>=element-topindex&&i<element)
			{
				if(itr->prev==NULL)
				{cout<<"|";
					
				cout<<setw(9)<<itr->prev<<"|"<<setw(9);
				}
				else{ 
				cout<<"|"<<setw(9)<<itr->prev<<"|"<<setw(9);
				}			
			}
			i++;
			
			if(i==size) break;
		}
		cout<<endl;
		tasarim.cizgicizdir(topindex);
				 i=0;
				 
		for(ObjectNode* itr=head; i<element;itr=itr->next)
		{
			if(i>=element-topindex&&i<element)
			{
				cout<<"|";
				 cout<<fixed<<setprecision(2)<<itr->item->FindAvarage()<<setw(4)<<""<<"|"<<setw(9);
						
			}
			i++;
			
			if(i==size) break;
		}
		cout<<endl;
		tasarim.cizgicizdir(topindex);
				 i=0;
				
		for(ObjectNode* itr=head; i<element;itr=itr->next)
		{
			if(i>=element-topindex&&i<element)
			{
				if(itr->next==NULL)
				{cout<<"|"<<setw(9)<<itr->next<<"|"<<setw(9);
				}
				else{ 
				cout<<"|"<<setw(9)<<itr->next<<"|"<<setw(9);
				}			
			}
			i++;
			
			if(i==size) break;
		}
		cout<<endl;
		tasarim.cizgicizdir(topindex);
	}
		
	void YoneticiList::printSatir(int index,int bosluk)
	{
		satirListesi* tmp;		
		if(index==0) tmp=head->item;
		else
		tmp=(FindPrevByPosition(index+1)->item);
		
		tmp->yazdir(bosluk);
		
		
		
	}
		
	
     ostream& operator<<(ostream& ekran, YoneticiList sag)
    {
        if (sag.isEmpty()) ekran << "Bos liste" << endl;
        else {

            for (ObjectNode* itr = sag.head; itr != NULL; itr = itr->next)
            {
                ekran <<itr<<"		"<<itr->prev<<"  			"<< itr->item->FindAvarage()<<"			"<<itr->next << endl;


            }

        }
        return ekran;
    }
	
	YoneticiList::~YoneticiList()
	{
		clear();
		
	}