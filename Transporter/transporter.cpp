#include <iostream>
#include <windows.h>
#include <conio.h> // _kbhit(); |  _getch();
#include <stdio.h>

//#include "transporterASCII.h" //Art & ASCII Images

//#include "transport.h"
/*
	Mwahahaha, I Call In..."The Destructor" - Using OOP Programming -or- "Object Oriented Programming";
		- 	The use of one or more Objects each with its own specialized and specific purpose comprised of
			data in the form of member data and functions in the form of function. Creating a Public Printer
			Class (ex: cPrintr) will allow other programs the use and ability to print using the cPrintr Class.

	Build Error Using MinGW : MSYS G++ Compiler
	No Entry Point | __gxx_personality_v0; Error
	
	Compiler Fix With Flag's If Not Using a "Global NULL Void Pointer"; add -fno-rtti No RTTI Use
	 	MSYS_usr: g++ transporter.cpp -o transporter.exe -fno-exceptions -fno-rtti

	 	Modify: Assignment Revision = Add Member Variable 'Wheelmake' private, set to 4

*/
class cASCII
{
public:
	cASCII();
	~cASCII();
	int artHandle() const { return artHandleA; }

	void trafficLight()
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




class cTransport
{
public:
	cTransport( int initialAge ); // Constructor
	~cTransport(); // Destructor
	int getSpeed();
	int getSpecSpeed() const { return specSpeed; }
	int getSpecBrake() const { return specBrake; }
	int getSpecHandle() const { return specHandle; }
	int getSoftPedal() const { return softPedal; }
	int getLeft() const { return handleLeft; }
	int getRight() const { return handleRight; }
	int getDistance() const { return distance; }
	int getHandleVF() const { return handleVF; }
	int getHandleVR() const { return handleVR; }
	double getTDistance() const { return tDistance; }
	double getTime() const { return tTime; }
	double getRunningDistance() const { return runningDistance; }
	void reset()
	{
		tTime = 0;
		speed = 0;
		handleRight = 0;
		handleLeft = 0;
		handleVF = 0;
		handleVR = 0;
		machineDistA = 0;
		machineDistB = 0;
		machineDistC = 0;
		runningDistance = 0;
	}
	void setTime(double newTTime)
	{
		tTime = newTTime;
	}
	void trackTime()
	{
		int n = 1;
		double t = 1.25;
		double track;
		track = n * t;
		setTime(tTime + track);
		std::cout << "\n | Seconds: " << cTransport::getTime() << " | ";
	}

	// total distance in forward velocity
	// distance calculation error when appling brake 
	void fpsDistance()
	{
		//int hours;
		//double sec;
		double totaldistance;
		int a = 1;

		int mph;
		double fps;
		double x = 1.466666666;
		double t;
		double tT;

		mph = speed;
		//std::cout<<"MPH -> FPS"<<std::endl<<std::endl;
		//std::cout<<"MPH?  ";
		//std::cin>>mph;
		//fps=mph*22/15;
		t = mph*x;
		//std::cout<<"FPS = "<<fps << "moduli-X = " << x << "\n";
		//std::cout << "FPS-True:" << fps << "." << x << " \n";
		std::cout << " | FPS: " << t << " | ";
		//while (a <=  tTime)
		//{
		//	if (totaldistance == 0)
		//	{
			totaldistance = t * tTime;
			std::cout << " | Distance:  " << totaldistance << "\n";
			tDistance = totaldistance;
			//std::cout << a << "  " <<  t << " | Distance:  " << totaldistance << "\n";
			//a = a + 1;
			//}
			/*else if (totaldistance != 0)
			{
			totaldistance = t * tTime;
			std::cout << a << "  " <<  t << " | Distance:  " << totaldistance << "\n";
			a = a + 1;
			}
			else if ()
			{
			totaldistance = t * tTime + totaldistance;
			std::cout << a << "  " <<  t << " | Distance++:  " << totaldistance << "\n";
			a = a + 1;
			
			}
		
		}
	
	*/
	}
	void distanceOOF()
	{
		double tmpDist;
		double tmpDist2;

		if ( machineHandleA == 0 )	
		{
		tmpDist = liveDistance - machineDistA;
		tmpDist2 = machineDistA + tmpDist;
		runningDistance = tmpDist2;
		}

		else if ( machineHandleA == 1 )
		{
			tmpDist = 0.0;
			tmpDist2 = 0.0;

			tmpDist = machineDistB - runningDistance;
			tmpDist2 = machineDistB + tmpDist;
			runningDistance = tmpDist2;
			machineHandleA == 0;
			machineHandleB == 1;
		}
		else
		{
			// forward = true
		}

	}
	void machineOOF()
	{

		if ( handleVR >= 1 )
		{
			cTransport::machineDistanceA();
			cTransport::distanceOOF();
			machineHandleA == 1;
			runningDistanceB = runningDistance; // move to end "continue;"
			cTransport::distanceOOF(); //check 2nd round
		}
		//if ( handleVR >= 2 )
		//{
		//	cTransport::machineDistanceB();
		//}

	}
	void machineDistanceControl()
	{
		liveDistance = tDistance;
	}
	void machineDistanceA()
	{
		machineDistA = tDistance;
	}
	
