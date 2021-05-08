#include <iostream>
using std::cout;
using std::cin;

void print_n_lines(int, int, int);

int main(int argc, char const *argv[])
{
	print_n_lines(0, 101, 9);

	return 0;
}

void print_n_lines(int x, int y, int z)
{
	int b =0;
	int count =0;
	for (int i =x; i< y; i++)
	{
		if(i % 5 ==0 || i % 7 == 0)
		{

			b++;
		}
	}

	int a[b];

	for (int i =x; i< y; i++)
	{
		if(i % 5 ==0 || i % 7 == 0)
		{

			a[count] = i;
			count ++;
		}
	}
	
	// int y = (int)round(x);
	double l = double(b) /(double(z) -0.5);
	int k =0;
	
	for (int i =0; i< b; i++)
	{
		(i<z)?cout<< "row "<< i+1 << " -->: " : cout<<"";

		if( z % 2 == 0)
		{
			for(int j =0; j < l; j++)
			{
				if(k < b)
				{
					cout<< a[k] << " ";
					k++;
				}
			}	
			(i != z-1 || z % 2 != 0) ? cout << "\n" : cout<< "";
		}
		else
		{
			for(int j =0; j <= l; j++)
			{
				if(k < b)
				{
					cout<< a[k] << " ";
					k++;
				}
			}	
			(i != z-1 ) ? cout << "\n" : cout<< "";
		}
	}
}