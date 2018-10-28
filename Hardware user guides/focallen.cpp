#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>

static double afov(double width, double focalLength);
static double lfov(double width, double focalLength, double distanceCM);

static const size_t sizeFocalLengths = 5;
static const double focalLengths[sizeFocalLengths] = { 2.1, 3.5, 4.5, 6.0, 12.0 };

// Angular Field Of View
static double afov(double width, double focalLength) {
	return ((2.0 * std::atan((width / 2.0) / focalLength)) * (180.0 / M_PI));
}

// Linear Field Of View
static double lfov(double width, double focalLength, double distanceCM) {
	return (((width * (distanceCM * 10.0)) / focalLength) / 10.0);
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Usage: ./focallen <num pix horizontal> <num pix vertical> <pixel pitch um>" << std::endl;
		return (EXIT_FAILURE);
	}

	auto resHorizontal = std::stod(argv[1]);
	auto resVertical = std::stod(argv[2]);
	auto pixelPitch = std::stod(argv[3]);

	auto width = (resHorizontal * pixelPitch) / 1000.0;
	auto height = (resVertical * pixelPitch) / 1000.0;
	auto diagonal = std::sqrt((width * width) + (height * height));

	std::cout.precision(3);

	std::cout << "Width (mm): " << width << std::endl;
	std::cout << "Height (mm): " << height << std::endl;
	std::cout << "Diagonal (mm): " << diagonal << std::endl;

	for (size_t i = 0; i < sizeFocalLengths; i++) {
		std::cout << focalLengths[i] <<  "mm lens -> Horizontal Angular FoV (deg): " << afov(width, focalLengths[i]) << std::endl;
		std::cout << focalLengths[i] <<  "mm lens -> Vertical Angular FoV (deg): " << afov(height, focalLengths[i]) << std::endl;
		std::cout << focalLengths[i] <<  "mm lens -> Diagonal Angular FoV (deg): " << afov(diagonal, focalLengths[i]) << std::endl;

		std::cout << focalLengths[i] <<  "mm lens -> Horizontal Linear FoV at 10cm (cm): " << lfov(width, focalLengths[i], 10.0) << std::endl;
		std::cout << focalLengths[i] <<  "mm lens -> Horizontal Linear FoV at 30cm (cm): " << lfov(width, focalLengths[i], 30.0) << std::endl;
		std::cout << focalLengths[i] <<  "mm lens -> Horizontal Linear FoV at 100cm (cm): " << lfov(width, focalLengths[i], 100.0) << std::endl;
	}

	return (EXIT_SUCCESS);
}
