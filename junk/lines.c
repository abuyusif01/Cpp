#include <iostream>
using std::cin;
using std::cout;
int main() {
	int a, i, j = 1, x = 0, max;
	cout<< "Input number of lines: ";
	cin>>a >>max;

	for(i = 1; i <= a; i++) {
		while(x < max) {
			
			if ((j++)% 5 == 0 )
			{
				printf("%d ", j);
			}
			x++;
			if (j > max)
			{
				break;
			}
		}
		x = 0;
		cout<<"\n";
	}
	
	return 0;
}