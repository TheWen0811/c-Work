
#include <iostream>
using namespace std;
int main()
{
	char answer;
	cout << "Memu:A(dd)D(elete)S(ort)Q(uit)";
	cin >> answer;
	if (answer == 'A') {cout << "数据已经添加";}
	else if (answer =='D'){ cout << "数据已经删除";}
	else if (answer=='S'){cout << "数据已经排序";}
	else if (answer == 'Q') { return 0; }
}



		
		


	
	

	








