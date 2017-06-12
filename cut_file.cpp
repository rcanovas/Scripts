/*
 	Copyright (C)2013-2017 Rodrigo Canovas

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see http://www.gnu.org/licenses/ .
*/

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

