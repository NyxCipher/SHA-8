// Devices & Toolbox For Freelancer
#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

class cDevice
{

public:
	cDevice(int set);
	~cDevice(){}
	char getName() const { return usrName[15]; }
	void confirmUsrName()
	{
		cout << "\n\tVerifing Your ID";
		cout << "\n\tID: Accepted";
		cout << "\n\tRegistering: " << usrName << "\n";
	}
	void setID()
	{
		char id[15];
		char *pId[15];
		char *pUsrName[15];
		cout << "\nID: ";
		cin >> id;
		pId[15] = &id[15];
		usrName[15] = *pId[15];
		//usrName[15] = *pUsrName[15];
		//strncpy(usrName,id,15);
		//usrName[15] = id[15];
	}

	// Mobile Device (Implemented Post Bar8.h && LibPDCurses)
	void mDevice()
	{
		cout << "\n\n\n\n";
		cout << "\t\t\t*__________________________*\n\n"; Sleep(100);
		cout << "\t\t\t      DarkRing-Mobile      \n\n"; Sleep(100);
		cout << "\t\t\t*__________________________*\n"; Sleep(100);
		cout << "\n\n\n\n";

	}
private:
	char usrName[15];

};