#include <iostream>

using namespace std;

void prime_list(int N);

int main()
{
	int N;
	cout << "Enter a positive number N : ";
	cin >> N;
	if(N < 0)
	cout << "thats not a positive number" << endl;
	else
	{
		prime_list(N);
	}
}

void prime_list(int N)
{
	if (N < 2)
	{
		cout << " no prime number can make up this number" << endl;
	}
	else
	{
		int temp;
		int counter = 0;
		if (N%2 == 0)
		{
			temp = N;
			while (temp > 0)
			{
				temp-=2;
				counter++;
			}
			cout << "prime list for the number " << N << endl;
			for (int i = 0 ; i < counter ; i++)
			{
				cout << "2  ";
			}
			cout << "\n"; 
		}	
		else if (N % 2 == 1)
		{
			temp = N - 3;
			while (temp > 0)
			{
				temp-=2;
				counter++;
			}
			cout << "prime list for the number " << N << endl;
			for (int i = 0 ; i < counter ; i++)
			{
				cout << "2  ";
			}
			cout << "3 \n";
		}
	}
	
	
}
