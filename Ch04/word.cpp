#include "std_lib_facilities.h"

int main(){
	
	vector<string> words;

	for(string word; cin>>word;)
		words.push_back(word);

	cout << "Number of words: " << words.size() << endl;

	sort(words);

	for(string word:words)
		cout << word << endl;

	return 0;
}