	void machineDistanceB()
	{
		machineDistB = runningDistanceB;
	}
	/*
	void machineDistanceC()
	{
		machineDistC = tDistance;
	}
	
	*/
	void setSoftPedal()
	{
		int n = 0.5;
		double newSoftPedal;
		newSoftPedal = .5;
		softPedal = newSoftPedal * n;
	}
	void setSpeed(int speed);
	void pedal();
	void brake();
	int getMake(); // Accessor Standard 'set/get_CapitalCapital'
	void setMake(int make);

	void setSpec()
	{
		if ( make == 1 )
		{
			///////-When Floored-////////
			// 0 - 60 = 5 sec
			// ttm = 4 rem's of (0 - 60)
			// ttm(f) = 20 seconds @ 60mph in 5 sec
			// rem 1 = 60 @ 5sec
			// rem 2 = 120 @ 10sec
			// rem 3 = 180 @ 15sec
			// rem 4 = 240 @ 20sec 
			// floor'd = 240mph 
			// 1/2 == 120 mph
			//////-At 1/2 Pedal-////////
			// zts= 0 - 60 = 5sec
			// (1/2)zts = 0 - 60 = 10 sec
			// ttm(FoZTS_2) = 40 seconds to 240 @ 10 sec 60s
			// rem 1 = 60 @ 10sec
			// rem 2 = 120 @ 20sec
			// rem 3 = 180 @ 30sec
			// rem 4 = 240 @ 40sec

			/////////-/FPS/-/////////
			//fps=mph*22/15;
			//10x22(22/15)=14.666...
			/*  m       5280       f
			 * ---  x  ------  =  ---
			 *  h       3600       s
			 */
			 ////////////////////////

			 //Time-Table Standard//
			 // 60 = 5s
			 // 30 = 2.5s
			 // 15 = 1.25s
			 // 5 / 1.25 = 4
			 // use speed sets of 4 to = 0 - 60 standard of 5s 60s

			specSpeed = 15;
			specBrake = 13;
			specHandle = 20;
		}
		else if ( make == 2 )
		{
			specSpeed = 22;
			specBrake = 18;
			specHandle = 8;
		}
	}

	//User Private Handles
	void positionL(int newHandleLeft)
	{
		//if (barrierhere)
		handleLeft = newHandleLeft;
	}
	void positionR(int newHandleRight)
	{
		//if (barrierhere)
		handleRight = newHandleRight;
	}
	void xForward(int newHandleVF)
	{
		handleVF = newHandleVF;
	}
	void hReverse(int newHandleVR)
	{
		handleVR = newHandleVR;
	}

