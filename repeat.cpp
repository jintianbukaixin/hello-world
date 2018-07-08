#include<iostream>
#include<string>

using namespace std;


int return_index(string input){
	int character[26];
	for(int i =0; i < 26;i++)
		character[i] = 0;

	for(int i = 0; i < input.length(); i++)
		character[(input[i]-'a')] ++;

	for(int i = 0; i <input.length();i++)
		if(character[(input[i]-'a')] == 1)
			return i;

	return -1;

}

int main(){

	string input;
	int output;

	cout << "Type in an input\n";
	cin >> input;
	output = return_index(input);
	cout << "Output is "<< output <<endl;


}
