/*
Perform Caesar Cipher with Alphabets and numbers to encrypt the text.

Caesar Cipher - shifting of text by the key-values in a circular order

Example - 

Input -

Text - AdfTu34
Key - 1

Output - 
BegUv45
*/

#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

string performCaesarCipher(string txt_plain, int val_key)
{
    string txt_cipher = "";
    int i = 0, idx = 0;

    while(txt_plain[i] != '\0')
    {
        if(isupper(txt_plain[i]))
        {
            idx = (txt_plain[i] - 'A') + val_key;

            if(idx >= 26)
            {
                txt_cipher += ('A' + (idx % 26));
            }
            else
            {
                txt_cipher += 'A' + idx;
            }
        }
        else if(islower(txt_plain[i]))
        {
            idx = (txt_plain[i] - 'a') + val_key;

            if(idx >= 26)
            {
               txt_cipher += ('a' + (idx % 26)); 
            }
            else
            {
                txt_cipher += 'a' + idx;
            }
        }
        else
        {
            idx = (txt_plain[i] - '0') + val_key;

            if(idx >= 10)
            {
                txt_cipher += ('0' + (idx % 10));
            }
            else
            {
                txt_cipher += '0' + idx;
            }
        }

        i++;
    }

    return txt_cipher;
}

int main()
{
    string plain_text = "", cipher_text = "";
    int key_value = 0;

    //input - plaintext
    cout<<"Enter the plaintext :"<<endl;
    fflush(stdin);
    getline(cin,plain_text);

    //input - key
    cout<<"Enter the key :"<<endl;
    fflush(stdin);
    cin>>key_value;

    cipher_text = performCaesarCipher(plain_text,key_value);

    cout<<endl<<"Cipher-Text :"<<endl<<cipher_text<<endl;

    return 0;
}