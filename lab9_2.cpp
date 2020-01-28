//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    
    ifstream source;
    //source.open("C://Users\\DANWRISTBAND\\Documents\\GitHub\\lab9-2562-2-danwristband\\cheerbook.text");
    source.open("cheerbook.txt");
    ofstream dest;
    dest.open("cheerbook_copy.txt");
    string textLine;
    dest<<"-------------------- SOTUS ---------------------"<<endl;
    while(getline(source,textLine))
    {
        dest<<textLine<<endl;
    }
    dest<<"-------------------- SOTUS ---------------------";
}