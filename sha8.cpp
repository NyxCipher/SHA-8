//#include "sha8.h"

// Compiler NOTE: g++ sha8.cpp -o sha8.exe -fno-exceptions -lpdcurses

#include "sha8concourse.h"
#include "bar8.h"
#include "agencyConnect8.h"
#include <string>


/*
	SHA-8
*/

/*
cConcourse::cConcourse(int setStage)
{
	setStage = 0;
}
*/

cAgencyConnect::cAgencyConnect()
{
	aC_arch();
}

cBar::cBar()
{
	bar_a();
}

cConcourse::cConcourse()
{
	char iActive;
	concourse_a();
	//int concourse_b();
	//int concourse_a1();
}


int main()
{
	char run;

	const string PASSWORD = "bar8";
	const string PASSWORD_2 = "AgencyConnect";

	string pwActive;

	std::cout << "Welcome to SHA-8\n";
	//player.concourse_a(); 
	std::cin >> run;
	switch(run)
	{

//DeveloperLoop--------------------------------------
		case 'x':
		std::cout << "\n\t\t<<--SHA-8 Level PassGate-->>\n";
		std::cin >> pwActive;

			if ( pwActive == PASSWORD )
			{
				cBar(bar_a);
				break;
			}
			else if ( pwActive == PASSWORD_2 )
			{
				cAgencyConnect(aC_arch);
				break;
			}
			else
			{
				std::cout << "ERROR: Or Buffer Cheat Detected\n";
				std::cout << "Unless you know C++, and can see this is a future place-holder for an Anti::Mem-Cheat System\n";
				return 0;
			}

//Standard::SHA-8 GameMode----------------------------
		case 'a':
		cConcourse(concourse_a);
			// and that's why Passwords Were Created -- Easy Way ;) if (iActive = pw.......cin)
		//TODO: Destructor for cConcourse To Free Memory
		std::cout << "\n\t\t<<--SHA-8 Level PassGate-->>\n";
		std::cin >> pwActive;

			if ( pwActive == PASSWORD )
			{
				cBar(bar_a);
				break;
			}
			else if ( pwActive == PASSWORD_2 )
			{
				cAgencyConnect(aC_arch);
				break;
			}
			else
			{
				std::cout << "ERROR: Or Buffer Cheat Detected\n";
				std::cout << "Unless you know C++, and can see this is a future place-holder for an Anti::Mem-Cheat System\n";
				return 0;
				break;
			}

		//Pre-PWActive Loop
		cBar(bar_a); // yay, I did it
		std::cout << "Ran Concourse_A\n";
		break;

		//case 'b':
		//cConcourse(concourse_a2);
		//std::cout << "Ran Concourse_A\n";
		//break;
	}

	return 0;
}
