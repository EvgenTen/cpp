#include <iostream>
#include <stdexcept>
#include <string> 
#include "PhoneticFinder.hpp"
using namespace std;



namespace phonetic{
   

bool equalChar(char a,char b){

    if(a==b) return true;
    if((a=='v' && b=='w')||(a=='w' && b=='v')) return true;
    if((a=='b' && b=='f')||(a=='f' && b=='b')) return true;
    if((a=='b' && b=='p')||(a=='p' && b=='b')) return true;
    if((a=='p' && b=='f')||(a=='f' && b=='p')) return true;
    if((a=='g' && b=='j')||(a=='j' && b=='g')) return true;
    if((a=='c' && b=='k')||(a=='k' && b=='c')) return true;
    if((a=='c' && b=='q')||(a=='q' && b=='c')) return true;
    if((a=='k' && b=='q')||(a=='q' && b=='k')) return true;
    if((a=='s' && b=='z')||(a=='z' && b=='s')) return true;
    if((a=='d' && b=='t')||(a=='t' && b=='d')) return true;
    if((a=='o' && b=='u')||(a=='u' && b=='o')) return true;
    if((a=='i' && b=='y')||(a=='y' && b=='i')) return true;

    return false;

}
bool equalWord(string word_a,string word_b){
if(word_a.size()!= word_b.size()) {
    return false;
}
else {
 int i=0;

  while(i<word_a.size()){
     if(!equalChar(word_a[i],word_b[i])){
         
     return false;
     }
     i++;  
    }
}
 return true;
}
string toLower(string text){
 string str="";
    for(int i=0;i<text.size();i++){
        str+=tolower(text[i]);
        
    }
    return str;
}

string find(string text,string word){
  
try{
    if(word.empty()){
        throw word;
    }}
    catch(exception ex){
      cout<< "word is empty"<< ex.what() << endl;
  }

try{
    for(int j=0;j<word.size();j++){
    if(word[j]==' '){
        throw word;}
    }}
catch(...){
      cout<< "illegal word"<<  endl;
  }

string ltext= toLower(text);
string lword= toLower(word);
string answer="";


int i=0;

bool temp2;
while(i<ltext.size()){
   
    if(equalChar(ltext[i],lword[0])){

string real="";
string temp1="";
 
 
    while(ltext[i]!=' '){
    temp1+=ltext[i];
    real+=text[i];
        i++;

    if(ltext[i]==ltext[ltext.size()])break;
    }
     	 
    temp2=equalWord(temp1,lword);
    if(temp2) {answer=real;}
   
    }

    i++;
}
 
    if(!temp2 && answer.empty())throw invalid_argument("word not found");  


    return answer;
     
}   
}