	///Accessor Functions
	void shiftX()
	{
		cTransport::xForward( handleVF + 1 );
		//cTransport::hReverse( handleVR + 1 );

	}
	void shiftH()
	{
		cTransport::hReverse( handleVR + 1 );
		//cTransport::xForward( handleVF - 1 );
	}
	void shiftL()
	{
		if (handleLeft == -2 )
		{
			std::cout << "ASSHOLE! You Ran Up The Sidewalk! CRASHH!!!";
			return;
		}
		else
		//handleLeft = 0;
		cTransport::positionL(handleLeft - 1);
		cTransport::positionR(handleRight - 1);
	}
	void shiftR()
	{
		//handleRight = 0;
		if (handleRight == 2 )
		{
			std::cout << "ASSHOLE! You Ran Up The Sidewalk! CRASHH!!!";
			return;
		}
		else
		cTransport::positionR(handleRight + 1);
		cTransport::positionL(handleLeft + 1);
	}

	// User Controls
	void xcel()
	{
		std::cout << "\n++Appling Pedal++\n";
		Sleep(1250);
		cTransport::trackTime();
		cTransport::pedal();
		cTransport::fpsDistance();
		cTransport::shiftX();

		std::cout << "\n\tDEBUG MODE: True | Handle VForward: " << cTransport::getHandleVF() << "\n\t Handle VReverse: " << cTransport::getHandleVR() << "\n\t | Machine Distance: " << getTDistance() << "\n";
		
	}

	void halt()
	{
		std::cout << "\n--Appling Brake--\n";
		Sleep(1250);
		cTransport::trackTime();
		cTransport::brake();
		cTransport::fpsDistance();
		cTransport::shiftH();

		std::cout << "\n\tDEBUG MODE: True | Handle VForward: " << cTransport::getHandleVF() << "\n\t Handle VReverse: " << cTransport::getHandleVR() << "\n\t | Machine Distance: " << getTDistance() << "\n\t | Running Distance: " << cTransport::getRunningDistance() << "\n";
	}

	void left()
	{
		std::cout << "\n~~Shifting Left\n";
		cTransport::shiftL();
		std::cout << "Left Value: " << cTransport::getLeft() << "\n";
	}

