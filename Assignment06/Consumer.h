#pragma once
#include <queue>
#include <mutex>
class Consumer
{
	private:

	public:
		void removeItem(std::queue <int> q, int id);
		int tally(int tallyNum);
		Consumer();
};

