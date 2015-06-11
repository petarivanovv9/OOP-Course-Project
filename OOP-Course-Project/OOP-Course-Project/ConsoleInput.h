#pragma once

class ConsoleInput {
public:
	ConsoleInput();
	~ConsoleInput();
public:
	void distinguishConsoleInput(int argc, char* argv[]);
public:
	int getNumberFiles() const;
	int getNumberCommands() const;
public:
	char** getPathsToFiles() const;
	char** getCommands() const;
private:
	bool isCommand(char*);
	void copyCommand(char*, const char*);
private:
	void clearPathsToFiles();
	void clearCommands();
private:
	int numberFiles;
	char** pathsToFiles;
	int numberCommands;
	char** commands;
};