#include<iostream>
#include<vector>
#include<set>

struct BigInteger{
	static const int BASE = 10000000;
	static const int WIDTH= 8;
	vector<int> s;
	
	BigInteger(long  long num =0){
		*this = num;
	}
	BigInteger operator = (long long num){
		s.clear();
		do{
			s.push_back(num % BASE);
			num /= BASE;
			
		}
	}
};
