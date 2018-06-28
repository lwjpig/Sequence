#include"Sequence.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{

Sequence Se("dna.txt");
cout<<Se.length()<<endl;
cout<<Se.numberOf('C')<<endl;
cout<<Se.longestConsecutive()<<endl;
cout<<Se.longestRepeated()<<endl;

return 0;
}
