#include <iostream>
#include <time.h>
#include <vector>
#include <cmath>
#include <fstream>

//My first attempt at image programming 15/01/2022

const int width = 512, height = 512;

int main()
{
	srand(time(NULL));
	std::ofstream img ("picture.ppm");
	img << "P3" << std::endl;
	img << width << " " << height << std::endl;
	img << "255" << std::endl;

	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			
			img << rand() % 255 << " " << rand() % 255 << " " << rand() % 255 << std::endl;
		}
	}
		return 0;
}