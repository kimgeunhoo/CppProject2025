#pragma once
#include "Utility.h"
#include "Common.h"
class Runner
{
private:
	int run;
	bool isEnd;
protected:
	int minSpeed;
	int maxSpeed;

	string symbol;

public:
	Runner() : run(0),isEnd(false), minSpeed(1), maxSpeed(5),symbol("E") {}
	Runner(string symbol) : 
		run(0), isEnd(false), minSpeed(1), maxSpeed(5), symbol(symbol) {}
	virtual void Run();
		
	bool CheckEndLine(int length);
};

class Player : public Runner
{
private:

public:
	Player() : Runner() 
	{
		symbol = "P";
	}

	Player(string symbol) : Runner(symbol) {}

public:
	void Run() override;
	void Upgrade();
};

class Enemy : public Runner
{
	

public:
	void Run() override;
};
