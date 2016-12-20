#ifndef MY_HEADPHONES_H
#define MY_HEADPHONES_H

#include "my_sound_device.h"
#include <iostream>
#include <string>
using namespace std;
//Класс "Наушники", наследник класса "Звуковое устройство"
class Headphones : public SoundDevice
{
	
      
	public:
	  Headphones *Next;	
	  double impedance;
	  double cable_length;
	  double price;	
	  double number;
	  int country_code;
	  
	  void set_impedance(double imp)
	  {
	  	impedance=imp;
	  } 
	  double get_impedance()
	  {
	  	return impedance;
	  }
	  void set_country_code(int country)
	  {
	  	country_code=country;
	  }
	  int get_country_code()
	  {
	  	return country_code;
	  }
	  
	  void set_cable_length(double length)
	  {
	  	cable_length=length;
	  }
	  
	  double get_cable_length()
	  {
	  	return cable_length;
	  }
	  void set_price(double pr)
	  {
	  	price=pr;
	  }
	  double get_price()
	  {
	  	return price;
	  }
	  //Перегруженная функция: расчет стоимости наушников с доставкой
	  double myPayment(double pr, double deliverypr){
	  	return(pr+deliverypr);
	  }
	  double myPayment(double pr){
	  	return(pr*1.1);
	  }
	  
	  void myInput(Headphones &headphones)
	  {
	  	cout<<endl;
	    cout<<"Headphones' number: ";
	    cin>>number;
	    cout<<"Impedance: "; 
	    cin>>impedance;
	    cout<<"Cable length: ";
	    cin>>cable_length;
	    cout<<"Country code: ";
	    cin>>country_code;
	    cout<<"Price: ";
	    cin>>price;
	  }
	  
	  Headphones() 
	  {
	  }
	  
	  Headphones(double imp, double length, double pr)
	  {
	  	set_impedance(imp);
	  	set_cable_length(length);
	  	set_price(pr);
	  	
	  }
	
};

#endif

