#include <bits/stdc++.h>
using namespace std;

 // We are going to check for only alphanumeric charcters and ignore all the spaces and other symbols.
 // The important function to check if a character is alphanumeric is 
 //std::isalnum(S[i]) which returns boolean value true if it is an alphanumeric number.
int main(){
   string s;
   getline(cin,s);
   transform(s.begin(),s.end(),s.begin(),::tolower);
   string s1 ="";
   for(int i=0;i<s.size(); i++){
          if(isalnum(s[i])){
                 s1+=s[i];
          }
   }
   
   
   string s2 = s1;
   cout << s2 << endl;
   reverse(s1.begin(), s1.end());
   cout << s1 << endl;
         
}
