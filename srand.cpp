#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;

int main(){
	cout<<time(NULL)<<endl;
	srand(time(NULL));
	cout<<rand()<<endl;
	while(1){
		cout<<time(NULL)<<endl;
		Sleep(1000);
	}
	return 0;
}
