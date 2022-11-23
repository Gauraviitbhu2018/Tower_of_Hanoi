#include<iostream>
#include<string>
using namespace std;

void tower_of_hanoi(int n, char source, char dest, char helper){
	if(n==0){
		return;
	}
	tower_of_hanoi(n-1,source,helper,dest);
	cout<<"move out from "<<source<<" to "<<dest<<endl;
	tower_of_hanoi(n-1,helper,dest,source);
	return;
}
int main(){
	int n;
	cin>>n;
	tower_of_hanoi(n,'A','C','B');
	return 0;
}

//my name isgkj
