#include <iostream>
#include <time.h>
#include <vector>
#include <cmath>
#include <fstream>
//My first attempt at image programming 15/01/2022
int width = 0, height = 0;
int R, G, B, W;

int main()
{
	std::cin >> width;
	std::cin >> height;
	std::cin >> W;
	std::cin >> B;
	srand(time(NULL));
	std::ofstream img ("picture.pgm");
	img << "P2" << std::endl;
	img << width << " " << height << std::endl;
	img << "255" << std::endl;
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			
			img << rand() % W << " " << rand() % B;
		}
	}
		return 0;
}