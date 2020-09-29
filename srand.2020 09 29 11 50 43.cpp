#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	cout<<time(NULL)<<endl;
	srand(time(NULL));
	cout<<rand()<<endl;
	while(1){
		cout<<time(NULL)<<endl;
		sleep(1);
	}
	return 0;
}
