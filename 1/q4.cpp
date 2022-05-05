// create a program that reads text file 'words.txt' and counts the occurrences of a user inputted word.
// include words that are capitalized and lowercase. Also include words that contain punctuation.
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
    ifstream fin("words.txt"); // use fin to read the file

    char user_word[10]; // user input for word
    char original_word[10];
    char final_word[10];

    int word_occurrences = 0;
    int special; // special character
    int word_length = 0;

    cout<<"Enter a word: ";
    gets(user_word); // using gets to read chars from the user

    while(fin) { // while reading the file
        fin >> original_word; // read the word 
        word_length = strlen(original_word); // get the length of the word
        special = original_word[word_length - 1]; // last char of the word (punctuation)

        if(special == '.' || special ==',' || special == '!' || special == '?') { // checking for punctuation
            for(int i = 0; i < word_length - 1; i++) { // copying the word without the punctuation
                final_word[i] = original_word[i]; // copy the word to final_word
            }
        } else {
            strcpy(final_word, original_word); // copy the word to final_word
        }
        if(strcasecmp(final_word, user_word) == 0) { // strcasecmp compares two strings, ignoring case sensitivity
            word_occurrences++;
        }
    }
    cout<<"The word "<<user_word<<" occurs "<<word_occurrences<<" times."<<endl;
    fin.close();
    return 0;
}
