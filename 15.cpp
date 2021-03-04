#include <iostream>

using namespace std;

class Player
{
public:
	Player(string name0) : name(name0)
	{
		numLifes = 3;
		invencible = false;
		for (int i = 0; i < 3; i++)
		{
			capabilites[i] = false;
		}
		capabilites[1] = true;
	}
	~Player() {}
	string getName() { return name; }
	void PrintNumLifes() { cout << "Number of lifes: " << name << endl; }
	void PrintInvincible()
	{
		if (invencible) cout << name << "is invincible" << endl;
		else cout << name << "is not invincible" << endl;
	}
	void PrintCapabilities() 
	{
		for (int i = 0; i < 3; i++)
		{
			if (capabilites[i]) cout << "Capability num :" << i << "is true" << endl;
		}
	}
	void PrintWeapon()
	{
		for(int i = 0; i < 3; i++)
		{
			if (weapon[i]) cout << "Weapon num: " << i << "is true" << endl;
		}
	}
	bool Equal(string n2)
	{
		if (name == n2) return true;
		else return false;
	}
	void useItem(Item item)
	{

	}

private:
	string name;
	unsigned short numLifes;
	bool invencible;
	bool* capabilites = new bool[3]();
	bool* weapon = new bool[3]();
};

class Item
{
public:
	Item(string name0) : name(name0) {}
	~Item() {}
	
private:
	string name;
};




int main()
{
	
	
	return 0;
}