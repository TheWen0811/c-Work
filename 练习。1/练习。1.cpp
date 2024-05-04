#include <iostream>
using namespace std;
class baseclass {
public:
	baseclass() {
		cout << "construct baseclass" << endl;
	}
virtual ~baseclass() { cout << "distruct baseclass" << endl; }
};
class driveclass :public baseclass {
public:
	
};
int main() {
	baseclass* p = new driveclass;
	p->~baseclass()
}