
#include "PhoneticFinder.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;



namespace phonetic{

int equalChar(char a,char b){

    if(a==b) return 1;
    if((a=='v' && b=='w')||(a=='w' && b=='v')) return 1;
    if((a=='b' && b=='f')||(a=='f' && b=='b')) return 1;
    if((a=='b' && b=='p')||(a=='p' && b=='b')) return 1;
    if((a=='p' && b=='f')||(a=='f' && b=='p')) return 1;
    if((a=='g' && b=='j')||(a=='j' && b=='g')) return 1;
    if((a=='c' && b=='k')||(a=='k' && b=='c')) return 1;
    if((a=='c' && b=='q')||(a=='c' && b=='q')) return 1;
    if((a=='k' && b=='q')||(a=='q' && b=='k')) return 1;
    if((a=='s' && b=='z')||(a=='z' && b=='c')) return 1;
    if((a=='d' && b=='t')||(a=='t' && b=='d')) return 1;
    if((a=='o' && b=='u')||(a=='u' && b=='o')) return 1;
    if((a=='i' && b=='y')||(a=='y' && b=='i')) return 1;

    return 0;

}
string equalWord(string word_a,string word_b){
    if(word_a.size()!= word_b.size()) 
    return "null";
   
 for(int i=0;i<word_a.size();i++){
           
    if(equalChar(word_a[i],word_b[i]))
       return word_a;
     else return "null"; 
        }
    

}

string toLower(string text){
    int i=0;
    string str="";
    while(i<text.length()){
        str+=tolower(text[i]);
        i++;
    }
    return str;
}

string find(string text,string word){

string ltext= toLower(text);
string lword= toLower(word);
string ans="";

int i=0;


while(i<ltext.length()){
    if(equalChar(ltext[i],lword[0])){
    if(lword.empty()){
        throw "word is empty";
    }
    for(int j=0;j<lword.size();j++){
    if(lword[j]==' '){
        throw "illegal";}
    } 
    
string original="";
string temp1="";
string temp2=""; 

    while(i<lword.size()){
    temp1+=ltext[i];
    original+=text[i];
    
        i++;
        
    }
   
     
    
      
    temp2=equalWord(temp1,lword);
    if(temp2!="null") ans=original;
    else throw "no"
    }
   
    i++; 
   

}

    return ans;

}}



