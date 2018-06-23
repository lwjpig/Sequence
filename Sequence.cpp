#include"Sequence.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

Sequence::Sequence(stringi filename)
{
file=filename;
ifstream fin;
fin.open(file.data());
assert(fin.is_open());

char a;
while(fin>>a)
{
int i=0;
A[i]=a;
i++;
}
fin.close();
number=i-1;
}

int Sequence::length()
{
for(int i=0;i<number;i++)
{
if(char A[i]=='\n')
{
length=number-1;
}
}
return len;
}

int Sequence::numberOf(char base)
{
int a=0,T=0,C=0,G=0;
for(int i=0;i<number;i++)
{
if(A[i]=='A')
a++;
else if(A[i]=='T')
T++;
else if(A[i]=='C')
C++;
else if(A[i]=='G')
G++;
}
if(base=='A')
return a;
else if(base=='T')
return T;
else if(base=='C')
return C;
else if(base=='G')
return G;
}

string Sequence::longestConsecutive()
{

}

string Sequence::longestRepeated();
{
}

