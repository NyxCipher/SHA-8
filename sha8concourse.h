#include <iostream>
#include <windows.h>
#include "sha8.h"
#include "varState.h"
//#include "bar8.h"

using namespace std;


//void cFreelancer::setBTC(int newBTC)
cFreelancer::cFreelancer(int initialSet)
{
	setBTC(initialSet);
	setSHA(initialSet);
	setStealth(initialSet);
	setPaymentVar(initialSet);
}

cVarState::cVarState(int initialSet)
{
	setNixLink(initialSet - 1);
}

//void cFreelancer::setBTC(int newBTC)
//{
//	btc = newBTC;
//}

void mine();

class cConcourse
{
public:
	cConcourse();
	~cConcourse() {}

	int concourse_a()
	{
		char iActive = 'x';

		std::cout << "\nYou've awoken abruptly in your bed...\n";
		std::cout << "The sound of the city rushes through your ears,\n";
		std::cout << "You are instantly alert and aware\n";
		std::cout << "Your LexWell Auto Cup begins to brew your morning cup of coffe.\n";
		std::cout << "The idea of 'Always On' technology never truely was your kind.\n\n";
		std::cout << "You notice there is a dark brown Envelope slid under your door.\n";
		std::cout << "In tandem, and with your perpherial vision you catch the blinking\n" ;
		std::cout << "'Notification' light on your device.\n";
		std::cout << "\nShould I check my messages first [a], or the envelope [b]???";
		std::cin >> iActive;

		if (iActive == 'q')
		{
			return concourse_a();
		}
			if (iActive == 'a')
			{
				concourse_a1();
				return 0;
			}
			else if (iActive == 'b')
			{
				concourse_a2();
				return 0;
			}
	}

	// Branch 1: Device Message
	int concourse_a1()
	{
		
		// define user
		cFreelancer user(1);
		// Text sleep timer; 1000ms Base
		int s = 20;
		// Device sleep text timer; 1000ms Base
		int s2 = 60;
		// user iActive prompts
		int s3 = 50;
		// User cin Input
		char iActive = 'x';
		cout << "\t\t\t*__________________________*\n"; Sleep(1000);

    	cout << "\t\t\t      U"; Sleep(s); cout << "n"; Sleep(s); cout << "l"; Sleep(s); cout << "o"; Sleep(s); cout << "c"; Sleep(s); cout << "k"; Sleep(s); cout << "i"; Sleep(s); cout << "n"; Sleep(s); cout << "g"; Sleep(s);
		cout << "D"; Sleep(s); cout << "e"; Sleep(s); cout << "v"; Sleep(s); cout << "i"; Sleep(s); cout << "c"; Sleep(s); cout << "e\n";
    	//cout << "\t\t\t      Unlocking Device     \n"; Sleep(1000);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*             v            *\n"; Sleep(s2);
		cout << "\t\t\t*                          *\n"; Sleep(s2);
		cout << "\t\t\t*   {--One New Message--}  *\n"; Sleep(s2);
		cout << "\t\t\t*                          *\n"; Sleep(s2);
    	cout << "\t\t\t*__________________________*\n\n\n\n"; Sleep(1000);
    	
    	cout << "\n\n";
    	cout << "\tTo: Ax-87716s55Sa60dxf0sShA4xqQ0";
    	cout << "\n\t From: {-----Control Chain Overridve-----}";
    	cout << "\n\n";
    	cout << "\tOkay Agent, it's time we initiate Task: ~ChainState, prepare yourself.";
    	cout << "\n\tI have provided you with as much as I can for the time being;";
    	cout << "\n\tMoving things around these days can truely be one daughnting task.";
    	cout << "\n\n\tReach out to some of your old connections; The one's from";
    	cout << "\n\tback in the 'Cold' Days.";

    	cout << "\n\n\n";
    	cout << "\tPress Any Key To Recieve Your \'GoBag\'\n\n";
    	char hold;
    	cin >> hold;
    	if (hold)
    		{
		    	// Device Packge: Recieve Items
		    	user.paymentVar(); // sets +1 incrementing per each paymentVar()++ to mine();
		    	user.mine();
		    	user.clearPayment();
		    	//user.mine();
		    	user.train();
		    	user.hardware();
		    }

    	//cFreelancer(setBTC());

    	/* ((Moved To qubitDisplay ))
    	cout << " ------------------------------------------------------------------------------\n";
    	cout << "\tWallet: " << user.getBTC(); cout << " BTC";
    	cout << "\t   Stealth: " << user.getStealth(); cout << " Units";
    	cout << "\tMiner: " << user.getSHA(); cout << " Hash";
    	cout << "\n ------------------------------------------------------------------------------\n";
		*/

    	//cout << "\n\nFrom Here On Out You May Choose View Your [d] Display at any CheckPoint";
    	cout << "\n\nJudging by the message header, and nearly impossible ability to mask a \'From:\'";
    	cout << "\nYou quickly come to the conclusion that the message is from Octagon Operations.";
    	cout << "\nKnowing this you rush over to your *NixLink-Terminal and...";Sleep(s3);
    	cout << "\n\n\tInitiate A System Wide Shutdown [a]"; Sleep(s3);
    	cout << "\n\tPreform a PostFix Failsafe Corrupt & Wipe [b]"; Sleep(s3);
    	cout << "\n\tBroadcast \"Sudo Active\" accross your network [c]"; Sleep(s3);
    	cout << "\n\tSet Terminal To Burn and Leave ASAP [x]"; Sleep(s3);
		cout << "\n\n\tStatus Update: Press [d] For Access The Qubit Device Prompt\n";
    	cin >> iActive;
    	char iActive_d;

    	while (iActive)
    	{
	 		switch(iActive)
	 		{
	    	case 'd':
	    		user.qubitDisplay();
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
						concourse_a1_a();
						return 0; // return 0; instead of 'break;' orElse Member's Loop Infinitly :/
					case 'b':
						concourse_a1_b();
						return 0;
					case 'c':
						concourse_a1_c();
						return 0;
					case 'x':
						concourse_a1_x();
						return 0;
					default:
						cout << "\n\tHrmmm...I Do Believe Something Went Wrong...\n";
						cin >> iActive;
						break;
				}
			}
		}

