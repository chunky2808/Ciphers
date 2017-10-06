#include<bits/stdc++.h>
using namespace std;
//Caeser Cipher

int main()
{
int a,b,c,d,e,f,g,h,i;
char ch[100000],ch2[100000],ch3[100000];

cout<<"Enter Text\n\n";

gets(ch);

cout<<"\n\nEnter no of position by which you want to shift\n\n";


cin>>a; // Key By which You want to shift

//Encrpytion

b = strlen(ch);

for(c=0;c<b;c++)
{
if(ch[c]==' ')
ch2[c] = '_' ;// Taking Special text for Space
else
{
if(ch[c]>='a' && ch[c]<='z')
ch2[c] = (((ch[c] -'a' + a)%26)+'a' ); //Encryption for Small letters
else if(ch[c]>='A' && ch[c]<='Z')
ch2[c] = (((ch[c] -'A' + a)%26)+'A' ); //Encryption for Capital letters
}
}
cout<<"\n\nEncrypted Text\n\n";

cout<<ch2<<"\n";

//Encrpytion

//Decrpytion

for(c=0;c<b;c++)
{
   if(ch2[c]=='_')
     ch3[c] = ' ';
   else
    {
      if(ch[c]>='a' && ch[c]<='z')
        ch3[c] = ((ch2[c] - 'a' + 26 - a)%26)+'a';//Decryption for Small letters
      else if(ch[c]>='A' && ch[c]<=   'Z')
        ch3[c] = ((ch2[c] - 'A' + 26 - a)%26)+'A';//Decryption for Capital letters
    }
}
cout<<"\n\nDecrypted Text\n\n";

cout<<ch3<<"\n";

//Decrpytion

}



