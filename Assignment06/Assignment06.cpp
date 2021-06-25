// Assignment06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <thread>
#include <iostream>
#include <queue>
#include "Producer.h"
#include "Consumer.h"

using namespace std;

queue <int> q;

int main()
{
    int tally = 0;
    thread Prod1(&Producer::createNum, q, 1);
    thread Prod2(&Producer::createNum, q, 2);
    thread Con1(&Consumer::removeItem, q, 1);
    thread Con2(&Consumer::removeItem, q, 2);
    thread Con3(&Consumer::removeItem, q, 3);
    
    Prod1.join();
    Prod2.join();
    Con1.join();
    Con2.join();
    Con3.join();
}

/*
What needs to be accoplished :
-------------------------------------------------
Get threads initialized correctly
Use sleep_until to have consumers to wait until producer produces item as well as sleeping when the queue is full
Have only one thread run pickItem or AddItem to queue


Make sure producer doesn't try to add to full queue and consumer doesen't try to remove from an empty queue
*/



