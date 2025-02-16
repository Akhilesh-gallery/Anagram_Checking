#include <iostream>
using namespace std;

int main() {
    string s1,s2;
    int letter1count =0,letter2count =0,count;
   cout<<"Enter string 1: ";
   cin>>s1;
   cout<<"Enter string 2: ";
   cin>>s2;
   if(s1.length() == s2.length()){
       for(int i=0;i<s1.length();i++){
           count =0;
           for(int j=0;j<s2.length();j++){
               if(s1[i]==s2[j]){
                   count =1;
                   break;
               }
           }
           if(count ==1){
               letter1count +=1;
           }
           else{
               printf("Strings are not Anagram");
               break;
           }
       }
       
       for(int i=0;i<s2.length();i++){
           count =0;
           for(int j=0;j<s1.length();j++){
               if(s2[i]==s1[j]){
                   count =1;
                   break;
               }
           }
           if(count ==1){
               letter2count +=1;
           }
           else{
               cout<<"Strings are not Anagram"<<endl;
               break;
           }
       }
       
       if(letter1count == s1.length() && letter2count ==s2.length()){
           cout<<"Strings are Anagram"<<endl;
       }
   }
   else{
      cout<<"Strings are not Anagram"<<endl;
   }
   
   

    return 0;
}