#include "hashing.hpp"
#include<iostream>
using namespace std;
#include<string>
#include<cmath>

int hash_string(string s,int m) {
    // implement hashing function here
//<<<<<<< HEAD
    //int m = 71;
    int p = 31;
    
//=======
    //int m = 71;
//>>>>>>> main
    int sum=0;
    for(int i=0;i<s.length();i++){
		char x = s[i];
		int a = x;
		sum = sum + a*pow(p,i);
	}
	return sum%m;
}
