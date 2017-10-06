#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d,e,f,g,h;
char ch[100000],ch2[100000],ch3[100000],ch4[100000];

cout<<"Input the Key\n\n";
gets(ch);

a = strlen(ch);

cout<<"\n\nInput the Text\n\n";
gets(ch2);

//Encryption

 for(b=0;b<a;b++)
  {
    if(ch[b]==' ')
      ch3[b] = '_' ;// Taking Special text for Space

    else
    {

    if(ch[b]>='a' && ch[b]<='z')
      ch3[b] = (ch2[b]-'a'+ ch[b]-'a' +26)%26 +'a';//Encrypted Character for Small Letter
    else if(ch[b]>='A' && ch[b]<='Z')
      ch3[b] = (ch2[b]-'A'+ ch[b]-'A' +26)%26 +'A';//Encrypted Character for Capital Letter

    }
}

cout<<"\n\nEncrypted Text\n\n";

cout<<ch3<<"\n\n";

//Encryption


//Decryption

for(b=0;b<a;b++)
{
    if(ch[b]=='_')
      ch4[b] = ' ' ;// Taking Special text for Space

    else
    {
        if(ch[b]>='a' && ch[b]<='z')
          ch4[b] = ((ch3[b]- 'a') - (ch[b] - 'a') + 26 ) % 26 + 'a';//Decrypted Character for Small Letter
        else if(ch[b]>='A' && ch[b]<='Z')
          ch4[b] = ((ch3[b]- 'A') - (ch[b] - 'A') + 26 ) % 26 + 'A';//Decrypted Character for Capital Letter

    }
    //cout<<ch4[b];
}


cout<<"\n\nDecrypted Text\n\n";

for(b=0;b<a;b++)
   cout<<ch4[b];

cout<<"\n\n";

//Decryption

}

