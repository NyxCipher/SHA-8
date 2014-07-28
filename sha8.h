#include <iostream>
#include <string.h>

using namespace std;
/*
	SHA-8: Interactive: Class Header File

	NOTES: // item ** = Idea's To Be Coded && Added

	TODO: Split cConcourse into new *.h file
	TODO: Seperate std::cout << lines into seperate classes or similar for fulidity

	Compiler NOTE: g++ sha8.cpp -o sha8.exe -fno-exceptions
*/

//class cCommLink **
//class cIntercept **

//class eight
//{

class cFreelancer
{
public:
	cFreelancer(int initialSet);
	~cFreelancer() {}
	//char getID() const { return  agent; }
	int getBTC()
	{ 
		return btc; // TODO: back to 'const' ??
	}
	int getSHA() const { return sha; }
	int getStealth() const { return stealth; }
	int getPaymentVar() const { return BTCvar; }
	//int intc(); **
	//int ability(); **
	//void setID(char newAgent[])
	//{
	//	strcpy(agent, newAgent);
	//}
	void setBTC(int newBTC) { btc = newBTC; }
	void setPaymentVar(int newBTCvar) { BTCvar = newBTCvar; }
	void clearPaymentVar(int clear) { BTCvar = clear; }
	void setSHA(int newSHA) { sha = newSHA; }
	void setStealth(int newStealth) { stealth = newStealth; }

	void mine()
	{
		cout << "    Recieved: " << getPaymentVar(); cout << " BTC  ";
		setBTC(btc + BTCvar); // you just needed 'btc' not 'new btc'
	}
	void paymentVar()
	{
		// Payment Value++
		setPaymentVar(BTCvar + 1);
	}
	void clearPayment()
	{
		// Always After Using Each Iteration Of 'paymentVar()' You Must 'clearPayment()' or else Bug!! :O
		clearPaymentVar(BTCvar = 0);
	}
	void hardware()
	{
		cout << " Schematics: + 1 ";
		setSHA(sha + 1);
	}
	void train()
	{
		cout << " Oc.Sat Credits: + 1 ";
		setStealth(stealth +1);
	}
	void qubitDisplay()
	{
		cout << " ------------------------------------------------------------------------------\n";
    	cout << "\tWallet: " << getBTC(); cout << " BTC";
    	cout << "\t   Stealth: " << getStealth(); cout << " Units";
    	cout << "\tMiner: " << getSHA(); cout << " Hash";
    	cout << "\n ------------------------------------------------------------------------------\n";
    	//cout << "\n\tPress Any Key To \'Return\'...\n";
	}
private:
	//char agent[13];
	int btc;
	int BTCvar;
	int sha;
	int stealth;

};

class cMiner // TODO: Add int khs, int mhs, int ghs, int ths, int phs, int Xhs++
{
public:
	cMiner(int initialRate, int newSHA);
	~cMiner() {}

	cFreelancer getSHA() const { return sha; }
	int getHash() const { return hash;}

	void setSHA(cFreelancer sha);
	void setHash(int newHash) { hash = newHash; }
	void activeSHA()
	{
		setHash(hash + 1);
		std::cout << "SHA-8 HashRate Increased By 1\n";
	}
	void deActiveSHA()
	{
		setHash(hash - 1);
		std::cout << "SHA-8 HashRate Decreased By 1\n";
	}

private:
	cFreelancer sha;
	int hash;
};
/* Moved To varState.h
class cVarState
{
public:
	cVarState(int initialSet);
	~cVarState() {}
	int getNixLink() const { return nix; }

	void setNixLink(int newNix) { nix = newNix; }

	void terminalRead()
	{
		cout << "Reading NixLink-Terminal Status\n";
		setNixLink(nix = 1);
	}

private:
	int nix;
};
*/
