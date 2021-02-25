/*3. Write a program that
a. Creates 2 structs:
i. Pirate: whose members are the name and the life units (use the types you
consider appropriate).
ii. Weapon: whose members are the name and the damage units.
b. Implement the following functions to print on the screen the information of a
pirate and a weapon:
void printPirateInfo(const pirate &p);
void printWeaponInfo(const weapon &w);
c. The main has to:
i. Create the pirate leChuck and the weapon sword with the following
values:
-- Pirate --
name = LeChuck
life = 100
-- Weapon --
name = Sword
damage = 10
ii. Call to a function attack by using the following call (think about how the
parameters are passed and implement the function!):
attack(lechuck, sword);
iii. Print on the screen the information of the pirate after the attack:
-- Pirate --
name = LeChuck
life = 90*/
#include <iostream>
using namespace std;

typedef struct Pirate {
	char name[36];
	int life;
}Pirate;
typedef struct Weapon {
	char name[36];
	int damage;
}Weapon;
void printPirateInfo(const Pirate p)
{
	cout << "-- Pirate -- " << endl;
	cout << "name = " << p.name << endl;
	cout << "life = " << p.life << endl;
}
void printWeaponInfo(const Weapon w) 
{
	cout << "-- Weapon --" << endl;
	cout << "name = " << w.name << endl;
	cout << "damage = " << w.damage << endl;
}
void attack( Pirate& p,  Weapon s)
{
	p.life -= s.damage;
}
int main()
{
	Pirate leChunk = {"LeChuck", 100};
	Weapon sword = { "Sword", 10 };
	
	attack(leChunk, sword);

	printPirateInfo(leChunk);

	return 0;
}