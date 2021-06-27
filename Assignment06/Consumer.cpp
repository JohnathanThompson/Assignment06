#include "Consumer.h"
#include <queue>
#include <iostream>
#include <mutex>

using namespace std;
Consumer::Consumer() {}

void Consumer::removeItem(std::queue <int> q, int id) {
	mutex m;
	if (q.size() > 0) {
		m.lock();
		cout << "Consumer thread " << id << " removed number " << q.front() << " from the queue." << endl;
		q.pop();
		m.unlock();
	}
	else {
		cout << "Queue is empty!" << endl;
	}
}

int Consumer::tally(int tallyNum) {
	return tallyNum++;
}
