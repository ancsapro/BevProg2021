#include "../../std_lib_facilities.h"

bool is_palindrome(const string& s)
{
	int first = 0;
	int last = s.length()-1;
	while (first < last) {
		if (s[first]!=s[last]) return false;
		++first;
		--last;
	}
	return true;
}

bool is_palindrome(const char s[], int n)
{
	int first = 0;
	int last = n-1;
	while (first < last) {
		if (s[first]!=s[last]) return false;
		++first;
		--last;
	}
	return true;
}

/*
bool is_palindrome(const char* first, const char* last)
{
	while (first < last) {
		if (*first!=*last) return false;
		++first;
		--last;
	}
	return true;
}
*/

bool is_palindrome(const char* first, const char* last)
{
	while (first < last) {
		if (*first!=*last) return false;
		return is_palindrome(first+1,last-1);
	}
	return true;
}

istream& read_word(istream& is, char* buffer, int max)
{
	is.width(max);
	is >> buffer;
	return is;
}

int main()
{
	/*
	for (string s; cin >> s; ){
		cout << s << " is";
		if (!is_palindrome(s)) cout << " not";
		cout << " a palindrome\n";
	}
	*/

	constexpr int max = 128;
	/*
	for(char s[max]; read_word(cin, s, max);){
		cout << s << " is";
		if(!is_palindrome(s,strlen(s))) cout << " not";
		cout << " a palindrome\n";
	}
	*/

	for(char s[max]; read_word(cin, s, max);){
		cout << s << " is";
		if(!is_palindrome(&s[0],&s[strlen(s)-1])) cout << " not";
		cout << " a palindrome\n";
	}

	return 0;
}