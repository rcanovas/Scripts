'''
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
'''

import sys
import re

if len(sys.argv) != 2:
	print 'Use: python ./Count_lines_and_length.py inputFile'
        print 'Returns the number of lines in the file the min, max, and average line length'
	sys.exit('Error')

arg1 = sys.argv[1]
in_file = open(arg1,'r')
count = 0
min_l = float('inf')
max_l = 0
avg_l = 0

while(1):
	"""get each line"""
	line = in_file.readline()
	if not line:
		break
	l = len(line) - 1
	if (l > max_l) :
		max_l = l
	if (l < min_l) :
		min_l = l
	avg_l = avg_l + l
        count = count + 1;

print 'max: ' + str(max_l)
print 'min: ' + str(min_l)
print 'avg: ' + str(avg_l / count)
print 'N. Lines: ' + str(count)
