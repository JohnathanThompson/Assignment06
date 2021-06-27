#pragma once
#include <queue>

class Producer
{
	private:
		int number;

	public:
		int getNumber();
		void createNum(std::queue <int> q, int id);
		Producer();
};

