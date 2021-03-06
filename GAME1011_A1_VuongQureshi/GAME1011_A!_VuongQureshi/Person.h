#pragma once
#ifndef __PERSON__
#define __PERSON__

#include <iostream>
#include <cstdlib>  
#include <string>
#include <cmath>

class Person
{
protected:
	int age;              // This will hold the age of the person
	std::string name;     // This will hold the name of the person
	std::string firstName[36] = {
		"Cassity",
		"Mustafa",
		"Olivia",
		"Tristan",
		"Jamari",
		"Liam",
		"Noah",
		"Alex",
		"Punjeet",
		"Madison",
		"Cathy",
		"Isaac",
		"Phillip",
		"Daniel",
		"Cody",
		"Coda",
		"Sypha",
		"Douglas",
		"Damien",
		"Elizabeth",
		"Francis",
		"Zachary",
		"Penolope",
		"Alexis",
		"Simran",
		"Jane",
		"Letica",
		"Mathew",
		"Maya",
		"Caroline",
		"Evan",
		"Evaline",
		"Catherine",
		"Jonathan",
		"Jake",
		"Wally"
	};

	std::string lastNames[36] = {
		"Hall",
		"Allen",
		"Young",
		"Hernandez",
		"King",
		"Wright",
		"Lopez",
		"Hill",
		"Scott",
		"Green",
		"Baker",
		"Gonzalez",
		"Nelson",
		"Carter",
		"Mitchell",
		"Perez",
		"Roberts",
		"Turner",
		"Phillips",
		"Campbell",
		"Parker",
		"Evans",
		"Edwards",
		"Dat",
		"Cass",
		"Hasan",
		"Kat",
		"Wally",
		"Muhammad",
		"Nelson",
		"Alex",
		"Nick",
		"Hegfoege",
		"Joshua",
		"Swonker",
		"Pain"
	};

public:
	Person();
	virtual ~Person();
	virtual void displayInfo() = 0;

	//Setters
	void setAge(int age);
	void setName(const std::string name);

	//Getters
	const int getAge();
	const std::string getName();
};
#endif
