#include <iostream>

		/* FOR VAR STATE USE
		if (userT.getNixLink() == 1) // 'setNixLink(1)' To Store User's VariableStates in cVarState
		{
			cout << "RUN!!!!";
		}
		*/
		
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
