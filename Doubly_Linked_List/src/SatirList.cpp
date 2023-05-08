/** 
* @file Dosya adı
* @description SatirList sınıfının fonksiyon gövdeleri yazılmıştır
* @course Dersi 2.Sınıf 2.Ogretim A grubu
* @assignment 1.Ödev
* @date 11.11.2022
* @author Atakan Paşalı atakan.pasali@ogr.sakarya.edu.tr
*/ 

 #include "SatirList.hpp"
  
  Node* satirListesi::FindPrevByPosition(int position)
    {
        if (position<0 || position>size) throw "Index Out Of Range";
        int index = 1;
        for (Node* itr = head; itr != NULL; itr = itr->next, index++)
        {
            if (position == index)
                return itr;

        }
        return NULL;

    }
  satirListesi::satirListesi()
    {
        head = NULL;
        size = 0;

    }

    bool satirListesi::isEmpty()const
    {
        return size == 0;

    }
    int satirListesi::count()
    {
        return size;
    }
    const int& satirListesi::first()
    {
        if (isEmpty()) throw "Bos Liste";
        return head->item;
    }
    const int& satirListesi::last()
    {
        if (isEmpty()) throw "Bos Liste";
        
        return FindPrevByPosition(size)->item;

    }
    void satirListesi::add(const int& item)
    {
        insert(size, item);


    }
    void satirListesi::insert(int index, const int& item)
    {	
        if (index == 0)
        {
          
            head = new Node(item, head,NULL);
           if(head->next!=NULL) head->next->prev = head;
        }
        else  
        {

            Node* Previus = FindPrevByPosition(index);
            Previus->next = new Node(item, Previus->next, Previus);
            if(Previus->next->next!=NULL) Previus->next->next->prev = Previus->next;
        }
      
        size++;
    }
	
    float satirListesi::FindAvarage()
    {
        if (size == 0) return 0;
        float avarage = 0;
        
        for (Node* itr = head; itr!=NULL; itr = itr->next)
        {
            avarage += itr->item;
        }
		avarage=avarage/size;
        return float(avarage);

    }
	
	void satirListesi::removeAt(int index)
	{ 	if (index<0 || index>=size) throw "Index Out Of Range";
		if (size==0) throw "Empty List";
		Node *del;
		if(index==0)
		{
			del=head;
			head=head->next;
			if(head!=NULL)head->prev=NULL;
		}
		else{
			Node* Previus=FindPrevByPosition(index);
			del=Previus->next;
			Previus->next=del->next;
			if(del->next!=NULL)del->next->prev=Previus;
			
		}
		delete del;
		size--;
		
		
	}
	void satirListesi::randRemove()
	{srand(time(NULL));
		if(!isEmpty())  
		{
						
		int random=rand()%size;
		removeAt((random));
	
		}
		
		
	}
	void satirListesi::clear()
	{
		for(int i=0;i<size;i++)
		{
			removeAt(0);
		}
		
		
	}
	void satirListesi::getAdress(int element)
	{
			int i=0;
		
		for(Node* itr=head; i<element;itr=itr->next)
		{
			if(i==(element)-8)
			{
				
				 cout <<itr;
				
				
				
			}
			i++;
		}
			
		
		
	}
	void satirListesi::yazdir(int index)
	{	
		
		for (Node* itr = head; itr != NULL; itr = itr->next)
			
            {	satirTasarim.boslukBirak(index);
				satirTasarim.cizgicizdir(1);
				
				satirTasarim.boslukBirak(index);
                cout<<"|"<<setw(9)<<itr<<"|"<<setw(9)<<endl;
				satirTasarim.boslukBirak(index);
				satirTasarim.cizgicizdir(1);
				satirTasarim.boslukBirak(index);
				cout<<"|"<<setw(9)<<itr->item<<"|"<<setw(9)<<endl;
				satirTasarim.boslukBirak(index);
				satirTasarim.cizgicizdir(1);
				satirTasarim.boslukBirak(index);
				cout<<"|"<<setw(9)<<itr->next<<"|"<<setw(9)<<endl;
				satirTasarim.boslukBirak(index);
				satirTasarim.cizgicizdir(1);
				cout<<endl;
            }
	}
	
	
  
	satirListesi::~satirListesi()
	{ 
	clear();
	}