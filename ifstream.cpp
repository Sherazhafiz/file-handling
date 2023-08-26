#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char d;
	string c;
	getline(cin,c,'#');
	ofstream file;
//	ofstream file;

	file.open("File.txt",ios::app);
	if(!file){
		cout<<"Error";
	}
	else{

		getline(file);
		
	}
	file.close();
//	file.open("File.txt");
//	if(!file){
//		cout<<"Error";
//	}
//	else{
//	while(!file.eof()){
//		file>>d;
//		cout<<d;
//	}	
//	}
	return 0;} 
