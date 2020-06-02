#include <iostream>
#include <string>
#include <limits>
using namespace std;

string determineMultiple(int x, int y);
void controlInput(int& n);


int main() {
	int n,m;
	
	cout<<"Enter one number: "<<flush;
	cin>>n;

	cout<<"Enter another number: "<<flush;
	cin>>m;
	
	cout<<determineMultiple(n,m)<<endl;

	return 0;
}

string determineMultiple(int x,int y){
	
	string result="";
	if(x%y==0){
		result= to_string(x)+" is multiple of "+to_string(y);
	}else{
		result= to_string(x)+" is NOT multiple of "+to_string(y);
	}
	return result;

}

void controlInput(int& n){

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max());

	cout<<"Enter a valid number: "<<flush;
	cin>>n;
}
