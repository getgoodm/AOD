#ifndef MY_LIST_H
#define MY_LIST_H
#include "my_headphones.h"
class List
{
	Headphones *Head;
	public:
	  List():Head(NULL){};
	  /*~List();
      void Add(Headphones &headphones);
	  void Show();*/
~List()
{
	while (Head!=NULL)
	{
		Headphones *temp=Head->Next;
		delete Head;
		Head=temp;
	}
}
//Функция добавления новой структуры в список
void Add(Headphones &headphones)
{
	Headphones *temp=new Headphones; //Выделение памяти под новую структуру
	temp->Next=Head;
//Копирование содержимого параметра headphones в переменную temp
	temp->number=headphones.number;
	temp->impedance=headphones.impedance;
	temp->cable_length=headphones.cable_length;
	temp->price=headphones.price;
	temp->country_code=headphones.country_code;
	
	Head=temp;
}
//Функция для вывода списка на экран
void Show()
{
	Headphones *temp=Head;
	while (temp!=NULL)
	{
		cout<<temp->number<<" ";
		cout<<temp->impedance<<" ";
		cout<<temp->cable_length<<" ";
		cout<<temp->country_code<<" ";
		cout<<temp->price<<endl;
		
		temp=temp->Next;
	}
	cout<<endl;	
}
};

#endif
