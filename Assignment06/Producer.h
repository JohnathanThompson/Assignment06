#pragma once
#include <queue>
#include <mutex>

class Producer
{
	private:

	public:
		void createNum(std::queue <int> q, int id);
		Producer();
};

