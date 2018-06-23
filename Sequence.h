#ifndef SEQUENCE_H
#define SEQUENCE_H

#include<string>

class Sequence
{
public:
Sequence(string);
int length();
int numberOf(char);
string longestConsecutive();
string longestRepeat();

private:
char A[10000];
string file;
int len=0;
int number=0;
};

#endif
