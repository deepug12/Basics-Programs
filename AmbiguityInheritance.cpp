// Inheritance Ambiquity Implementation

#include<bits/stdc++.h>
using namespace std;

class A{

public:

	void func(){
		cout <<"I am A"<<'\n';
	}

};
class B{
public:
	void func(){
		cout<<"I am B"<<'\n';
	}
};
class C : public A, public B{

};
int main(){

	C obj3;

	obj3.A::func();
	obj3.B::func();


	return 0;


	
}