	void right()
	{
		std::cout << "\nShifting Right~~\n";
		cTransport::shiftR();
		std::cout << "RightValue: " << cTransport::getRight() << "\n";
	}
	void redLight()
	{
		int i = 150;

		std::cout << "\n\t	          ##                    \n"; Sleep(i);
        std::cout << "\t	         _[]_                   \n"; Sleep(i);
        std::cout << "\t	        [____]                  \n"; Sleep(i);
        std::cout << "\t	    .----'  '----.              \n"; Sleep(i);
		std::cout << "\t	.===|    .==.    |===.          \n"; Sleep(i);
		std::cout << "\t	\\   |   /####\\   |   /          \n"; Sleep(i);
		std::cout << "\t	/   |   \\####/   |   \\          \n"; Sleep(i);
		std::cout << "\t	'===|    `""`    |==='          \n"; Sleep(i);
		std::cout << "\t	.===|    .==.    |===.          \n"; Sleep(i);
		std::cout << "\t	\\   |   /::::\\   |   /          \n"; Sleep(i);
		std::cout << "\t	/   |   \\::::/   |   \\          \n"; Sleep(i);
		std::cout << "\t	'===|    `""`    |==='          \n"; Sleep(i);
		std::cout << "\t	.===|    .==.    |===.          \n"; Sleep(i);
		std::cout << "\t	\\   |   /&&&&\\   |   /          \n"; Sleep(i);
		std::cout << "\t	/   |   \\&&&&/   |   \\          \n"; Sleep(i);
		std::cout << "\t	'===|    `""`    |==='          \n"; Sleep(i);
		std::cout << "\t	    '--.______.--'              \n"; Sleep(i);

		if ( speed >= 10 )
		{
			std::cout << "CRASH!!!\n";
		}
		
	}
	void check()
	{
		std::cout << "1st\n";
		if ( tTime == 1.25 )
		{
			std::cout << "true\n";
			cTransport::redLight();
		}
		if ( tTime > 1.25 && tTime < 3.25 && handleLeft > 0 )
		{
			std::cout << "CRASH!!!\n";
		}
		if ( tTime > 1.25 && tTime < 3.25 && handleLeft < 0 )
		{
			std::cout << "Avoiding Traffic!\n";
		}
	}

private:
	int speed;
	int make;
	int specSpeed;
	int specBrake;
	int specHandle;
	int handleLeft;
	int handleRight;
	int handleVF;
	int handleVR;
	double softPedal;
	double tTime;
	double tDistance;
	double machineDistA;
	double machineDistB;
	double machineDistC;
	double liveDistance;
	double runningDistance;
	double runningDistanceB;
	int machineHandleA;
	int machineHandleB;
	int machineHandleC;
	int distance;
};

cASCII::cASCII()
{

}
cASCII::~cASCII()
{

}
// Constructor for the object
cTransport::cTransport(int initialSpeed)
{
	setSpeed(initialSpeed);
	tTime = 0;
}

// Destructor for the object
cTransport::~cTransport()
{
	//do nothing
}

int cTransport::getMake()
{
	return make;
}

void cTransport::setMake(int newMake)
{

	if (newMake == 1 )
	{
		make = newMake;
	}
	else if ( newMake == 2 )
	{
		make = newMake;
	}
	else if ( newMake > 2 || newMake < 1 )
	{
		std::cout << "Wrong make\n";
		make = 0;
	}
}

int cTransport::getSpeed()
{
	return speed;
}

// set the trike's speed
void cTransport::setSpeed(int newSpeed)
{
	if (newSpeed >= 0)
	{
		speed = newSpeed;
	}
}

// 0 - 60 in 5
void cTransport::pedal() //TODO: Organize Xcel & Decel Commands/Functions FROM: void xcel() & halt()
{
	int key; 
	key = getSpecSpeed();

	if (key = getSpecSpeed());
	{
		setSpeed(speed + (key));
		std::cout << "\nPedal Pressed; Car's Speed " << getSpeed() << " mph\n";
	}

}

// apply the brake on the trike
void cTransport::brake()
{
	int stop; 
	stop = getSpecBrake();

	if (stop = getSpecBrake());
	{
		setSpeed(speed - 1 - (stop));
		std::cout << "\nBraking; Car's Speed " << getSpeed() << " mph\n";
	}

}

int main()
{
	int ch;
	int car = 0;
	int driver;
	std::cout << "Please select a car ( [1] | [2] )\n";
	cTransport tportr(0);
	std::cin >> car;
	tportr.setMake(car);
	if (car == 0)
	{
		std::cout << "I Only Coded Two Cars!! I'm Not Ubisoft!\n";
		return main();
	}
	else
	{
		tportr.setSpec();
		std::cout << "...Instering Key...";
		_kbhit();
		_getch();
		std::cout << "\n\tOkay, so if 20 City Blocks above 14th Street equal 1 Mile,\n\tA City Block above 14th is 1/5 * Mile.\n\tI have 250 feet per block above Union Sq.\n\tEach Avenue equates to about 2 - 3 * greater than the latter.\n\t With that in mind, I have at most 920 Feet to an Ave,\n\t750 feet per Ave., on the Middle,\n\tand 500 feet in some sections...\n\n";
		_kbhit();
		_getch();
		std::cout << "\tIt's mid-day so traffic won't be terrible.\n\tMy tank is half-empty on High-Octane; I'll be a little lighter.\n\tI have two main blind-spots on either side.\n\tIt's past 12, I'll have sun-glare heading uptown on my left.\n\tAlternate Side Parking is in effect.\n\tSeat-Belt's tight, and I have all air-bags.\n\tCar's body is part-carbonfiber, three pieces to a whole\n\tBody is sitting low...\n\tI can withstand a 50mph crash and walk, above 50,\n\tI'll need to spin out to off-set G-Force's\n\n\n";
		_kbhit();
		_getch();
		std::cout << " Key's In...Let's Ride: " << tportr.getMake() << "\n";
	}
	Sleep(1250);
	tportr.trackTime();
	tportr.pedal();
	Sleep(1250);
	tportr.trackTime();
	tportr.pedal();
	Sleep(1250);
	tportr.trackTime();
	tportr.pedal();
	std::cout << "\n\tRed Light Immenient; Cross Traffic Slowing Ahead\n";
	Sleep(1250);
	tportr.trackTime();
	tportr.pedal();
	Sleep(1250);
	std::cout << "\nRem 1: 60mph\n";
	//TODO: User Control'd Driving With Obsticals
	tportr.trackTime();
	tportr.brake();
	Sleep(1250);
	tportr.trackTime();
	tportr.brake();
	Sleep(1250);
	tportr.trackTime();
	tportr.brake();
	Sleep(1250);
	tportr.trackTime();
	tportr.brake();
	Sleep(1250);
	tportr.trackTime();
	tportr.brake();
	std::cout << "Stopped At Red - DeliveryTruck Blocking Right Lane. \n\tChange Left or Right On Green? \n";
	//std::cin >> driver;
    tportr.reset();
    ch = _getch();// != 27 /* 27 = Esc key */
	//{
	   // printf("%d", ch);
	    if (ch == 0 || ch == 224)
	    {
	    	while ( ch != 27 )
	    	{
	    		tportr.machineOOF();
	    		tportr.check();

	    		switch (_getch())
			    {
	    			case 72:
	    				//tportr.check();
	    				tportr.machineDistanceControl();
	    				tportr.xcel();
	    				//tportr.check();
	    				continue;
	    			case 80:
		    			//tportr.check();
	    				tportr.machineDistanceControl();
	    				tportr.halt();
	    				//tportr.check();
	    				continue;
	    			case 75:
	    				//tportr.check();
	    				tportr.left();
	    				//tportr.check();
	    				continue;
	    			case 77:
		    			//tportr.check();
	    				tportr.right();
	    				//tportr.check();
	    				continue;
	    			case 27:
	    				return 0;
	    		}
	    		//tportr.machineOOF();
	    		continue;
		    }
	    }
	       // printf (", %d", _getch ()); 
	   // printf("\n");
	//}

	printf("Coding Error: \"OOPS!!!\" ESC %d\n", ch);
	return 0;
}
	/*
	if (driver == 1)
	{
		tportr.pedal();
		tportr.pedal();
		tportr.pedal();
		tportr.pedal();
		tportr.pedal();
		tportr.pedal();
		tportr.pedal();
		tportr.pedal();
		tportr.pedal();
		tportr.pedal();
		tportr.pedal();
		tportr.pedal();
		std::cout << "CRASHHH!!! OWWWWWWW\n";
		tportr.~cTransport();
		return 0;
	}
	if (driver == 2)
	{
	tportr.pedal();
	}
	else
	{
		std::cout << "HELP, I'm Stuck!\n";
	}
	return 0;
}
*/

/*
DUMP

	ch = _getch();
	if (ch == 0 || ch == 224)
	{
	    switch (_getch())
	    {
	        case 72:
	            // Code for up arrow handling 
	            break;
	        case 75:
	            // Code for left arrow handling 
	        	std::cout << "Waiting For Green...";
	        	tportr.trackTime();
	        	Sleep(1250);
				tportr.trackTime();
	            Sleep(1250);
				std::cout << "";
	            break;
	        case 77:
	            // Code for right arrow handling 
	            break;
	        case 80:
	            // Code for down arrow handling 
	            break;

	        // ... etc ... 
	    }
	}


		    	if(ch == 72)
		    	{
		    		tportr.xcel();
		    		//continue;
		    	}
		    	while (ch == 80)
		    	{
		    		tportr.halt();
		    		continue;
		    	}
		    	while (ch == 75)
		    	{
		    		tportr.left();
		    		continue;
		    	}
		    	while (ch == 77)
		    	{
		    		tportr.right();
		    		continue;
		    	}


*/