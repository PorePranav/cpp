#include <iostream>
#include <memory>
using namespace std;

int main(){
	shared_ptr<int> p1 {new int{100}};
	cout<<*p1<<endl;

	*p1 = 200;
	cout<<*p1<<endl;

	cout<<p1.use_count()<<endl;
	p1.reset();
	cout<<p1.use_count()<<endl;

	return 0;
}
