#include <iostream>
using namespace std;

string determineMultiple(int x, int y);

int main() {
	int n,m;
	
	cout<<"Enter one number: "<<flush;
	cin>>n;

	cout<<"Enter another number: "<<flush;
	cin>>m;


	return 0;
}

string determineMultiple(int x,int y){
	if(x%y==0){
		return x+"is multiple"+"of "+y;
	}else{
		return x+"is NOT multiple of "+y;
	}

}
