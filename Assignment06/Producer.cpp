#include "Producer.h"
#include <time.h>
#include <stdlib.h>
#include <queue>
#include <iostream>
#include <mutex>

using namespace std;

Producer::Producer() {}


void Producer::createNum(std::queue <int> q, int id) {
	mutex m;
	lock_guard<mutex> lock(m);
	srand((unsigned)time(0));
	int num = rand() % 100 + 1;
	cout << "Producer thread " << id << " produced the int " << num << endl;
	q.push(num);



}