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
    // Make sure producer doesn't try to add to full queue and consumer doesen't try to remove from an empty queue
    
    
    thread Con1(&Consumer::removeItem,q, 1);
    thread Con2(&Consumer::removeItem,q, 2);
    thread Prod1(&Producer::createNum,q, 1);
    thread Prod2(&Producer::createNum,q, 2);
    thread Prod3(&Producer::createNum,q, 3);


    Con1.join();
    Con2.join();
    Prod1.join();
    Prod2.join();
    Prod3.join();

    // Use sleep_until to have consumers to wait until producer produces item as well as sleeping when the queue is full
}


