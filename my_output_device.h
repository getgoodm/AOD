#ifndef MY_OUTPUT_DEVICE_H
#define MY_OUTPUT_DEVICE_H

#include <iostream>
#include <string>

using namespace std;
//Класс "Устройство вывода"
class OutputDevice
{
	private:
	  string connection_type;
	  double weight;
	    	
	public:
		void set_connection_type(string connection)
		{
			connection_type=connection;
		}
		
		string get_connection_type()
		{
			return connection_type;
		}
		
		void set_weight(double wei)
		{
			weight=wei;
		}
		double get_weight()
		{
			return weight;
		}
		//Функция оценки веса устройства
		void myCheckWeight(double wei)
		{
			if (wei>5)
			  cout<<"The device doesn't meet the parameters"<<endl;
		}
		OutputDevice()
		{
		}
		
		OutputDevice(string connection, double wei)
		{
			set_connection_type(connection);
			set_weight(wei);
			cout<<"Class OutputDevice object has been created"<<endl;
		}
		~OutputDevice(){
		}

};

#endif

