#include <iostream>
#include <time.h>
#include <vector>
#include <cmath>
#include <fstream>
#include <random>
#include <algorithm>
//My first attempt at image programming 15/01/2022
//Ammended 24/05/2022

int main()
{
	const uint8_t R = 1;
	const uint8_t G = 1;
	const uint8_t B = 1;
	const int width{ 128 };
	const int height{ 128 };
	const int length{ 128 };
	const int max = width + height;
	int o = 0;

	std::random_device rd;  // Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis{ 1u,255u }; // Same distribution as before, but explicit and without bias
	
	std::ofstream img ("picture.pgm");
	img << "P3" << std::endl;
	img << width << " " << height << std::endl;
	img << "255" << std::endl;
	while(o != max)
	{ 
		o++;
		for (int i = 0; i < length; i++)
		{
			img << dis(gen) % R << " " << dis(gen) % G << " " << dis(gen) % B;
		}
	}
		return 0;
}