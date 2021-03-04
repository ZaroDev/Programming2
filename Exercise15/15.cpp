#include <iostream>

using namespace std;

class Item
{
public:
	Item(string name0) : name(name0) {}
	~Item() {}
private:
	string name;
	friend class Player;
};

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
	string getName() const { return name; }
	void PrintNumLifes() { cout << "Number of lifes: " << numLifes << endl; }
	void PrintInvincible()
	{
		if (invencible) cout << name << " is invincible" << endl;
		else cout << name << " is not invincible" << endl;
	}
	void PrintCapabilities() 
	{
		for (int i = 0; i < 3; i++)
		{
			if (capabilites[i]) cout << "Capability num :" << i << " is true" << endl;
		}
	}
	void PrintWeapon()
	{
		for(int i = 0; i < 3; i++)
		{
			if (weapon[i]) cout << "Weapon num: " << i << " is true" << endl;
		}
	}
	bool Equal(string n2)
	{
		if (name == n2) return true;
		else return false;
	}
	void useItem(Item item)
	{
		if (item.name == "One_Up") numLifes++;
		if (item.name == "Mini_Mario")
		{
			capabilites[0] = true;
			capabilites[1, 2] = false;
		}
		else if (item.name == "Super_Mario")
		{
			capabilites[0, 1] = false;
			capabilites[2] = true;
		}
		if (item.name == "Fire_Flower")
		{
			weapon[0] = true;
			weapon[1, 2] = false;
		}
		else if (item.name == "Ice_Flower")
		{
			weapon[1] = true;
			weapon[0, 2] = false;
		}
		else if (item.name == "Golden_Flower")
		{
			weapon[0, 1] = false;
			weapon[2] = true;
		}
	}
	friend void starTouched(Player p1);

private:
	string name;
	unsigned short numLifes;
	bool invencible;
	bool* capabilites = new bool[3]();
	bool* weapon = new bool[3]();
};


void starTouched(Player p1)
{
	p1.invencible = true;
}

int main()
{
	string playerName;
	string itemChoose;
	bool exit = false;

	cout << "Introduce the player name (i.e) :  Mario, Luigi, Princess Peach, Toad, Wario, Yoshi, etc." << endl;
	cin >> playerName;
	
	Player* p1 = new Player(playerName);

	while (!exit)
	{
		cout << "Introduce the name of an Item (Names available)\nOne_Up\nMini_Mario\nSuper_Mario\nFire_Flower\nIce_Flower\nGolden_Flower\nStar\nQuit" << endl;
		cin >> itemChoose;
		Item* item = new Item(itemChoose);
		if (itemChoose != "Quit")
		{
			if (itemChoose == "Star") starTouched(*p1);
			else p1->useItem(*item);
			p1->getName();
			p1->PrintNumLifes();
			p1->PrintInvincible();
			p1->PrintCapabilities();
			p1->PrintWeapon();
		}
		else exit = true;
	}
	
	return 0;
}