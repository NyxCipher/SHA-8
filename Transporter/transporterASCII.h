/*

	ASCII ART Header File For Transporter.cpp
	
*/

#include <iostream>
#include <windows.h>

class cASCII
{
public:
	cASCII();
	~cASCII();
	int artHandle() const { return artHandleA; }

	float trafficLight()
	{
		//int i = 15;

		std::cout << "\n\t	          ##                    \n"; //Sleep(i);
        std::cout << "\t	         _[]_                   \n"; //Sleep(i);
        std::cout << "\t	        [____]                  \n"; //Sleep(i);
        std::cout << "\t	    .----'  '----.              \n"; //Sleep(i);
		std::cout << "\t	.===|    .==.    |===.          \n"; //Sleep(i);
		std::cout << "\t	\\   |   /####\\   |   /          \n"; //Sleep(i);
		std::cout << "\t	/   |   \\####/   |   \\          \n"; //Sleep(i);
		std::cout << "\t	'===|    `""`    |==='          \n"; //Sleep(i);
		std::cout << "\t	.===|    .==.    |===.          \n"; //Sleep(i);
		std::cout << "\t	\\   |   /::::\\   |   /          \n"; //Sleep(i);
		std::cout << "\t	/   |   \\::::/   |   \\          \n"; //Sleep(i);
		std::cout << "\t	'===|    `""`    |==='          \n"; //Sleep(i);
		std::cout << "\t	.===|    .==.    |===.          \n"; //Sleep(i);
		std::cout << "\t	\\   |   /&&&&\\   |   /          \n"; //Sleep(i);
		std::cout << "\t	/   |   \\&&&&/   |   \\          \n"; //Sleep(i);
		std::cout << "\t	'===|    `""`    |==='          \n"; //Sleep(i);
		std::cout << "\t	    '--.______.--'              \n"; //Sleep(i);
	}

private:
	int artHandleA;
};


               