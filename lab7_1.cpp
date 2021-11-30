#include<iostream>
#include<string>
using namespace std;


string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string check(string x, string y){
	int i = 0, L = x.size();
	string palindromeresult_text;

	while(i < L){
		if(x[i] == y[i])
		{
			palindromeresult_text = "Yes";
			i++;
		}
		else
		{
			palindromeresult_text = "No";
			L = 0;
		}
	}
	return palindromeresult_text;	
}

int main(){
	string input_text;
	string output_text;
	

    cout << "Input text: ";
	cin >> input_text;
	output_text = func1(input_text);
    cout << "Reversed text: " << output_text << endl;

	input_text = func2(input_text);
	output_text = func2(output_text);
	
    cout << "Palindrome: " << check(input_text, output_text);
    return 0;
}
