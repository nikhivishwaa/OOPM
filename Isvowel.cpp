#include<iostream>
using namespace std;

string is_vowel(char c){
    string vowels = "aeiou";
    if(isalpha(c)){
        for(int i=0; vowels[i] != '\0';i++){
            if(c==vowels[i] || c==toupper(vowels[i]))return "Vowel";
        }
        return "Consonant";
    }
    else return "Non-Character";
}

int main(){
    char i;
    cout<<"Enter a Character : ";
    cin>>i;
    string r = is_vowel(i);
    cout<<"You Entered "<<r<<endl;
    return 0;
}
