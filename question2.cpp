#include <iostream>

using namespace std;

bool hop(int , int * , int * , int*);
void display_info(int ,int ,int );

int main()
{
	int x ,y ,carrots,direction;
	bool flag = true;
	
	cout << "Enter the X co-ordinate : ";
	cin >> x;
	cout << "Enter the Y co-ordinate : ";
	cin >> y;
	cout << "Enter the number of carrots : ";
	cin >> carrots;
	display_info(x,y,carrots);
	cout << "Enter the direction : ";
		cin >> direction;
	
	while (flag == true)
	{
		
		
			
		flag = hop(direction,&x,&y,&carrots);
		
		if(carrots != 0 && flag == true)
		{
			display_info(x,y,carrots);
			cout << "Enter the direction : ";
			cin >> direction;
			
		}
			
	}
}

bool hop(int direction, int*x , int*y , int*carrots)
{
	
	

	static int prev_direction =6;
	
	
	bool b = true;
	
	if(prev_direction == 2)
	{
		if(direction == 3)
		{
				if(*carrots > 0)
				{
				
					if (prev_direction == 1 && direction == 0)
					{
						cout << "bunny can't hop" << endl;
						b = false;
					}
					else
					{
						switch(direction)
						{
							case 0:
								(*y)++;
								if (*x > 9 || *y > 9 || *x < 1 || *y < 1)
								{
									cout << "grid limit is reached" << endl;
									b= false;
								}
								break;
							case 1:
								(*x)++;
								if (*x > 9 || *y > 9|| *x < 1 || *y < 1)
								{
									cout << "grid limit is reached" << endl;
									b= false;
								}
								break;
							case 2:
								(*y)--;
								if (*x > 9 || *y > 9|| *x < 1 || *y < 1)
								{
									cout << "grid limit is reached" << endl;
									b= false;
								}
								break;
							case 3:
								(*x)--;
								if (*x > 9 || *y > 9|| *x < 1 || *y < 1)
								{
									cout << "grid limit is reached" << endl;
									b= false;
								}
								break;
							default:
								cout << "That is not a valid direction" << endl;
								b= false;
								break;	
						}
						prev_direction = direction;
					}
					(*carrots)--;
				}	
				else
				{
					cout << "bunny has run out of carrots" << endl;
					b = false;
				}	
		}
		else 
		{
			cout << "bunny cant hop" << endl;
			b = false;
		}		
	}
	else
	{
		if(*carrots > 0)
		{
				
			if (prev_direction == 1 && direction == 0)
			{
				cout << "bunny can't hop" << endl;
				b = false;
			}
			else
			{
				switch(direction)
				{
					case 0:
						(*y)++;
						if (*x > 9 || *y > 9|| *x < 1 || *y < 1)
						{
							cout << "grid limit is reached" << endl;
							b= false;
						}
						break;
					case 1:
						(*x)++;
						if (*x > 9|| *y > 9|| *x < 1 || *y < 1)
						{
							cout << "grid limit is reached" << endl;
							b= false;
						}
						break;
					case 2:
						(*y)--;
						if (*x > 9 || *y > 9|| *x < 1 || *y < 1)
						{
							cout << "grid limit is reached" << endl;
							b= false;
						}
								break;
					case 3:
						(*x)--;
						if (*x > 9 || *y > 9|| *x < 1 || *y < 1)
						{
							cout << "grid limit is reached" << endl;
							b= false;
						}
						break;
					default:
						cout << "That is not a valid direction" << endl;
						b= false;
						break;	
				}
				prev_direction = direction;
			}
				
			(*carrots)--;	
		}
		else
		{
			cout << "bunny has run out of carrots" << endl;
			b = false;
		}	
	}

	return b;
	
}

void display_info(int x,int y,int carrots)
{
	cout << "The bunny is at X=" << x << " and Y=" << y << " with " << carrots << " amount of carrots." << endl;
}




