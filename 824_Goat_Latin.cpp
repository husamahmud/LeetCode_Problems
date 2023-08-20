#include <iostream>
#include <sstream>

using namespace std;

/**
 * converted - converts a word to goat latin by applying specific rules
 * @word: the word to be converted
 * Return: the goat latin representation of the word
 */
string converted(string &word)
{
	if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' ||
	    word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U')
		word.append("ma");
	else
		word.append(1, word[0]).erase(0, 1).append("ma");

	return (word);
}

/**
 * toGoatLatin - converts a sentence to Goat Latin by applying the converted
 * function to each word and appending 'a' char based on the word index
 * @sentence: the sentence to be converted
 * Return: the goat latin representation of the sentence
 */
string toGoatLatin(string sentence)
{
	stringstream ss(sentence);
	string tok;
	string goat_latin{};
	int word_idx = 1;
	int i;

	while (ss >> tok)
	{
		converted(tok);

		for (i = 0; i < word_idx; i++)
			tok.append("a");

		goat_latin.append(tok).append(" ");
		word_idx++;
	}

	if (!goat_latin.empty())
		goat_latin.pop_back();

	return (goat_latin);
}
