/*4. Implement the class HighscoreEntry that, given the following program :
int main()
{
	HighscoreEntry h1("Homer", 9999);
	HighscoreEntry h2("Bart", 7777);
	HighscoreEntry h3;
	HighscoreEntry h4(h2);
	const char* str = h1.toString();
	cout << "h1: " << str << endl;
	cout << "h2: " << h2.toString() << endl;
	cout << "h3: " << h3.toString() << endl;
	if (h2.sameAs(h4)) {
		cout << "h2 and h4 are the same" << endl;
	}
	else {
		cout << "h2 and h4 are not the same" << endl;
	}
}
Produces the following output :
h1: Homer - 9999
h2 : Bart - 7777
h3 : Unknown - 0000
h2 and h4 are the same*/

#include <iostream>
#include <string>

using namespace std;

class HighscoreEntry
{
public:
	HighscoreEntry(): _name("Unkwown"), _score(0000){}
	HighscoreEntry(const char name0[], int score0) : _name(name0), _score(score0) {}
	~HighscoreEntry(){}

	 
	const char* toString()
	{
		char* str = new char[32]();
		string tmp = to_string(this->_score);
		char const* num_char = tmp.c_str();
		int i = 0;
		
		while (this->_name[i] != '\0')
		{
			str[i] = this->_name[i];
			i++;
		}
		str[i] = ' ';
		i++;
		str[i] = '-';
		i++;
		str[i] = ' ';
		i++;

		for (int j = 0; j < 4; j++, i++)
		{
			str[i] = num_char[j];
		}
		
		return str;
		delete[] str;
	}
	bool sameAs(HighscoreEntry x)
	{
		if (this->_score == x._score) return true;
		else return false;
	}
private:
	const char* _name;
	int _score;
};





int main()
{
	HighscoreEntry h1("Homer", 9999);
	HighscoreEntry h2("Bart", 7777);
	HighscoreEntry h3;
	HighscoreEntry h4(h2);
	const char* str = h1.toString();
	cout << "h1: " << str << endl;
	cout << "h2: " << h2.toString() << endl;
	cout << "h3: " << h3.toString() << endl;
	if (h2.sameAs(h4)) {
		cout << "h2 and h4 are the same" << endl;
	}
	else {
		cout << "h2 and h4 are not the same" << endl;
	}
}