#include <iostream>
#include <fstream>
#include <cctype>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[]){
	if(argc ==1){
		cout << "Use: ./CutFile <arch> <out_arch> n" << endl;
		cout << "Extract the first n symbols of arch and copied to out_arch" << endl;
		return 0;
	}

	string filename = argv[1];
	string out_filename = argv[2];
	string number = argv[3];
	int64_t n = stoull(number);
	cout << "n : " << n << endl;

// unsigned long letters[256];

//	for(unsigned int i = 0; i < 256; i++)
//		letters[i] = 0;

	ifstream RefFile(filename.c_str());
	if (!RefFile.is_open()){
		cout << "Unable to open file" << endl;
		return 1;
	}

	ofstream myfile;
  myfile.open (out_filename.c_str());

	char c;
	int64_t count = 0;
	while (RefFile.get(c)) {
		if(count == n) 
			break;
		myfile << c;
		count++;
	}
	cout << "Number of characters copy: " << count << endl;
	RefFile.close();
	myfile.close();
	return 0;
}

