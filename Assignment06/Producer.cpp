#include "Producer.h"
#include <time.h>
#include <stdlib.h>
#include <queue>
#include <iostream>

using namespace std;

Producer::Producer() {}
int Producer::getNumber() {
	return number;
}

void Producer::createNum(std::queue <int> q, int id) {
	srand(time(NULL));
	int num = rand() % 100 + 1;
	cout << "Producer thread " << id << " produced the int " << num << endl;


}