#include "Consumer.h"
#include <queue>
#include <iostream>

using namespace std;

void Consumer::removeItem(std::queue <int> q, int id) {
	if (q.size() > 0) {
		cout << "Consumer thread " << id << " removed number " << q.front() << " from the queue." << endl;
		q.pop();
	}
}

int Consumer::tally(int tallyNum) {
	return tallyNum++;
}
