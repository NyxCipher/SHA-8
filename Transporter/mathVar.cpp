#include <iostream>

// FPS

int main()
{
	int mph;
	double fps;
	double x = 1.466666666;
	double t;

	std::cout<<"MPH -> FPS"<<std::endl<<std::endl;
	std::cout<<"MPH?  ";
	std::cin>>mph;
	fps=mph*22/15;
	t = mph*x;
	std::cout<<"FPS = "<<fps << "moduli-X = " << x << "\n";
	std::cout << "FPS-True:" << fps << "." << x << " \n";
	std::cout << "\n\tFPS-True:" << t << "\n";
}
