#include<iostream>
#include<string>
using namespace std;
int main() 
{
    // Declaration of variables
    string sentence;
    int digit_counter = 0, letter_counter = 0, char_counter = 0, space_counter = 0; 

    cout<<"Please enter a sentence:"<<endl;
    getline(cin,sentence);
    cout<<sentence;

    for(int i = 0; sentence[i] != '\0'; i++){
        if(sentence[i] >= '0' && sentence[i] <= '9'){
            digit_counter++;
        }
        else if ((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z'))
        {
            letter_counter++;
        }
        else if(sentence[i] == ' '){
            space_counter++;
        }
        else
        {
            char_counter++;
        } 
    }
    cout<<sentence<<" has:-\n"<<letter_counter<<(letter_counter!= 1 ?" letters, " : " letter, ")<<digit_counter<<(digit_counter!= 1 ?" digits, " : " digit, ")<<space_counter<<(space_counter!= 1 ?" spaces and " : " space and ")<<char_counter<<(char_counter!= 1 ?" special characters." : " special character.")<<endl;
}