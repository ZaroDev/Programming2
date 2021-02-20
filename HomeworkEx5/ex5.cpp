#include <stdlib.h>
#include <iostream>

using namespace std;

void printCharPtr(char* myString)
{
	int i = 0;
	while (myString[i] != '\0')
	{
		cout << myString[i];
		i++;
	}
}
int sizeWord(char* word)
{
	int i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return i;
}
void concat(char* word1, char* word2, char* result)
{
	int sizeWord1 = sizeWord(word1);
	int sizeWord2 = sizeWord(word2);
	int sizeWordResult = sizeWord1 + sizeWord2 + 1;
	
	for (int i = 0; i < sizeWord1; i++)
	{
		result[i] = word1[i];
	}
	for (int i = 0; i < sizeWord2; i++)
	{
		result[i + sizeWord1] = word2[i];
	}
	
	result[sizeWordResult - 1] = '\0';

}
int main()
{
	int num = 0;
	char word1[32] = {};
	char word2[32] = {};
	
	cout << "Introduce the first word" << endl;
	cin >> word1;
	cout << "Introduce the second word" << endl;
	cin >> word2;
	
	char* result = (char*)malloc(sizeWord(word1)+sizeWord(word2)+1);

	concat(word1, word2, result);
	printCharPtr(result);
	free(result);
	return 0;
}