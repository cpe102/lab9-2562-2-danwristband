//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
using namespace std;
int main(){
    
    int count=0;
    float sum=0;
    float miw=0;
    ifstream source;
    source.open("score.txt");
    string textLine;

    while(getline(source,textLine))
    {
       // cout<<textLine<<endl;
        sum+=atof(textLine.c_str());
        miw+=pow(atof(textLine.c_str()),2);
        //miw+=((atof(textLine.c_str()))-sum);
        count++;

    }
    
    cout<<"Number of data ="<<count<<endl;
    cout<<"Mean ="<<sum/count<<endl;
    cout<<"Standard deviation = "<<pow((miw/count)-pow((sum/count),2),0.5);

    

}