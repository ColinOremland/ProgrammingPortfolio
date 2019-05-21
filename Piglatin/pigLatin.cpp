#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void ParseString( const string& aLine, vector< string>& tokens ){
	string buffer;
	stringstream ss( aLine);
	while(ss >> buffer ){
	tokens.push_back( buffer );
	}
}

int main(int argc, char** argv ){
	int i = 0;
	string new_word;
	string pigLatinWord = " ";
	string userString;
	vector< string > Tokens;
	

	Tokens.clear();
	cout<< " Enter what you want to translate: ";
	getline (cin, userString);
	ParseString( userString, Tokens );
	vector< string >::iterator itr;
	for(i = 0; (itr == Tokens.begin()); (itr != Tokens.end()); i++, itr++ ;){
		string aword = *itr;
		new_word = aword.substr( 1 );
		new_word += aword[ 0 ];
		new_word += "ay ";
		pigLatinWord += new_word;
	}
	cout << pigLatinWord << endl;


}
