#include <iostream>
#include <windows.h>
#include <conio.h> // _kbhit(); |  _getch();
#include <stdio.h>
#include "hacker.h"

using namespace std;

// g++ hacker.cpp -o hacker.exe -fno-exceptions -fno-rtti

class cTools
{
public:
	cTools(int set);
	~cTools(){}

	void display()
	{
		std::cout << "\n   |---------------------------------------------------------------------|\n";
		std::cout << "   | [A] Pistol | [B] LiveOS USB | [C] Explosives | [D] Phone | [H] Help |\n";
		std::cout << "   |---------------------------------------------------------------------|\n";
	}
	bool controls()
	{
		int ch;
		ch = _getch(); // != 27 /* 27 = Esc key */
	//{
	   // printf("%d", ch);
	    if (ch == 0 || ch == 224 || ch >= 0)
	    {
	    	

	    	while ( ch != 27 )
	    	{
	    		switch (_getch())
			    {
			    	//--//
			    	case 72:
	    				std::cout << "\n\t\t^^^\n";
	    				continue;
	    			case 80:
	    				std::cout << "\n\t\tvvv\n";
	    				continue;
	    			case 75:
	    				std::cout << "\n\t\t<<<\n";
	    				continue;
	    			case 77:
	    				std::cout << "\n\t\t>>>\n";
	    				continue;
	    			//--//
	    			case 32:
	    				std::cout << "\n\t\tACTION!\n";
	    				continue;
	    			//++//
	    			case 97:
	    				std::cout << "\n\t\tPrompting Hacker Series Section to SHA-8\n";
	    				continue;
	    			case 98:
	    				std::cout << "\n\t\tPrompting Hacker Series Section to SHA-8\n";
	    				continue;
	    			case 99:
	    				std::cout << "\n\t\tPrompting Hacker Series Section to SHA-8\n";
	    				continue;
	    			case 100:
	    				std::cout << "\n\t\tPrompting Hacker Series Section to SHA-8\n";
	    				continue;
	    			case 104:
	    				std::cout << "\n\t\tPrompting Hacker Series Section to SHA-8\n";
	    				continue;
	    			case 109:
	    				display();
	    				continue;
	    			case 27:
	    				return 0;
	    		}
	    		continue;
		    }
		}
	} //close bool
private:
};

cTools::cTools(int set)
{
	set = 0;
}


int main()
{
	std::cout << "\n\t\tPrompting Hacker Series Section to SHA-8\n";
	cTools silent(1);
	silent.controls();
	
	//printf("Coding Error: \"OOPS!!!\" ESC %d\n", ch);
	return 0;
}

