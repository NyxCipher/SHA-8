#include <iostream>
#include <windows.h>
#include <conio.h> // _kbhit(); |  _getch();
#include <stdio.h>
//#include <curses.h> // pdcurses for OnKeyPress
//#include "sha8.h"
//#include "varState.h"
//#include "sha8concourse.h"
#include "tools.h"
using namespace std;

cDevice::cDevice(int set)
{
	set = 1;
	//getName();


}

class cBar
{
public:
	cBar();
	~cBar() {}

	int bar_a()
	{	
		char id;
		cDevice forkB(1);

		//SCREEN *s = newterm(NULL, stdin, stdout);
		//initscr(); // init curses but clears screen
		cout << "\n\n\tPress Any Key To Enter The Bar...";

		//endwin(); //close curses

		cout << "\n\n\n\n";
		cout << "\t\t\t*__________________________*\n\n"; Sleep(100);
		cout << "\t\t\t       O'Murphy\'s Pub      \n\n"; Sleep(100);
		cout << "\t\t\t*__________________________*\n"; Sleep(100);
		cout << "\n\n\n\n";
		cout << "The last time I was in a bar like this was in Tangeir,";
		cout << "Moracco.";
		cout << "\n\n You see your old friend and sit down at a small circular";
		cout << "\ntable across from him. Your back to facing the door, and it makes";
		cout << "\nuneasy; but after all he was there first and had priority seating.";
		cout << "\nYou look around the cold dark bar and wonder what it has become of it...";
		cout << "\nThe once new TV's from 2014 or the Darts hanging off the dart board.";
		cout << "\nThe place is doing business, but filled with the people that once occupied";
		cout << "\nit during their college days and have come to make nothing of their lives.";
		cout << "\nI guess thats why he picked this place, old technology, and a crowd that doesn't";
		cout << "\nbother to listen to others; let alone cares and can do anything about what others say";
		cout << "\nIt\'s frozen in time...";
		//initscr(); // init curses
		cout << "\n\n\tPress Any Key When Ready...\n";
		_kbhit();
		_getch();
		//endwin(); //close curses

		cout << "\n\n\"Why the fuck did you have to choose a place frozen in time?!?!\"";
		cout << "\n\tOh come on... ";

		//initscr(); // init curses
		//newterm(NULL, stdin, stdout);
		cout << "\n\n\tPress Any Key To Set Your Name...\n\n";
		_kbhit();
		_getch();
		//endwin();

		//initscr();
		cout << "\n\tPlease Enter Your User ID (Name): ";
		//endwin();
		//endwin(); //close curses
		forkB.setID();
		forkB.confirmUsrName();
		cout << "\n\tOh come on " << forkB.getName() << " this was the pace to be back in College!";
		cout << "\n\n\tDEV ERROR --> Need Referance Pointer To Display Name!!!!!\n";
		cout << "\n\"Okay, Well what's this all about, what am I here?\"";
		cout << "\n\tDo you remember a little Beta-Project back in 2006 called, Bitcoin?";
		cout << "\n\"Yea, how could I not...\"";
		cout << "\n\tWell, Since the Quantum 51 Percent Attack of 2032...";
		cout << "\n\"Wait! I thought our Employer cleared the air about that, how it was nothing";
		cout << "\nmore than a Proof-Of-Concept measure?\"";
		cout << "\n\tWell, to the world, nothing was changed and the BlockChain, oh I miss using that word,";
		cout << "\n\tthe BlockChain showed no anomolies...However, they were prepared and re-coded a malicious chain.";

		cout << "\n\n\tPress Any Key When Ready...\n\n";
		_kbhit();
		_getch();

		cout << "\n\tThey wrote a very small program in Binary Code, Assembly with out the Mnemunics...";
		cout << "\n\tThis would be their explot. When faced with the Open-Source nature of Bitcoin, and the Dev's";
		cout << "\n\tUnwillingness to comply with an embedded exploit or accidential 0-Day, they sought out other options";
		cout << "\n\tThe reason we are here right now...Right now, as we speek, their servers are priming the explot software";
		cout << "\n\tIt is searching systematically through the TxID's of the BlockChain back to its infancy pulling out the";
		cout << "\n\thardcoded 1's and 0's that make up their exploit.";
		cout << "\n\tI know it seems impossible, but it happened and the Dev's unknowingly caused it.";
		cout << "\n\tAfter the initial attack, the Dev's, as predicted, fixed the exploit and uploaded the new code.";
		cout << "\n\tDue to the size of fix, the world needed to reindex their blockchains. What no one knew was that the";
		cout << "\n\taltered-TxId's of the BlockChain could also be read by the updated clients as if nothing was wrong";
		cout << "\n\tBitcoin went back online, the 51 Attack appeared to have done nothing, and The Company Appoligized Publically";
		cout << "\n...what does the embedded code do...?";

		cout << "\n\n\tPress Any Key When Ready...\n\n";
		_kbhit();
		_getch();

		cout << "\n\tIt opens up a direct and secured tunnel into every computer that was tainted";
		cout << "\nWell, what do you propose we do about this then?";
		cout << "\n\tWe need to gain access to the control system for the Binary Exploit and...";
		cout << "\nHold Up! You mean to tell me, you want to infiltrate Command?!?!";
		cout << "\nThen, gain access to their Quantum Labratories!";
		cout << "\n\tYes. And after that we need to erase and burn the Binary Translator";
		cout << "\n\tIf they loose the locations of the Program bits then it can never be used";
		cout << "\nBut the program will still be there.";
		cout << "\n\tIt\'s just useless 1\'s and 0\'s inside of Transaction Id\'s after the Translator goes offline";
		cout << "\n\tNo one will know anything, and everyhting will continue running as it should.";

		cout << "\n\n\tPress Any Key When Ready...\n\n";
		_kbhit();
		_getch();

		cout << "\n..You called on me, what do you need?";
		cout << "\n\tWe need another 51 Percent Attack and we need to close the exploit for good";
		cout << "\n ";
		cout << "\n\tWITH OUT, anyone finding out anything.";
		cout << "\nFair enough, where do I start?";
		cout << "\n\tCommendeer All Quantum Systems Known, Build A Beowulf-BotNet, Kill Anyone Who Stands In Your Way...";
		cout << "\nI'm Keeping The Bitcoins We Mine";
		cout << "\n\tConsider It Payment, I have all the coins I'll need to last me into the afterlife";
		cout << "\n\tThere is a Gov't Operated Quantum System Underneath Grand Central Terminal, GodSpeed!";

		cout << "\n\n\tPress Any Key When Ready...\n\n";
		_kbhit();
		_getch();

		cout << "\nThe Bar door closes behind. As you look in the reflection of the City MTA bus idling";
		cout << "\nat its stop, you see your contact has already vanished out of the back door of the Pub.";
		cout << "\n\tWho does he think I am, The Bloody Terminator";
		cout << "\n\tI swear, How am I going to infiltrate an underground compound?";

		cout << "\n\n\tPress Any Key When Ready...\n\n";
		_kbhit();
		_getch();

		cout << "\nI need some tools...";
		cout << "\n\t[a] Single Silenced Baretta 9mm (Cleaned)";
		cout << "\n\t[b] USB Drive Containing A Worm";
		cout << "\n\t[c] BlackArch PenTest Primed Tablet";
		cout << "\n\nI only have time to get one and then make my way to GrandCentral...";

		char iActive;

		cin >> iActive;
    	
    	while (iActive)
    	{
	 		switch(iActive)
	 		{
	    	case 'd':
	    		cout << "Unavilable At This Time";
	    		//user.qubitDisplay();
	    		cin >> iActive;
	    		break;
	    		//if (iActive = 'd')
	    		//{
	    		//	user.qubitDisplay();
	    		//	//cin >> iActive; // it just feels so good to finally get a looping user option right ;)
				//}
				if (iActive != 'd')
				{
					//switch(iActive)
					//{
					case 'a':
						grandA();
						return 0; // return 0; instead of 'break;' orElse Member's Loop Infinitly :/
					case 'b':
						grandB();
						return 0;
					case 'c':
						grandC();
						return 0;
					case 'x':
						cout << "X";
						//concourse_a1_x();
						return 0;
					default:
						cout << "\n\tHrmmm...I Do Believe Something Went Wrong...\n";
						cin >> iActive;
						break;
				}
			}
		}


		//endwin();
		//delscreen(NULL);
		
		cout << "\n\nTest";
		
		return 0;
	}

	int grandA()
	{
		cout << "gA";
	}

	int grandB()
	{
		cout << "gB";
	}

	int grandC()
	{
		cout << "gC";
	}
};