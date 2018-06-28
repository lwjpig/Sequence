#include"Sequence.h"
#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
#include<fstream>
#include<algorithm>
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
  return lon;
}

int com(const void *c,const void *d)
{
  int m=strcmp(*(char**)c,*(char**)d);
  return m;
}

int sort(char *c,char *d)
{
  int n=1;
 for(int i=0;c!=NULL&&d!=NULL;i++)
 {
  if(*c==*d)
   {
    n++;
    c++;
    d++;
   }
  else
    break;
 }
  return n;
}
char a[1500000], *b[1500000];

string Sequence::longestRepeated()
{ 
  for(int i=0;i<dna.length();i++)
   {
    a[i]=dna[i];
    b[i]=&a[i];
   }
  qsort(b,dna.length(),sizeof(char *),com);
  int n=0;
  int max=1;
  int k=0;
 for(int i=0;i<dna.length();i++)
  {
    n=sort(b[i],b[i+1]);
    if(n>max)
     {  
      max=n;
       k=i;
     }
  }
  string lon;
  for(int i=0;i<max;i++)
    {
      lon+=*b[k];
      b[k]=b[k]+1;
    }
  return lon;
}

