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

string Sequence::longestRepeated()//超时了
{ 
  string right,left;
  int len=dna.length()/2;
  for(len ; len>0; len--)
   {  
     for(int i=0; i<len; i++)
      {
        right=dna.substr(0,len+1);
        left=dna.substr(len+1);
        
        if(left.find(right)!=-1)
         return right;
       }
    }
   cout<<right<<endl;
   return NULL;   
}
 

