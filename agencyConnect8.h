#include <iostream>
#include <windows.h>
#include <conio.h> // _kbhit(); |  _getch();
#include <stdio.h>
//#include "hospital.h" //NotDevelopedAsOfYet

using namespace std;

class cAgencyConnect
{
public:
	cAgencyConnect();
	~cAgencyConnect(){}

	int aC_arch()
	{
		int sActive;
		int s1 = 300;
		char sCheck;
		cout << "\nPlease Enter Delay: 1(ms) - 1500(ms/1.5sec) for your desired Type-Speed Delay: ";
		cin >> sActive;
		s1 = sActive;
		Sleep(s1);
		cout << "Text Speed: " << s1 << "\n";
		Sleep(s1);
		cout << "Text Speed: " << s1 << "\n";
		Sleep(s1);
		cout << "Text Speed: " << s1 << "\n";
		cout << "Is " << s1 << "Acceptable as a speed? (y/n)";
		cin >> sCheck;
		if(sCheck == 'n')
		{	
			cout << "Please Try Again (DevLoop Closed -> Last Entry A.T.M): ";
			cin >> sActive;
			s1 = sActive;
			Sleep(s1);
			cout << "Text Speed: " << s1 << "\n";
			Sleep(s1);
			cout << "Text Speed: " << s1 << "\n";
			Sleep(s1);
			cout << "Text Speed: " << s1 << "\n";
		}
		else
		{
			cout << "Excellent.\n";
		}


		cout << "\n\n\n\n";
		cout << "\t\t\t*__________________________*\n\n"; Sleep(s1);
		cout << "\t\t\t         Uptown Rush       \n\n"; Sleep(s1);
		cout << "\t\t\t*__________________________*\n"; Sleep(s1);
		cout << "\n\n\n\n";

		cout << "It's not my fault shit's about to hit the fan...\n";
		cout << "Naturally, they always call me in to clean up their messes.\n";
		cout << "How many other assets do they have that can code Rook-Kit on the fly,\n";
		cout << "preform live FACS Profiling, and fire a pistol with precision and accuracy?!?\n";
		cout << "They just get too caught up in their work, and it goes stright to their heads...";

		cout << "\n\n\tPress Any Key When Ready...\n";
		_kbhit();
		_getch();

		cout << "Right, Well...Time to Re-Activate these Dark-Nodes...again.\n";
		darkArch8();


	}

