#include<iostream>
#include "functions.h"
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
		
	//Задача 1.
	cout << "Задача 1.\n\n";

	ofstream out;
	out.open("file.txt", ios::app);
	if (out.is_open()) {
		string input;
		do {
			cout << "Введите строку:\n";
			getline(cin, input);
			out << input << "\n";
		} while (input != "end");
	}
	else
		cout << "Open file error\n";
	out.close();

	ifstream in;
	in.open("file.txt");
	if (in.is_open()) {
		while (!in.eof()) {
			string str;
			getline(in, str);
			cout << str << endl;
		}
	}
	else
		cout << "Open file error\n";
	in.close();

	remove("file.txt");




	
	return 0;
}
