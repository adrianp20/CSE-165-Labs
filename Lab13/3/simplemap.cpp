/*
Given a text file  file.txt , print all the words with their corresponding count. You need to use 
STL’s unordered_map and  simplemap.cpp  file to achieve this task. The map should be organized 
so that words are the keys, and the frequency of the word occurence is the value, like so: 
unordered_map<string, int> wordFreq . Refer to  wordcount.txt  for the expected output.
*/

// WORKING

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <fstream>

using namespace std;

void printFrequencies(const string &str)
{
	//write your code here

	unordered_map<string, int> wordFreq; // unordered_map of type string and int
	stringstream ss(str); // stringstream of type string
	string word; // string of type string
	while (ss >> word) // while ss is not empty
	{
		wordFreq[word]++; // increment wordFreq[word]
	}

	for (auto it = wordFreq.begin(); it != wordFreq.end(); ++it) // for each element in the unordered_map
	{
		cout <<"(" <<it->first << " , " << it->second <<"),"<< endl; // print the key and value
	}
}

int main(int argc, char** argv)
{

	std::ifstream ifs("file.txt");
	std::string content((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>()));

	printFrequencies(content);

	return 0;
}