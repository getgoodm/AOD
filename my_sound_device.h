
#ifndef MY_SOUND_DEVICE_H
#define MY_SOUND_DEVICE_H


#include "my_output_device.h"


#include <iostream>
#include <string>
using namespace std;

//Класс "Звуковое устройство", наследник класса "Устройство вывода"

class SoundDevice : public OutputDevice
{
	private:
		double power;
		double min_frequency;
		double max_frequency;
		double frequency_range;
		
		//Указатель на массив наушников
		
	public:
		void set_power(double po)
		{
			power=po;
		}
		double get_power()
		{
			return power;
		}
		void set_min_frequency(double min)
		{
			min_frequency=min;
		}
		double get_min_frequency()
		{
			return min_frequency;
		}
		void set_max_frequency(double max)
		{
			max_frequency=max;
		}
		double get_max_frequency()
		{
			return max_frequency;
		}


		//Функция определения диапазона частот
		double myFrequencyRange(double min, double max)
		{
			return (max-min);
		}
		
	    SoundDevice(double po, double min, double max){
	    	set_power(po);
	    	set_min_frequency(min);
	    	set_max_frequency(max);
	    	
	    	//Выделение памяти для массива наушников
	    	cout<<"Class SoundDevice object has been created"<<endl;
	    	
	    }
	    SoundDevice(){
	    }
	    ~SoundDevice(){
	    	
	    }
};

#endif

