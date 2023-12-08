#include<iostream>
#include<iomanip>
#include<fstream>
#include<vector>
using namespace std;

void combineSort(ifstream &ifs1, ifstream &ifs2, ofstream &ofs);

int main(){
    ifstream ifs1, ifs2;
    ifs1.open("file1.txt"); ifs2.open("file2.txt");
    ofstream ofs;
    ofs.open("file3.txt");

    if(ifs1.fail()){
        cout << "Failure opening file1.txt";
        exit(1);
    }
    if(ifs2.fail()){
        cout << "Failure opening file2.txt";
        exit(1);
    }
    if(ofs.fail()){
        cout << "Failure opening file3.txt";
        exit(1);
    }

    combineSort(ifs1,ifs2,ofs);

    cout << "File combination and sorting complete!" << endl;

}

void combineSort(ifstream &ifs1, ifstream &ifs2, ofstream &ofs){
    vector<int> list;
    int next, holder, index, previous;
    while(ifs1 >> next){
        list.push_back(next);
    }
    while(ifs2 >> next){
        list.push_back(next);
    }
    for(int i=0; i<=list.size()-1; i++){
        holder = list[i];
        index = i;
        for(int j=i+1; j<=list.size()-1; j++){
            if(holder>list[j]){
                holder = list[j];
                index = j;
            }
        }
        previous = list[i];
        list[i] = holder;
        list[index] = previous;
    }
    for(int k=0; k<=list.size()-1; k++){
        ofs << list[k] << endl;
    }
}