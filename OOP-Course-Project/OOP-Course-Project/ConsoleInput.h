#pragma once

class ConsoleInput {
public:
	ConsoleInput();
	~ConsoleInput();
public:
	void distinguishConsoleInput(int argc, char* argv[]);
public:
	const int getNumberFiles();
	void setNumberFiles(int);
	//void setNumberCommands();
private:
	//void addPathsToFiles(char**, int);
	//void addCommands(char**, int);
private:
	bool isCommand(int, char*);
	void copyCommand(char*, const char*);
private:
	void clearPathsToFiles(char**, int);
	void clearCommands(char**, int);
private:
	int numberFiles;
	char** pathsToFiles;
	int numberCommands;
	char** commands;
};