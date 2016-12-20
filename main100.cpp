

#include "my_output_device.h"
#include "my_sound_device.h"
#include "my_headphones.h"
#include "my_list.h"
#include "priorityqueue.h"

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string connection;
	double wei, po, min, max, range, imp, length, pr, delivery;
	int N;
	/*cout<<"Input the connection type of the device"<<endl;
	cin>>connection;
	cout<<"Input device weight"<<endl;
	cin>>wei;
	OutputDevice Output1 = OutputDevice(connection,wei);
	cout<<"Input sound device power"<<endl;
	cin>>po;
	cout<<"Input sound device minimum frequency"<<endl;
	cin>>min;
	cout<<"Input sound device maximum frequency"<<endl;
	cin>>max;
	SoundDevice Sound1 = SoundDevice(po,min,max);
	cout<<"Input headphones impedance"<<endl;
	cin>>imp;
	cout<<"Input heaphones cable length"<<endl;
	cin>>length;
	cout<<"Input heaphones price"<<endl;
	cin>>pr;
	Headphones Headphones1 = Headphones(imp,length,pr);
	Output1.myCheckWeight(Output1.get_weight());
	cout<<Sound1.myFrequencyRange(Sound1.get_min_frequency(),Sound1.get_max_frequency())<<endl;
	cout<<Headphones1.myPayment(Headphones1.get_price());
	cout<<Headphones1.myPayment(Headphones1.get_price(),35);*/
	int choice;
	cout<<"\nPress 1 to create the list"<<endl;
	cout<<"\nPress 2 to create the priority queue"<<endl;
	cin>>choice;
	if (choice==1)
	{
	
	//LIST:
	Headphones headphones;
	List lst;
	
	cout<<"N="; 
	cin>>N;
	cin.ignore();
	
	for (int i=0; i<N; i++)
	{
		headphones.myInput(headphones);
		lst.Add(headphones);
		}
	cout<<"\nYour list:"<<endl;
	lst.Show();
}
else if (choice==2)	

{	//Priority queue:
	int N1;
	int country_code, priority;
	PriorityQueue priority1;
	cout<<"Input the amount of elements:"<<endl;
	cin>>N1;
	for (int i=0;i<N1;i++)
	{
		cout<<"Input country code:"<<endl;
		cin>>country_code;
		switch (country_code)
		{
			case 11:
				priority=6;
				break;
		    case 25:
		    	priority=5;
		    	break;
		    case 40:
		    	priority=4;
		    	break;
		    case 50:
		    	priority=3;
		    	break;
		    case 15:
		    	priority=2;
		    	break;
		    default:
			    priority=1;
				break; 	
		}
		priority1.insert(country_code, priority);
	}
    for (int l=0;l<N1;l++)
    priority1.extract();}

	
	return 0;
}
