#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d,e,f,g,h,i;

char ch[100000],ch2[100000],ch3[100000];


cout<<"Enter Text\n\n";

gets(ch);


map<char,int> my; // used for substitution used for encryption(small letters)

map<char,int> my2; // used for substitution used for decryption(small letters)

map<char,int> my3; // used for substitution used for encryption(Capital letters)

map<char,int> my4; // used for substitution used for decryption(Capital letters)

a = strlen(ch);

c=0;

for(b=0;b<26;b++)
{

my[b] = (b + 10)%26; //Substitution Pattern For Small Letter For Encryption

my2[my[b]] = b;      //Substitution Pattern For Capital Letter For Decryption

my3[b] = (b + 5)%26; //Substitution Pattern For Capital Letter For Encryption

my4[my3[b]] = b;    //Substitution Pattern For Capital Letter For Decryption

}

//Encryption

for(b=0;b<a;b++)
{
 if(ch[b]==' ')
   ch2[b] = '_' ;// Taking Special text for Space

 else
  {

   if(ch[b]>='a' && ch[b]<='z')
     ch2[b] = my[ch[b]-'a'] + 'a' ; //Encrypted Character for Small Letter
   else if(ch[b]>='A' && ch[b]<='Z')
     ch2[b] = my[ch[b]-'A'] + 'A' ;//Encrypted Character for Capital Letter

  }

}

cout<<"\n\nEncrypted Text\n\n";

cout<<ch2<<"\n\n";

//Encryption


//Decryption

for(b=0;b<a;b++)
{
   if(ch2[b]=='_')
    ch3[b] = ' ' ;// Taking Special text for Space

  else
    {

    if(ch[b]>='a' && ch[b]<='z')
       ch3[b] = my2[ch2[b]-'a'] + 'a' ;  //Decrypted Character for Small Letter
    else if(ch[b]>='A' && ch[b]<='Z')
       ch3[b] = my2[ch2[b]-'A'] + 'A' ;  //Decrypted Character for Capital Letter

    }
}

cout<<"\n\nDecrypted Text\n\n";

cout<<ch3<<"\n\n";

//Decryption

}

