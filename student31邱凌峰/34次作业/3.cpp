#include<iostream>
#include<string.h>
using namespace std;

class Person
{
	
	
	
public:
	char sex;
	int child_num;
	Person* father,*mother;
	
	
	char name[10];
	Person()
	{
		sex='N';
		father=NULL;
		mother=NULL;
	}
	Person(char* name,char sex,Person* father=NULL,Person* mother=NULL)
	{
		strcpy(this->name,name);
		this->sex=sex;
		this->father=father;
		this->mother=mother;
	}
	~Person(){}
	void show_fa()
	{
		if(father==NULL)
			cout<<name<<"'s father is unkonwn"<<endl;
		else
			cout<<name<<"'s father is: "<<father->name<<endl;
	}
	void show_mo()
	{
		if(mother==NULL)
			cout<<name<<"'s mother is unkonwn"<<endl;
		else
			cout<<name<<"'s mother is: "<<mother->name<<endl;
	}
	void set_fa(Person* p)
	{
		
		father=p;
	}
	void set_mo(Person* p)
	{
		
		mother=p;
	}
	void find_zf()
	{
		if(father==NULL||father->father==NULL)
		{
			cout<<name<<"'s zf is unknown"<<endl;
			return;
		}			
		else
			cout<<name<<"'s zf is: "<<father->father->name<<endl;
	}
	void find_zm()
	{
		if(father==NULL||father->mother==NULL)
		{
			cout<<name<<"'s zm is unknown"<<endl;
			return;
		}
		else
			cout<<name<<"'s zm is: "<<father->mother->name<<endl;
	}
	void find_wzf()
	{
		if(mother==NULL||mother->father==NULL)
		{
			cout<<name<<"'s wzf is unknown"<<endl;
			return;
		}
		else
			cout<<name<<"'s wzf is: "<<mother->father->name<<endl;
	}
	void find_wzm()
	{
		if(mother==NULL||mother->mother==NULL)
		{
			cout<<name<<"'s wzm is unknown"<<endl;
			return;
		}
		else
			cout<<name<<"'s wzm is: "<<mother->mother->name<<endl;
	}
