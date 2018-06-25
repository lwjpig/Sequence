#include"Sequence.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
char A,C;
Sequence Se("dna.txt");
Se.length();
Se.numberOf('C');
Se.longestConsecutive();

return 0;
}
