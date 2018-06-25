#include"Sequence.h"
#include<iostream>
#include<string>
#include<fstream>


using namespace std;

Sequence::Sequence(string filename)
{
ifstream fin;
fin.open(filename.data());
string s;
while(getline(fin,s))
{
 dna+=s;
}
fin.close();
}

int Sequence::length()
{
int len=dna.length();
cout<<len<<endl;
return len;
}

int Sequence::numberOf(char base)
{
int n=0;
for(int i=0;i<dna.length();i++)
{
 if(dna[i]==base)
  n++;
}
   cout<<n<<endl;
   return n;
}



string Sequence::longestConsecutive()
{
int leng=dna.length();
string lon;
int most;
int l=1;
int max=1;
for(int i=1;i<leng;i++)
{
 if(dna[i]==dna[i-1])
  {
    l++;
     if(l>max)
       {
         most=dna[i];
         max=l;
       }
  }
 else
   { 
    l=1;
   }
} 
for(int i=0;i<max;i++)
  lon+=most;

//cout<<max<<endl;
cout<<lon<<endl;
return lon;
}

//string Sequence::longestRepeated()

