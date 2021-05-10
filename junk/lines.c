#include <iostream>

using namespace std;

int find_best(int x[], int y)
{
	int temp =x[0];
	for (int i =0; i< y; i++)
	{
		if(x[i] > temp)
		{
			temp = x[i];
		}
	}
	return temp;
}

int main()
{
	int n;
	cout << "Enter the number of students: ";
	cin >> n;
	int* a= new int[n]; // allocating the array in heap
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int best = find_best(a,n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] >= best - 10)
			{
				cout << "Student " << i << " Score is " << a[i]
					<< " and grade is A\n";
				break;
			}
			else if (a[i] >= best - 20)
			{
				cout << "Student " << i << " Score is " << a[i]
					<< " and grade is B\n";
				break;
			}
			else if (a[i] >= best - 30)
			{
				cout << "Student " << i << " Score is " << a[i]
					<< " and grade is C\n";
				break;
			}
			else if (a[i] >= best - 40)
			{
				cout << "Student " << i << " Score is " << a[i]
					<< " and grade is D\n";
				break;
			}
			else 
			{
				cout<< "The grade is F";
			}
		}
	}
	return 0;
}