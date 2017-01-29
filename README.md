#A parser of text in C

Input: a txt file, max characters of file 1024, if there are more they are ignored.

Parse the text and get the words

Algorithm "parser.c"

Makefile commands

	make: compiles code
	clear: deletes files
	make run: executes prog without args

Run with args, executable file is "parser", input file words.txt, save the decoded text in myout1.txt

	./parser < words.txt > myout1.txt

In folder example there are files to test the algorithm

	"words.txt" is the text
	"scannedWords.txt" is the parsed words

Compare files

	diff -b myout1.txt stdout1.txt
