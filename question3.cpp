#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream read_file;
	read_file.open("first.txt",ios::in);
	
	fstream write_file;
	write_file.open("second.txt",ios::out);
	
	if (!read_file || !write_file)
	{
		cout << "File not created." << endl;
	}
	else
	{	
		
		char str[200];
		while(!read_file.eof())
		{
			read_file.getline(str,200);
			
			for(int i = 0 ; str[i] != '\0' ;i++)
			{
				if(str[i] == ' ')
				{	
					
					if(str[i+1] == 'a' || str[i+1] == 'e' || str[i+1] == 'i' || str[i+1] == 'o' || str[i+1] == 'u')
					{
						i++;
						while(str[i] != ' ')
						{
							write_file << str[i];
							i++;
						}
						i--;
						write_file << " ";
					}
					
				}
				
			}
			write_file << endl;
		}
		read_file.close();
		write_file.close();
	}
}
