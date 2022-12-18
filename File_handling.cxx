#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
ofstream myWriteFile("Anish.txt");
myWriteFile<<"One of the Greatest Superstars of all Timee!! Anishh Patilll!!";
myWriteFile.close();

string name;
ifstream myReadFile("Anish.txt");
while(getline(myReadFile,name));
cout<<name;
myReadFile.close();
	return 0;
}