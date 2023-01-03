#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main() {

	char ch = ' ';
	string var;
	vector<char> story;

	// Write the text to the file in ASCII format
	  
	// create a file
	ofstream file;
	file.open("My_secret_massage.txt",ios::out);

	cout << "  Enter your text (Enter \'`\' to stop writing) " << endl;
	
	// get user input and write it into a file
	while (ch != '`') {
		cin.get(ch);
		story.push_back(ch);
		
	} 
	for (auto a : story) {
		file << int(a) << endl;
	}
	file.close();
	system("pause");
	system("cls");

	// Show the text to the user
	ifstream stream("My_secret_massage.txt");
	
	while (getline(stream, var)) {
		int num = stoi(var);
		if (char(num) == '`') {
			cout << " ";
		}
		else {
			cout << char(num);
		}	
	}
	cout << endl;

	return 0;
}

