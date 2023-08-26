#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
using namespace std;
fstream file;
class contact{
	private:
	string id;
	string firstname;
	string lastname;
	string telephone;
	string mobilenumber;
	string email;
	string city;
	public:
	void add();
	void display(contact c[],int size);
	void search(contact c[]);
};
 void contact::add(){
    cin.ignore(5,'\n');
 	cout<<"  enter id            : ";getline(cin,id);
 	file<<id;
 	cout<<"  enter firstname     : ";getline(cin,firstname);
 	file<<firstname;
 	cout<<"  enter laststname    : ";getline(cin,lastname);
 	file<<lastname;
 	cout<<"  enter Telephone     : ";getline(cin,telephone);
 	file<<telephone;
 	cout<<"  enter mobilenumber  : ";getline(cin,mobilenumber);
 	file<<mobilenumber;
 	cout<<"  enter email         : ";getline(cin,email);
 	file<<email;
 	cout<<"  enter city          : ";getline(cin,city);
 	file<<city;
 	cout<<"    ------------Data Saved--------- \n";
 	system("pause");
 	system("CLS");
 }
 void contact::display(contact c[],int size){
 	cout<<left<<setw(16)<<"id"<<setw(13)<<"firstname"<<setw(13)<<"lastname"<<setw(14)<<"telephone"<<setw(16)<<"mobileNo"<<setw(28)<<"email"<<setw(16)<<"city\n"<<endl;                                  
 	for(int i=0;i<=size;i++){
 	cout<<setw(16)<<c[i].id;	
 	cout<<setw(13)<<c[i].firstname;	
 	cout<<setw(13)<<c[i].lastname;	
 	cout<<setw(14)<<c[i].telephone;	
 	cout<<setw(16)<<c[i].mobilenumber;	
 	cout<<setw(28)<<c[i].email;	
 	cout<<setw(16)<<c[i].city;
	 cout<<endl;
	 }
	 system("pause");
	 system("CLS");
 }
 void contact::search(contact c[]){
 	string FN;
 	cout<<"--------  search contact information from first name --------\n\n";
 	cin.ignore(5,'\n');
 	cout<<"enter first name : ";getline(cin,FN);
 	for(int i=0;i<20;i++){
 		if(FN==c[i].firstname){
 			cout<<"---id             : "<<c[i].id<<endl;
 			cout<<"---lastname       : "<<c[i].lastname<<endl;
 			cout<<"---telephone      : "<<c[i].telephone<<endl;
 			cout<<"---mobilenumber   : "<<c[i].mobilenumber<<endl;
 			cout<<"---email          : "<<c[i].email<<endl;
 			cout<<"---city           : "<<c[i].city<<endl;
		 }
	 }
	 system("pause");
	 system("CLS");
 	
 }

int main(){
	contact c[20];
	int key,num=0;
	char a;
	file.open("Telephone.txt",ios::out);
	for(int i=0;i<20;i++){
	cout<<"----------------Telephone Directory------------\n\n";
	cout<<"   1 :           ---Add Record---\n";
	cout<<"   2 :           ---Display All---\n";
	cout<<"   3 :      ---Search By First Name---\n\n\n\n";
	cout<<"-------enter your choice : ";cin>>key;
	if(key==1 || key==2 || key==3){
		if(key==1){
		c[i].add();
		num=num+1;
		cout<<"Data saved for "<<num<<" person \n";
	    system("pause");
		system("CLS");
	
	}
	if(key==2){
		if(i>0){
			c[0].display(c,i);
		}
		else
		cout<<"no data saved ?????? \n";
	}
	if(key==3){
		if(i>0){
			c[20].search(c);
		}
		else
		cout<<"no data found for searchig ?????? \n"; 
	}
	}
	else{
		cout<<"please enter choice between 1 to 3 \n";
		system("pause");
		system("CLS");
	}
	cout<<"\n\n";
	cout<<"enter # if wanna exit the program otherwise enter any key : ";cin>>a;
	if(a=='#')
	break;
	if(a!='#')
	system("CLS");
	
	}
	file.close();
	return 0;
}
