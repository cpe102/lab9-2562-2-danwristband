#include<iostream>
using namespace std;

int main(){
	//int A=1,B=1,D=1,C=1,F=1;
	int i=0;
	char grade;
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student ["<< i+1<<"]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A') {
			count[0]+=1;
			//A++;

		}// if grade is A
			//Do something
		else if(grade=='B'){
			count[1]+=1;
			//B++;
		} // if grade is B
			//Do something
			else if(grade=='C'){
			count[2]+=1;
			//C++;

		}

		else if(grade=='D'){
			count[3]+=1;
			//D++;
		}

		
		else if(grade=='F'){
			count[4]+=1;
			//F++;
		}
		//and so on ... for grade = C, D, F	
		
		else{ 
			if(grade!='0')
			cout<<"Wrong input. Please input again."<<endl;// grade is wrong input
			//Do something
			i--;
			
		} 
		i++;
		}

	while(grade!='0');
	
	
	cout << "In total "<<i<<" students."<<endl;
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "F = " << count[4] <<",";

	//	and so on ... for grade = C, D, F	
	
	
	return 0;
}

