#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream file;
	char c;
	file.open("name.txt",ios::out);
	if(!file){
		cout<<"file not created ";
	}
	else
	cout<<"file created successfully : \n;
	file<<"I am a student of Software Engineering ";
	file.close();
	cout<<"\n";
	file.open("name.txt",ios::in);
	while(!file.eof()){
	file>>c;
//	cout<<" ";
	cout<<c;
	}
	
	file.close();
	return 0;
}
