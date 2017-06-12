'''
 	Copyright (C)2013-2016 Rodrigo Canovas

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
'''

import sys
import re

if len(sys.argv)!=5:
	print 'Use: python ./GetKmers inputFile k-value s outputFile'
        print 'Write in the outputFile all the k-mers of size k taking every s steps'
	sys.exit('Error')

arg1 = sys.argv[1]
in_file = open(arg1,'r')
k = int(sys.argv[2])
step = int(sys.argv[3])
arg2 = sys.argv[4]
out_file = open(arg2,'w')


while(1):
	"""get each line"""
	line = in_file.readline()
	if not line:
		break
        n = len(line) - 1 - k
        if n > 0:
            i = 0
            while i <= n:
                k_mer = line[i:i+k]
                k_mer += '\n'
                out_file.write(k_mer)
                i += step

