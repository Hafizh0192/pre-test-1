#include <iostream>
using namespace std;
int main () {
    string nama;
	string npm;
	string hobi;
	cout<<"Nama = ";
	getline(cin,nama);
	cout<<"NPM = "; 
	cin>>npm;
	cin.ignore(1,'\n');
	cout<<"Hobi = ";
	getline(cin,hobi);
	cout<<"fikri alhafizh = "<<nama<<" natar " <<2117051090<<" futsal "<<hobi;
	}	