		return 0;
	}
	int concourse_a1_a()
	{
		int s = 1000; // Typing
		int s2 = 800; // Display
		int s3 = 1000; //Checking
		char iActive;

		cout << "\nQ:\\>"; Sleep(s);
		cout << "Q:\\>terminate -a LimeNet\n"; Sleep(s);
		cout << "Q:\\>Warning, Are You Root?\n"; Sleep(s + 500);
		cout << "Q:\\>sudo -rewind -t 1\n"; Sleep(s);
		cout << "Q:\\>password: \n"; Sleep(s + 600);
		cout << "Q:\\>\n"; Sleep(s);
		cout << "Q:\\>are you sure (y\\n)\n"; Sleep(s + 1100);
		cout << "Q:\\>y\n"; Sleep(3000);
		cout << "Q:\\>Connecting To Quantum LimeNet Nodes"; Sleep(s2 + 800);
		cout << "\nQ:\\>NewYorkCity: "; Sleep(s2 + 675); cout << "Found";
		cout << "\nQ:\\>Chicago: "; Sleep(s2 + 887); cout << "Found";
		cout << "\nQ:\\>Dallas: "; Sleep(s2 + 582); cout << "Found";
		cout << "\nQ:\\>Miami: "; Sleep(s2 + 1300); cout << "Found";
		cout << "\nQ:\\>NewOrleans: ";  Sleep(s2 + 482); cout << "Found";
		cout << "\nQ:\\>MexicoCity: "; Sleep(s2 + 327);  cout << "Found";
		cout << "\nQ:\\>PortOfLA: ";  Sleep(s2 + 665); cout << "Found";
		cout << "\nQ:\\>Vancouver: "; Sleep(s2 + 448);  cout << "Found";
		cout << "\nQ:\\>Hambourg: ";  Sleep(s2 + 776); cout << "Found";
		cout << "\nQ:\\>VaticanCity: "; Sleep(s2 + 210);  cout << "Found";
		cout << "\nQ:\\>F6: ";  Sleep(s2 + 5000); cout << "Terminal Error"; Sleep(1200);
		cout << "\nQ:\\>Initiating \'Entanglement\' Protocol"; Sleep(8000);
		cout << "\nQ:\\>10 of 11 Nodes En.Sync"; Sleep(2376);
		cout << "\nQ:\\>Locking Out All Terminals"; Sleep(3286);
		cout << "\nQ:\\>Forcing Kernel.Addressd ASM Override Shutdown"; Sleep(4000);
		cout << "\nQ:\\>";
		cout << "\nQ:\\>NewYorkCity: "; Sleep(s3); cout << "Offline";
		cout << "\nQ:\\>Chicago: "; Sleep(s3); cout << "Offline";
		cout << "\nQ:\\>Dallas: "; Sleep(s3); cout << "Offline";
		cout << "\nQ:\\>Miami: "; Sleep(s3); cout << "Offline";
		cout << "\nQ:\\>NewOrleans: ";  Sleep(s3); cout << "Offline";
		cout << "\nQ:\\>MexicoCity: "; Sleep(s3);  cout << "Offline";
		cout << "\nQ:\\>PortOfLA: ";  Sleep(s3); cout << "Offline";
		cout << "\nQ:\\>Vancouver: "; Sleep(s3);  cout << "Offline";
		cout << "\nQ:\\>Hambourg: ";  Sleep(s3); cout << "Offline";
		cout << "\nQ:\\>VaticanCity: "; Sleep(s3);  cout << "Offline";
		cout << "\nQ:\\>F6: ";  Sleep(s2 + 5000); cout << "Disconnected"; Sleep(1200);
		cout << "\nQ:\\>No Available Nodes...";

		//cout << "\n\n\tThis will sure come in handy later!";

		cVarState userT(1); // Set & Declare VariableState For Later Classes
		userT.setNixLink(1);

		//cout << "Terminal Stats: " << userT.getNixLink() << "\n"; //-----For Dev: Debug
		
		/* FOR VAR STATE USE
		if (userT.getNixLink() == 1) // 'setNixLink(1)' To Store User's VariableStates in cVarState
		{
			cout << "RUN!!!!";
		}
		*/
		cout << "\n\n\n";
		cout << "\tIt was sure nice of them to give me the new *NixLink";
		cout << "\n\tEven though it's only a Hyper-Modified Linux Shell,";
		cout << "\n\t...I have a Quantum Computer! Well, Quantum Hub";
		cout << "\n\tto be exact. Using this, well, it's like lighting a match;";
		cout << "\n\tGetting a Node in each major city, now that was the challenge.";
		cout << "\n\n\n";

		cout << "If you ready, let's leave the Apartment...";
		cin >> iActive;

		cout << "\n\tAs you step out onto the NewYorkCity streets";
		cout << "\n\tyou glance up at the Summer Morning Sun.";
		cout << "\n\tIt shines bright and reflects off the glare of your sunglasses.";
		cout << "\n\tCar's are rushing down 7th Ave., but you block is quiet.";
		cout << "\n\tAs much as you want to stay and meander around, aimlessly for hours,";
		cout << "\n\tyou can\'t. Your Quantum Qubit-Phone has been fully loaded:";
		cout << "\n\tAs you approach the corner of 7th and 9th you breifly reminisce:";
		cout << "\n\tI remember when a single BTC was worth not more than a $20 Bill.";
		cout << "\n\tIt didn't take long for Microsoft's, Google's and The Gov't's ";
		cout << "\n\tschematics for a Quantum Computer leak. An ADA based OS... ";
		cout << "\n\twas the only kind that could run Qubits; not just 1's and 0's,";
		cout << "\n\tor billions of On\\Off statements, but -1, 0, 1's, and 2's,";
		cout << "\n\tand that's just for the software! The actual Qubits' run  entangled...";
		cout << "\n\twith +\\- counter-parts! It's brilliant, simply brilliant.";
		cout << "\n\tTwo Bitcoins, I can live in Monaco with this package today...";
		
		cout << "\n\n\tOn you'r ready...";
		cin >> iActive;
		

		cout << "\n\tYou glance up at the street sign only to find...";
		cout << "\n\tthat you had already crossed the street.";
		cout << "\n\tLooking at your phone you recall your training with the Oc.Sat program";
		cout << "\n\tA grey market thrives on strictly anonymous currencies.";
		cout << "\n\tIt's not a place for cocaine and extacy, but the necessities\n";
		cout << "\n\t---You Browse Today's Inventory List---\n";
		cin >> iActive;

		int s1 = 200;
		Sleep(s1);
		cout 	 << "\t\t*______________________________________________*\n"; Sleep(s1);
     	cout     << "\t\t                Oc.Sat Comm-Link               \n"; Sleep(s1);
     	cout     << "\t\t                ----------------               \n"; Sleep(s1);
     	cout     << "\t\t         100 QPh/s Anon. P2-Connection         \n"; Sleep(s1);
     	cout     << "\t\t             Enc. Phone (Call/SMS)             \n"; Sleep(s1);
     	cout     << "\t\t            Micro-EMP Charge (100ft)           \n"; Sleep(s1);
     	cout     << "\t\t               CB-Transistor Radio             \n"; Sleep(s1);
     	cout     << "\t\t          DataCoin Universal Storage (1)       \n"; Sleep(s1);
     	cout     << "\t\t           Passport/ID Renewal Service         \n"; Sleep(s1);
     	cout     << "\t\t         No-Tech. Magnum (Serial System)       \n"; Sleep(s1);
     	cout     << "\t\t               -------------------             \n"; Sleep(s1);
    	cout     << "\t\t*______________________________________________*\n\n\n\n"; Sleep(s1);

    	cout << "\n\n\tOh how the world hasn't changed one damn bit...";
    	cout << "\n\n\t...Shall we venture into the directive??";
    	cin >> iActive;

    	Sleep(2000);

    	cout << "\n\n\tRemembering your directive you slide your device into your pocket";
    	cout << "\n\tand change course along 6th Ave. heading Uptown.";
    	cout << "\n\t";
    	cout << "\tClearing Section: Please Type 'AgencyConnect' when prompted";

    	return 0;
	}


	int concourse_a1_b()
	{
		int s = 1000; // Typing
		int s2 = 800; // Display
		int s3 = 1000; //Checking
		char iActive;

		cout << "\nQ:\\>"; Sleep(s);
		cout << "Q:\\>Failsafe -a LimeNet\n"; Sleep(s);
		cout << "Q:\\>Warning, Are You Root?\n"; Sleep(s + 500);
		cout << "Q:\\>sudo -rewind -t 1\n"; Sleep(s);
		cout << "Q:\\>password: \n"; Sleep(s + 600);
		cout << "Q:\\>\n"; Sleep(s);
		cout << "Q:\\>are you sure (y\\n)\n"; Sleep(s + 1100);
		cout << "Q:\\>y\n"; Sleep(3000);
		cout << "Q:\\>Connecting To Quantum LimeNet Nodes"; Sleep(s2 + 800);
		cout << "\nQ:\\>NewYorkCity: "; Sleep(s2 + 675); cout << "Found";
		cout << "\nQ:\\>Chicago: "; Sleep(s2 + 887); cout << "Found";
		cout << "\nQ:\\>Dallas: "; Sleep(s2 + 582); cout << "Found";
		cout << "\nQ:\\>Miami: "; Sleep(s2 + 1300); cout << "Found";
		cout << "\nQ:\\>NewOrleans: ";  Sleep(s2 + 482); cout << "Found";
		cout << "\nQ:\\>MexicoCity: "; Sleep(s2 + 327);  cout << "Found";
		cout << "\nQ:\\>PortOfLA: ";  Sleep(s2 + 665); cout << "Found";
		cout << "\nQ:\\>Vancouver: "; Sleep(s2 + 448);  cout << "Found";
		cout << "\nQ:\\>Hambourg: ";  Sleep(s2 + 776); cout << "Found";
		cout << "\nQ:\\>VaticanCity: "; Sleep(s2 + 210);  cout << "Found";
		cout << "\nQ:\\>F6: ";  Sleep(s2 + 5000); cout << "Terminal Error"; Sleep(1200);
		cout << "\nQ:\\>Initiating \'Entanglement\' Protocol"; Sleep(8000);
		cout << "\nQ:\\>10 of 11 Nodes En.Sync"; Sleep(2376);
		cout << "\nQ:\\>Forcing Tunnel Operations"; Sleep(3286);
		cout << "\nQ:\\>Forcing Kernel.Addressd ASM Override: Tunnela."; Sleep(4000);
		cout << "\nQ:\\>";
		cout << "\nQ:\\>NewYorkCity: "; Sleep(s3); cout << "Responsive";
		cout << "\nQ:\\>Chicago: "; Sleep(s3); cout << "Responsive";
		cout << "\nQ:\\>Dallas: "; Sleep(s3); cout << "Responsive";
		cout << "\nQ:\\>Miami: "; Sleep(s3); cout << "Responsive";
		cout << "\nQ:\\>NewOrleans: ";  Sleep(s3); cout << "Responsive";
		cout << "\nQ:\\>MexicoCity: "; Sleep(s3);  cout << "Responsive";
		cout << "\nQ:\\>PortOfLA: ";  Sleep(s3); cout << "Responsive";
		cout << "\nQ:\\>Vancouver: "; Sleep(s3);  cout << "Responsive";
		cout << "\nQ:\\>Hambourg: ";  Sleep(s3); cout << "Responsive";
		cout << "\nQ:\\>VaticanCity: "; Sleep(s3);  cout << "Responsive";
		cout << "\nQ:\\>F6: ";  Sleep(s2 + 5000); cout << "Weak - Responsive"; Sleep(1200);
		cout << "\nQ:\\>Uploading Su Backdoor...";
		int s8 = 1000;
		cout << "\n\nQ:\\>[="; Sleep(s8); cout << "="; Sleep(s8); cout << "="; Sleep(s8 - 100); cout << "="; Sleep(s8 - 150); cout << "="; Sleep(s8 - 200); cout << "="; Sleep(s8 - 250); cout << "="; Sleep(s8 - 300); cout << "="; Sleep(s8 - 350); cout << "="; Sleep(s8 - 400); cout << "="; Sleep(s8 - 450); cout << "="; Sleep(s8 - 500); cout << "="; Sleep(s8 - 500); cout << "="; Sleep(s8 - 500); cout << "="; Sleep(s8 - 200); cout << "="; Sleep(s8 - 100); cout << "="; Sleep(s8); cout << "="; Sleep(s8 - 100); cout << "="; Sleep(s8 - 300); cout << "="; Sleep(s8 - 50); cout << "="; Sleep(s8); cout << "=]"; Sleep(1000);
		cout << "\\nnQ:\\>Uploading Complete - Postfix \'Sleep\'' Prepared";


		cVarState userT(1); // Set & Declare VariableState For Later Classes
		userT.setNixLink(2);
		cFreelancer user(1);
		cout << "\n\n\t\t ";
		user.train();

		cout << "\n\n\tThis will surely come in handy later!";
		//cout << "Terminal Stats: " << userT.getNixLink() << "\n"; //-----For Dev: Debug
		
		/* FOR VAR STATE USE
		if (userT.getNixLink() == 1) // 'setNixLink(1)' To Store User's VariableStates in cVarState
		{
			cout << "RUN!!!!";
		}
		*/
		cout << "\n\n\n";
		cout << "\tIt was nice of them to give me the new *NixLink.";
		cout << "\n\tEven though it's only a Hyper-Modified Linux Shell,";
		cout << "\n\t...I have a Quantum Computer! Well, Quantum Hub";
		cout << "\n\tto be exact. Using this, well, it's like lighting a match;";
		cout << "\n\tGetting a Node in each major city, now that was the challenge.";
		cout << "\n\n\n";

		cout << "If you ready, let's leave the Apartment...";
		cin >> iActive;

		cout << "\n\tOkay! I feel much safer now that I have my SuperUser Backdoor on my Quantum Hub";
		cout << "\n\n";
		cout << "\n\tAs you step out onto the NewYorkCity streets";
		cout << "\n\tyou glance up at the Summer Morning Sun.";
		cout << "\n\tIt shines bright and reflects off the glare of your sunglasses.";
	}
	int concourse_a1_c()
	{
		int s = 1000; // Typing
		int s2 = 800; // Display
		int s3 = 1000; //Checking
		char iActive;

		cout << "\nQ:\\>"; Sleep(s);
		cout << "Q:\\>CommLink -a LimeNet\n"; Sleep(s);
		cout << "Q:\\>Warning, Are You Root?\n"; Sleep(s + 500);
		cout << "Q:\\>sudo -rewind -t 1\n"; Sleep(s);
		cout << "Q:\\>password: \n"; Sleep(s + 600);
		cout << "Q:\\>\n"; Sleep(s);
		cout << "Q:\\>are you sure (y\\n)\n"; Sleep(s + 1100);
		cout << "Q:\\>y\n"; Sleep(3000);
		cout << "Q:\\>Connecting To Quantum LimeNet Nodes"; Sleep(s2 + 800);
		cout << "\nQ:\\>NewYorkCity: "; Sleep(s2 + 675); cout << "Found";
		cout << "\nQ:\\>Chicago: "; Sleep(s2 + 887); cout << "Found";
		cout << "\nQ:\\>Dallas: "; Sleep(s2 + 582); cout << "Found";
		cout << "\nQ:\\>Miami: "; Sleep(s2 + 1300); cout << "Found";
		cout << "\nQ:\\>NewOrleans: ";  Sleep(s2 + 482); cout << "Found";
		cout << "\nQ:\\>MexicoCity: "; Sleep(s2 + 327);  cout << "Found";
		cout << "\nQ:\\>PortOfLA: ";  Sleep(s2 + 665); cout << "Found";
		cout << "\nQ:\\>Vancouver: "; Sleep(s2 + 448);  cout << "Found";
		cout << "\nQ:\\>Hambourg: ";  Sleep(s2 + 776); cout << "Found";
		cout << "\nQ:\\>VaticanCity: "; Sleep(s2 + 210);  cout << "Found";
		cout << "\nQ:\\>F6: ";  Sleep(s2 + 5000); cout << "Terminal Error"; Sleep(1200);
		cout << "\nQ:\\>Initiating \'Entanglement\' Protocol"; Sleep(8000);
		cout << "\nQ:\\>10 of 11 Nodes En.Sync"; Sleep(2376);
		cout << "\nQ:\\>Sending: \'I Am Sudo Active\'"; Sleep(3286);
		cout << "\nQ:\\>Encryption Protocol Primed"; Sleep(4000);
		cout << "\nQ:\\>";
		cout << "\nQ:\\>NewYorkCity: "; Sleep(s3); cout << "Recieved";
		cout << "\nQ:\\>Chicago: "; Sleep(s3); cout << "Recieved";
		cout << "\nQ:\\>Dallas: "; Sleep(s3); cout << "Recieved";
		cout << "\nQ:\\>Miami: "; Sleep(s3); cout << "Recieved";
		cout << "\nQ:\\>NewOrleans: ";  Sleep(s3); cout << "Recieved";
		cout << "\nQ:\\>MexicoCity: "; Sleep(s3);  cout << "Recieved";
		cout << "\nQ:\\>PortOfLA: ";  Sleep(s3); cout << "Recieved";
		cout << "\nQ:\\>Vancouver: "; Sleep(s3);  cout << "Recieved";
		cout << "\nQ:\\>Hambourg: ";  Sleep(s3); cout << "Recieved";
		cout << "\nQ:\\>VaticanCity: "; Sleep(s3);  cout << "Recieved";
		cout << "\nQ:\\>F6: ";  Sleep(s2 + 5000); cout << "Recieved - UnEncrypted"; Sleep(1200);
		cout << "\nQ:\\>No Available Nodes...";

		cVarState userT(1); // Set & Declare VariableState For Later Classes
		userT.setNixLink(3);
		//cFreelancer user(1);
		cout << "\n\n";
		cout << "\tI hope they all got my message!";
	}
	int concourse_a1_x()
	{
		int s = 1000; // Typing
		int s2 = 800; // Display
		int s3 = 1000; //Checking
		char iActive;
		cout <<"\n\t\tGood Old Trusty Thermite...";
		cout << "\nQ:\\>"; Sleep(s);
		cout << "Q:\\>Extirpate -f\n"; Sleep(s);
		cout << "Q:\\>Warning, Are You Root?\n"; Sleep(s + 500);
		cout << "Q:\\>sudo -rewind -t 1\n"; Sleep(s);
		cout << "Q:\\>password: \n"; Sleep(s + 600);
		cout << "Q:\\>\n"; Sleep(s);
		cout << "Q:\\>are you sure (y\\n)\n"; Sleep(s + 1100);
		cout << "Q:\\>y\n"; Sleep(1000);
		cout << "Q:\\>Time Set: 5 min.\n"; Sleep(1000);
		cout << "Q:\\>Please Evacuate The Vicinity...\n"; Sleep(1000);

		cVarState userT(1); // Set & Declare VariableState For Later Classes
		userT.setNixLink(4);
		cFreelancer user(1);
		cout << "\n\n\t\t ";
		user.train();

		cout << "\n\tReady to leave your apartment...";
		cin >> iActive;

		cout << "\n\tAs you step onto the sidewalk and glance briefly over your shoulder...";
		cout << "\n\tyou see a blinding white and yellow light flare up from the 8th story.";
		cout << "\n\n";
		cout << "\n\tNo one will be accessing that computer anytime soon...";

	}

	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	// Branch 2: Envelope
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	int concourse_a2()
	{
		char iActive;
		int s1 = 100;
		cout << "\n\tAs quietly head over to your Apartment's front door.\n";
		cout << "\t\nThe envelope is brown, and doesn't weigh more than a single letter.";
		cout << "\n\n\t...Shall we take a look...";
		cin >> iActive;

		cout << "\n\n";
		cout 	 << "\t*________________________________________________________*\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                       Eye's Only                       |\n"; Sleep(s1);
     	cout     << "\t|                    ----------------                    |\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                    TO:    FireBorne                    |\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                                                        |\n"; Sleep(s1);
     	cout     << "\t|                    ----------------                    |\n"; Sleep(s1);
    	cout     << "\t*________________________________________________________*\n\n"; Sleep(s1);

    	Sleep(3200);
    	cout << "Ready To Open...";
    	cin >> iActive;

    	// Open Envelope
    	int s2 = 50;
    	cout << "\n\n";
		cout 	 << "\t*________________________________________________________*\n"; Sleep(s2);
     	cout     << "\t|                                                        |\n"; Sleep(s2);
     	cout     << "\t|                       Eye's Only                       |\n"; Sleep(s2);
     	cout     << "\t|                    ----------------                    |\n"; Sleep(s2);
     	cout     << "\t|                                                        |\n"; Sleep(s2);
     	cout     << "\t|                                                        |\n"; Sleep(s2);
     	cout     << "\t|                    TO:    FireBorne                    |\n"; Sleep(s2);
     	cout     << "\t|                                                        |\n"; Sleep(s2);
     	cout     << "\t|                                                        |\n"; Sleep(s2);
     	cout     << "\t|                                                        |\n"; Sleep(s2);
     	cout     << "\t|                                                        |\n"; Sleep(s2);
     	cout     << "\t|                                                        |\n"; Sleep(s2);
     	cout     << "\t|                                                        |\n"; Sleep(s2);
     	cout     << "\t|                                                        |\n"; Sleep(s2 + 1000);
     	cout     << "\t|                                                      --|\n"; Sleep(s2 + 800);
     	cout     << "\t|                                                   --- ||\n"; Sleep(s2 + 600);
     	cout     << "\t|                                            ------- St.||\n"; Sleep(s2 + 500);
     	cout     << "\t|                    ---------------------- GENT:       ||\n"; Sleep(s2 + 200);
     	cout     << "\t|---------------------- ction Is Needed                 ||\n"; Sleep(s2 + 50);
    	cout     << "\t||                                                      ||\n"; Sleep(s2 + 220);
    	cout     << "\t||                                                      ||\n"; Sleep(s2 + 220);
    	cout     << "\t||                                                      ||\n"; Sleep(s2 + 220);
    	cout     << "\t||       ~~~~~~~~~~~~~~                                 ||\n"; Sleep(s2 + 220);
    	cout     << "\t||                                                      ||\n"; Sleep(s2 + 220);
    	cout     << "\t||       ~~~~~~~~~~~~~~~~~~~~~~~~~~~                    ||\n"; Sleep(s2 + 220);
    	cout     << "\t||                                                      ||\n"; Sleep(s2 + 220);
    	cout     << "\t||       ~~~~~~~~~~~~~~~~~~~~~~~~~~~                    ||\n"; Sleep(s2 + 220);
    	cout     << "\t||                                                      ||\n"; Sleep(s2 + 220);
    	cout     << "\t||       ~~~~~~~~~~~~~~~~~~~~~~~~~~~                    ||\n"; Sleep(s2 + 220);
    	cout     << "\t||                                                      ||\n"; Sleep(s2 + 220);
    	cout     << "\t||       ~~~~~~~~~~~~~~~~~~~~~~~~~~~                    ||\n"; Sleep(s2 + 220);
    	cout     << "\t||                                                      ||\n"; Sleep(s2 + 220);
    	cout     << "\t||                {...Continue To Read...}              ||\n"; Sleep(s2 + 220);
    	cout     << "\t||______________________________________________________||\n"; Sleep(s2 + 220);
    	cout     << "\t||______________________________________________________||\n\n\n\n"; Sleep(s2);

		Sleep(500);

		cout << "\t\tSteven;\n";
		cout << "\tIt's been a long time coming, but our employers are launching\n";
		cout << "\tA Global Operation against the \'Crypto\' Industry.\n";
		cout << "\tWith the birth of SHA-8 they want to get in before things heat up.\n";
		cout << "\tListen, I'll be at that place we me that one time in Tangeire...\n";
		cout << "\t-Hope to see you there.\n";
		cout << "\t\tBryce\n";

		cout << "Ready...\n";
		cin >> iActive;
		cout << "\tThe air is heavy as you open your apart door ready to leave.\n";
		cout << "\tBefore stepping out you look up remembering the security system\n";
		cout << "\tyour building Super had installed...\n\n";

		cout << "\n\nShould I head to the roof and try the fire escape [a]...";
		cout << "\nSlowly drop the letter and use the exit by the trash [b]...";
		cin >> iActive;

		while (iActive)
    	{
	 		switch(iActive)
	 		{
	    	case 'd':
	    		//user.qubitDisplay();
	    		cout << "\t\nYou don't have your phone!";
	    		cin >> iActive;
	    		break;

				if (iActive != 'd')
				{
					//switch(iActive)
					//{
					case 'a':
						concourse_a2_a();
						return 0; // return 0; instead of 'break;' orElse Member's Loop Infinitly :/
					case 'b':
						concourse_a2_b();
						return 0;
					default:
						cout << "\n\tHrmmm...I Do Believe Something Went Wrong...\n";
						cin >> iActive;
						break;
				}
			}
		}

		return 0;
	}

	int concourse_a2_a()
	{
		/////PLAYER KILLED----
		cout << "\t\nOWWWWWWWWWWWWWWWW";
		return 0;
	}

//cBar::cBar() {}

	int concourse_a2_b()
	{

		char iActive;
		cout << "\tWith the door open and the letter our of site\n";
		cout << "\tyou drop it into the toilet letting it dissolve.\n";
		cout << "\t\"Fire never truely destroys paper\"\n";
		cout << "\tAfter getting the trash you flush the remnents down\n";
		cout << "\tand head down the stair well into the basement.\n";
		cout << "\tIt\'s quiet and no one seems to be around.\n";
		cout << "\tYou throw out the trash and start out the side door\n";
		cout << "\tinto the alley way.\n";
		cout << "\tIt\'s a nice day out, and the gate was left unlocked\n";
		cout << "\tas usual; one thing you could always count on here.\n";
		cout << "\tYou head out to the corner of your Street and hail a cab.\n";
		
		cout << "\n\nDown for a drink...";
		cin >> iActive;
		if(iActive)
		{
			return 0;
			//cBar(bar_a);
		}
	}
};