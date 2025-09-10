#include<iostream>
using namespace std;
class Sum{
	public :
		int a,b,c;
		void get(){
			cout<<"Enter 2 values : ";
			cin>>a>>b;
		}
		void sum(){
			c = a + b;
		}
		void show(){
			cout<<"Sum of "<< a <<" and "<< b <<" is "<<c;
		}
};
int main(){
	Sum s1;
	s1.get();
	s1.sum();
	s1.show();
	return 0;
}
