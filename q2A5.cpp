#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    string input;
    string output;
    cout << "Enter a line of text." << endl;
    getline(cin,input);
    input = input + " ";
    cout << input.size() << endl;
    int again = 1;
    int index = 0;
    int count = 0;
    string current;
    while(again == 1){
        if(isalpha(input[index])){
            current = current + input[index];
            count = count+1;
        }
        else{
            if(count == 4){
                if(isupper(current[0])){
                    current = "Love";
                }
                else{
                    current = "love";
                }
            }
            output = output + current + input[index];
            current.clear();
            count = 0;
        }
        if(index == input.size()){
            again = 0;
        }
        index = index + 1;

    }
    cout << output << endl;
}