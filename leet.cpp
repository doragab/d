#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<char> text;
	vector<string> leet;

	cout<<"szoveg: ";

	string be;
	getline(cin,be);

	for(int i=0;i<be.size();++i) {
		text.push_back(be[i]);
	}

	for(int i=0; i<text.size();i++) {
		if(text[i]=='A') leet.push_back("4");
		if(text[i]=='B') leet.push_back("8");
		if(text[i]=='C') leet.push_back("<");
		if(text[i]=='D') leet.push_back("|)");
		if(text[i]=='E') leet.push_back("3");
		if(text[i]=='F') leet.push_back("ph");
		if(text[i]=='G') leet.push_back("[");
		if(text[i]=='H') leet.push_back("4");
		if(text[i]=='I') leet.push_back("1");
		if(text[i]=='J') leet.push_back("_7");
		if(text[i]=='K') leet.push_back("|<");
		if(text[i]=='L') leet.push_back("][");
		if(text[i]=='M') leet.push_back("44");
		if(text[i]=='N') leet.push_back("/\/");
		if(text[i]=='O') leet.push_back("0");
		if(text[i]=='P') leet.push_back("/o");
		if(text[i]=='Q') leet.push_back("0");
		if(text[i]=='R') leet.push_back("12");
		if(text[i]=='S') leet.push_back("5");
		if(text[i]=='T') leet.push_back("+");
		if(text[i]=='U') leet.push_back("\_/");
		if(text[i]=='V') leet.push_back("\/");
		if(text[i]=='W') leet.push_back("\/\/");
		if(text[i]=='X') leet.push_back("*");
		if(text[i]=='Y') leet.push_back("¥");
		if(text[i]=='Z') leet.push_back("2");
	}

	cout<<endl<<"leet: ";

	for (int i=0;i<leet.size();i++) {
		cout<<leet[i];
	}
	cout<<endl;
}