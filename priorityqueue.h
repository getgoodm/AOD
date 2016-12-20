#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include "assert.h"
#include <memory> 
#include <iostream>
using namespace std;
//Queue is created by priority: priority is assigned with country code of headphones
class PriorityQueue
{
	static const int MAX_SIZE = 50;
	//Headphones structure with country code and priority fields
    struct Hph {
        int country_code;
        int priority;
        Hph(int v = 0, int p = 0) {
            country_code = v;
            priority = p;
        }
    } a[MAX_SIZE];
    int size;
     void up(int i) {
        while (i != 0 && a[i].priority > a[(i - 1) / 2].priority) {
            swap(a[i], a[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }
   
    
    void down(int i) {
        while (i < size / 2) {
            int maxI = 2 * i + 1;
            if (2 * i + 2 < size && a[2 * i + 2].priority > a[2 * i + 1].priority)
                maxI = 2 * i + 2;
            if (a[i].priority >= a[maxI].priority)
                return;
            swap(a[i], a[maxI]);
            i = maxI;
        }
    }
     void down(Hph a[], int size, int i) {
        while (i < size / 2) {
            int maxI = 2 * i + 1;
            if (2 * i + 2 < size && a[2 * i + 2].priority > a[2 * i + 1].priority)
                maxI = 2 * i + 2;
            if (a[i].priority >= a[maxI].priority)
                return;
            swap(a[i], a[maxI]);
            i = maxI;
        }
    }

	public:
		PriorityQueue() {
        size = 0;
    }
     Hph get_a(){
    	return *a;
    }
    //Insert a new element into the queue
    void insert(int price, int priority) {
        assert(size + 1 < MAX_SIZE);
        a[size++] = Hph(price, priority);
        up(size - 1);
    }
    
    //Extract the highest priority element from the queue
    Hph extract() {
        assert(size > 0);
        swap(a[0], a[--size]);
        down(0);
        cout<<"Max priority:"<<a[size].priority<<" Country code:"<<a[size].country_code<<endl;
        return a[size];
        
    }
    void heapsort(Hph a[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--)
        down(a, size, i);
    for (int i = 0; i < size; i++) {
        swap(a[0], a[size - 1 - i]);
        down(a, size - i, 0);
    }
}
    bool isEmpty() {
        return size == 0;
    }
};

#endif
