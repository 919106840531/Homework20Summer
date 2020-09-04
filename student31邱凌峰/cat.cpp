#include<iostream>
#include<string.h>
using namespace std;
class cat{
	private:
		int age;
		int weight;
		char color[8];
	public:
		void setdate(int a,int b,char c[8]){
			age=a;
			weight=b;
			strcpy(color,c);
		}
		void print(){
				cout<<"age:"<<age<<endl<<"weight:"<<weight<<endl;
	            cout<<"color:"<<color<<endl;
		}
		
}; 
int main(){
	cat mimi;
	int x,y;
	char z[8];
	cin>>x>>y;
	cin>>z;
	mimi.setdate(x,y,z);
	mimi.print();
	return 0;
	
}
