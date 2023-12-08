#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string question;
    string next;
    ifstream ifs;
    ifs.open("answers.txt");

    int again = 0;
    do{
        cout << "Ask any question! It will be answered." << endl << endl;
        cin.ignore();
        getline(cin,question);
        if(getline(ifs,next)){
            cout << next << endl << endl;
        }
        else{
            ifs.close(); ifs.open("answers.txt");
            getline(ifs,next);
            cout << next << endl << endl;
        }
        cout << "Would you like to ask another question?" << endl
        << "Enter 1 for Yes" << endl << "Enter anything else for No" << endl << endl;
        cin >> again;
    }
    while(again == 1);



}