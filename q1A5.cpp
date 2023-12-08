#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(){

    char sentence[101];
    cout << "Enter a sentence of 100 characters or less. The sentence must end with a period." << endl;
    cin.ignore();
    cin.getline(sentence,101);

    char previous = ' ';
    int again = 1;
    int index1 = 0;
    int index2 = 0;
    while(again == 1){
        if(sentence[index1] == '.'){
            cout << "." << endl;
            again = 0;
        }
        else if(isspace(sentence[index1])){
            if(isalnum(previous)){
                if(ispunct(sentence[index1+1])){

                }
                else{
                    previous = ' ';
                    cout << previous;
                    index2 = index2 + 1;
                }
            }
        }
        else if(isalnum(sentence[index1])){
            if(index2 == 0){
                previous = toupper(sentence[index1]);
                cout << previous;
                index2 = index2 + 1;
            }
            else{
                previous = tolower(sentence[index1]);
                cout << previous;
                index2 = index2 + 1;
            }
        }
        index1 = index1 + 1;
        if(index1>101){
            again = 0;
        }
    }
}