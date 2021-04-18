#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void processFile()
{
	ifstream infile; //Container for the file
	infile.open("nameOfTheFile.txt"); //Name of the file you want to open
	string stringFromFile; //string variables to store extracted strings


	if (infile.fail()) //Display error if the file failed to open
	{
		cout << "Input file failed to open";
	}
	else
	{
		getline(infile, stringFromFile);
	}
	cout << stringFromFile;

//		return 0;
}




void myFun()
{

///*
//	 Creating a stream reader object and assigning the "hello.txt" text file to it
//	StreamReader readText = new StreamReader("hello.txt");
//
//	 Assigning the value in the text file to a string variable using the ReadLine() function
//	string helloText = readText.ReadLine();
//
//	 Creating a new stream writer object and assigning the "hello.txt" text file to it
//	StreamWriter editText = new StreamWriter("hello.txt");
//
//	 Using the WriteLine() function to add the text "hello everybody" to the original text file
//	editText.WriteLine("hello everybody");*/




}