Some simple scripts and small programs that could be useful.


## Programs:

-[CutFile] : 
	Extracts the first n symbols of the file 'in_file' and copied to 'out_file'. If file has less than n symbols then out_file is a complete copy of file.

		Use: ./CutFile <in_file> <out_file> n
		Language: C++11
		Compile: g++ -std=c++11 cut_file.cpp -o CutFile

[Count_lines_and_length] : 
	Returns the number of lines in the file the min, max, and average line length.

		Use: python ./Count_lines_and_length.py inputFile
		Laguage: python


[GetKmers] : Extract all the k-mers (substrings of lengh k) of inputFile into outputFile. The parameter s indicates the step taking between the start positions of each k-mer.
	
		Use: python ./GetKmers inputFile k-value s outputFile
		Laguage: python