	int darkArch8()
	{
		char iActive;
		char iActive2;
		cout << "I hope I remember protocol codes and locations...\n";
		cout << "\n\nPlease Choose one of the following...";
		cout << "\n[a]Double-Back to 7th Ave. & head to the Smoothie Deli";
		cout << "\n[b]Walk Cross-Town toward Lexington & 23rd stopping at Chock Full 'O' Nuts\n";
		cout << "\n[c]Call Jack with 777-Taxi Service\n";
		cin >> iActive;
		switch(iActive)
		{
			case 'a': case 'A':
				darkArch8_a();
				break;
			case 'b': case 'B':
				darkArch8_b();
				break;
			case 'c': case 'C':
				darkArch8_c();
				break;
			default:
				cout << "\tDevLoop Disabled: Advanced Functions A.T.M.\n";
				cout << "\tPlease Choose A, B, C\n";
				cin >> iActive2;
				switch(iActive2)
				{
					case 'a': case 'A':
						darkArch8_a();
						break;
					case 'b': case 'B':
						darkArch8_b();
						break;
					case 'c': case 'C':
						darkArch8_c();
						break;
				}
		}

	}

	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Street Crossing
	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	int darkArch8_a()
	{
		int s1 = 300;
		char crossActive;
		char walkCActive;

		cout << "\nYou make a quick left turn back onto 22nd Street\n";
		cout << "Even though the Deli's Sign has \"Smootie's\" spelled wrong, their food is pretty damn nice\n";
		cout << "As you are walking West, you find comfort in watching the people behind you in the ...\n";
		cout << "adjecent building's dark glass windows. It's become second nature for you.\n";
		cout << "As you approach the corner the speed of 7th Ave., traffic triggers a functional flashback...\n";
		cout << "\n\nYour mind races with probabilites & calculations, soon your adrenaline rushed\n\n";
		cout << "\t\tHit Any Key To See NeuralProcessing...\n";
		_kbhit();
		_getch();

		cout << "\nTime Check: 12:05:10 PM\n";
		cout << "~~Three Lanes Of Traffic\n"; Sleep(s1-10);
		cout << "~~Green Lights Northbound\n"; Sleep(s1-10);
		cout << "~~Green Lights Southbound\n"; Sleep(s1-10);
		cout << "~~Eight Taxi's: They Push Yellow Lights\n"; Sleep(s1-10);
		cout << "~~One Bus Heading Downtown\n"; Sleep(s1-10);
		cout << "~~Bus Stop @ 23rd In Middle-Lane: Lanes 2 & 3 Will Be Blind In 3.2 Seconds\n"; Sleep(s1-10);
		cout << "~~16 Cars Approaching -> Recent Red/Green Switch -> Accellerating\n"; Sleep(s1-10);
		cout << "~~Two Cars: Non-NY Plates -> Cautious Drivers\n"; Sleep(s1-10);
		cout << "~~Marginal Propensity To Be Hit: 15 Percent\n"; Sleep(s1-10);
		cout << "Time Check: 12:05:57\n\n";

		cout << "\t\tHit Any Key For Choices...\n";
		_kbhit();
		_getch();
		cout << "\n\t[A]Dash Across Street\n";
		cout << "\t[B]Wait 4-Seconds For Bus To Change Lanes Blocking Lanes 2 & 3\n";
		cout << "\t[C]Wait For Red Light\n";
		cin >> crossActive;

		switch(crossActive)
		{
			cout << "\n\nC++ Timer Added Here (Soon)!\n";
			case 'a': case 'A':
				cout << "You sprint 1/2 way into the Street...\n";Sleep(s1-10);
				cout << "You scare the Non-NY Drivers...\n";Sleep(s1-10);
				cout << "Driver A Swerves To The Right Hitting The Windows Of The Deli...\n";Sleep(s1-10);
				cout << "Driver B Hits His Breaks...\n";Sleep(s1-10);
				cout << "As the Bus Merges Into His Stop, An Eager Taxi Speeds Out From Behind...\n";Sleep(s1-10);

				cout << "\n\t\tHit Any Key When Ready...\n\n";
				_kbhit();
				_getch();

				cout << "The Eager Taxi Rear-Ends A speeding A Speeding Car In The Middle-Lane...\n";Sleep(s1-10);
				cout << "You Dash Toward The Sidewalk, Turning Traffic Has Blocked Your Way Back...\n";Sleep(s1-10);
				cout << "A Bicyclist Hops The Curb Clipping You As You Step-Up...\n";Sleep(s1-10);


				cout << "\n\t\tHit Any Key When Ready...\n\n";
				_kbhit();
				_getch();


				cout << "You Fall Backwards Into A Stopping Car's Hood...\n";Sleep(s1-10);
				cout << "\tYou Are Rushed To Hospital, Atleast You Will Live\n";Sleep(s1-10);
				cout << "\n\n\t[Insert Hospital Class Here]\n\n"; Sleep(600);
				cout << "\n\n\t-------**You Arrive At NYU General**---------\n";
				//cHospital();
				break;

			case 'b': case 'B':
				cout << "After waiting for the Bus to merge & approach its stop...\n";Sleep(s1-10);
				cout << "You begin sprinting toward the Deli's Sidewalk.\n";Sleep(s1-10);
				cout << "The Non-NY Drivers begin honking at you, but you know they will slow...\n";Sleep(s1-10);
				cout << "As they slow down, traffic behind them is blocked...\n";Sleep(s1-10);
				cout << "With the Bus blocking Lane 3, and the Two Non-NY'ers Slowing Lanes 1 & 2...\n";Sleep(s1-10);
				cout << "You safely walk across the second half of the street.\n";
				cout << "\n\n\t***Street Crossed***\n";

				cout << "\n\t\tHit Any Key To Enter The 'Smootie' Deli...\n\n";
				_kbhit();
				_getch();

				darkArch8_a_Deli();
				break;

			case 'c': case 'C':
				cout << "Since the light just turned Green, you will have a 3-Min wait.\n";Sleep(s1-10);
				cout << "While waiting you notice three men appear from the Downtown Direction...\n";Sleep(s1-10);
				cout << "They seem harmless, but in your line of work, you put nothing past you...\n";Sleep(s1-10);
				cout << "As they approach you, your instincts kick-in...\n";Sleep(s1-10);
				cout << "\n\t[A]Face Toward The Men In Defensive Stance\n";Sleep(s1-10);
				cout << "\t[B]Step Back Towards The Nearest Building's Wall And Observe\n\n";Sleep(s1-10);
				cin >> walkCActive;
					switch(walkCActive)
					{
						case 'a': case 'A':
							cout << "You prepare for a fight...\n";Sleep(s1-10);
							cout << "The men are 2.5 feet away from you...\n";Sleep(s1-10);
							cout << "They walk past you, crossing your line of sight...\n";Sleep(s1-10);


							cout << "\n\t\tHit Any Key When Ready...\n\n";
							_kbhit();
							_getch();

							cout << "As they pass-by, they distracted you from the third man...\n";Sleep(s1-10);
							cout << "A freelancer comes from behind and gently pricks your arm\n";Sleep(s1-10);


							cout << "\n\t\tHit Any Key When Ready...\n\n";
							_kbhit();
							_getch();

							cout << "Within moments you fall to the ground, paralyzed from poison\n";Sleep(s1-10);
							cout << "As people gather around you, your vital organs seize up,\n";Sleep(s1-10); 
							cout << "killing you before the next RedLight.";Sleep(s1-10);
							cout << "\n\n\t***KILLED***\n";

							//Player Death--------------------------------------------------------------------------------------------------------------------------------------------------------
							
							break;
						case 'b': case 'B':
							cout << "Out of intrinsic habit, you walk backwards against the wall...\n";Sleep(s1-10);
							cout << "The two men are in your peripherals and are about 2 feet away...\n";Sleep(s1-10);
							cout << "Moments later, as they enter your direct line of sight...\n";Sleep(s1-10);
							cout << "You notice a third man approach from the block you just came from...\n";Sleep(s1-10);


							cout << "\n\t\tHit Any Key When Ready...\n\n";
							_kbhit();
							_getch();

							cout << "Immediatly you face toward his direction...\n";Sleep(s1-10);
							cout << "His hand is cupped, holding a small object.\n";Sleep(s1-10);
							cout << "As he crosses uncomfortably close in front you,\n";Sleep(s1-10);
							

							cout << "\n\t\tHit Any Key When Ready...\n\n";
							_kbhit();
							_getch();

							cout << "You move to his blind-spot tripping him causing a needle to fall to the street.\n";Sleep(s1-10);
							cout << "He darts downtown, and the other two men are nowhere in sight.\n";Sleep(s1-10);
							cout << "The light turns Yellow, and you begin crosssing the street safely.\n";Sleep(s1-10);
							cout << "\n\n\t\t***Street Crossed***\n";

							cout << "\n\t\tHit Any Key To Enter The 'Smootie' Deli...\n\n";
							_kbhit();
							_getch();

							darkArch8_a_Deli();

							break;
						default:
							cout << "\n\tDevLoop Error || Wrong User Input!\n";
							cout << "Type: AgencyConnect To Restart At Beginning\n";
							break;
							return 0;
					}
				break;
			default:
				cout << "\tDevLoop Disabled: Advanced Functions A.T.M.\n";
				cout << "\tPlease Choose A, B, C\n";
				
		}
	}


