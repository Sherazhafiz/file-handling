#include<iostream>
#include<fstream>
using namespace std;
 
fstream file;
void add(){
	file<<"My degree is BS software Engineering.";
}

int main(){
	
	string str;
	int count=0;
	file.open("Question add.txt",ios::app);
	if(!file)
	cout<<"error";
	else{
	file<<"I am studing in NTU.";
	add();	
	}
	
	return 0;
}
