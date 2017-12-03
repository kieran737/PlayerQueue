// OOP.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	//Declaring Queue.
	queue<int> myQueue;

	//Create 10 values for the Queue.
	for (int i = 1; i < 11; i++)
	{
		//Displays the values from 1 to 11.
		std::cout << "Player: " << i << endl;
		myQueue.push(i);
	}

	//Size of the queue.
	std::cout << endl << "How many players are in the game: " << myQueue.size() << endl << endl;

	//The value at the back of the queue.
	std::cout << "Last player to enter the lobby: " << myQueue.back() << endl << endl;


	//Pause Function
	int pause;
	pause = 0;
	std::cin >> pause;

	return 0;
}