	int darkArch8_a_Deli()
	{
		cout << "You walk through two open double-glass doors.\n";
		cout << "The cashier looks you up and down...\n";
		cout << "She is a fair looking woman, tall with dark-brown hair.\n";
		cout << "She gives off the vibe, \"I can handle myself...!\"\n";
		cout << "You get a brief feel that you are beeing profiled...it's normal.\n";

		cout << "\n\t\tHit Any Key To Continue...\n\n";
		_kbhit();
		_getch();

		cout << "It's been a while since you have been here...\n";
		cout << "\tI Hope they are still operating.\n";
		cout << "You notice her watch from across the room, large, like a man's Omega-Face\n";
		cout << "Before approaching her, you walk over to the ATM against the wall.\n";
		cout << "You think to yourself:\n";
		cout << "\tOne of the last few ATM's that isn't Bitcoin equipped, Classic\n";

		cout << "\n\t\tHit Any Key To Continue...\n\n";
		_kbhit();
		_getch();
		
		cout << "You open your wallet and pull out a typical Visa-Black Debit Card\n";
		cout << "After viewing your balance, you switch to a Deep Red Colored Card\n";
		cout << "The Logo shows an Oak-Tree encrusted with the words: ROC:10 on it\n";
		cout << "A few years after Bitcoin gained acceptance a team of developers...\n";
		cout << "Founded RedOakCoin:ROC. Though it is a DigitalCurrency akin to Bitcoin...\n";
		cout << "Orion, the lead Dev., cleaverly crafted the only true Encryption Base...\n";

		cout << "\n\t\tHit Any Key To Continue...\n\n";
		_kbhit();
		_getch();

		cout << "Working through ZK-Snarks using No-Local Operators and No Centralized System...\n";
		cout << "The Agency adopted its hyper-treading security protocol system months later.\n";
		cout << "For 0.0001 ROC anyone can sync Entangled-Like-Keys without a Central Master Node\n";
		cout << "Combind that with the nature of the Company to hide in plain sight,\n";
		cout << "and you have the most secure Login-System knwon to-date!\n";

		cout << "\n\t\tHit Any Key To Continue...\n\n";
		_kbhit();
		_getch();

		cout << "After inserting the ROC::Cold-Access Card the ATM starts to dial-out...\n";
		cout << "Dial-Up is so damn slow. It's the price we pay to keep modern-tech out...\n";
		cout << "The screen turns a the same deep red and accesses the ROC::Blockchain\n";
		cout << "Moments later I am prompted to enter my Cold-Access Card's Account Address\n";

		cout << "\n\t\tHit Any Key To Continue...\n\n";
		_kbhit();
		_getch();

		cout << "As I being to Key-In my digits the woman behind the register is drawn to my direction\n";
		cout << "She watches as I finish entering my Account.\n";
		cout << "I notice that she is a Lefty, her left hand is covering her watch...\n";
		cout << "Not blocking her watch, but defensivly speaking; she ready to act at a moments notice\n";
		cout << "I can't imagine what trigger that watch controls.\n";

		cout << "\n\t\tHit Any Key To Continue...\n\n";
		_kbhit();
		_getch();

		cout << "I finish entering in my address.\n";
		cout << "After I am finished, my TxID is displayed and a recipt beings to print...\n";
		cout << "On the paper is also a short string of Binary Digits...\n";
		cout << "Most likely Orion's cleaver ROC::Blockchain Access System Code.\n";
		cout << "It would be too easy to just use a chat protocol, besides, communications lead to exploits.\n";
		cout << "It's more secure this way, anyway.\n";

		cout << "\n\t\tHit Any Key To Continue...\n\n";
		_kbhit();
		_getch();

		cout << "I bring the recipt to the cashier as noted on the bottom...\n";
		cout << "I think she's relieved as she stopped pointing her watch at me.\n";
		cout << "What ever it did, she wasn't going to have to use it.\n";

		cout << "\n\t\tHit Any Key To Continue...\n\n";
		_kbhit();
		_getch();

		cout << "She looks at the ATM's print-out and back at me\n";
		cout << "Then, taking the recipt in one hand, and her other on the register...\n";
		cout << "She key's in the Binary Digits in seconds.\n";
		cout << "I catch what appears to be the slither of smile, or a smirk, I can't tell\n";
		cout << "I am handed a Bagel with Cream Cheese and am instructed to sit on the stools in the back\n";

		cout << "\n\t\tHit Any Key To Continue...\n\n";
		_kbhit();
		_getch();

		cout << "The food was always good here, you can't beat NYC Bagels!\n";
		cout << "\n\t******DEV-NOTE: Begin Agency Contact Stream**************\n";
	}
	int darkArch8_b()
	{
		cout << "\nLex & Chock Full 'O' Nuts\n";
	}
	int darkArch8_c()
	{
		cout << "\n777-Cab Service\n";
	}

private:

};