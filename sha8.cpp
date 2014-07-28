//#include "sha8.h"

// Compiler NOTE: g++ sha8.cpp -o sha8.exe -fno-exceptions

#include "sha8concourse.h"
#include "bar8.h"


/*
	SHA-8
*/

/*
cConcourse::cConcourse(int setStage)
{
	setStage = 0;
}
*/
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
	std::cout << "Welcome to SHA-8\n";
	//player.concourse_a(); 
	std::cin >> run;
	switch(run)
	{
		case 'a':
		cConcourse(concourse_a);
			// and that's why Passwords Were Created -- Easy Way ;) if (iActive = pw.......cin)
		//TODO: Destructor for cConcourse To Free Memory
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
