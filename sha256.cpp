


#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// ---------importing the SHA256 file ---------
#include "sha256.h"

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" ,stdout);
#endif

string msg;

		cout << "Write the message:" << '\n';
		cin >> ws;
		getline(cin, msg);

		string hash = SHA256::cifrar(msg);
		cout << '\n' << "Resulting hash: "<< '\n' << hash;	

}



   


