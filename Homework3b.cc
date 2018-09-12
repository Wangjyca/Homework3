
#include<iostream>
using namespace std;

int sequenceGenerator(int count);


int main()
{
	int count;
	int result; // sequenceGenerator() return 1: run successful/ -1: parameter (count) <0 
	char exitSign='n';

	

		do
		{
				cout << "Entery a count you like (0 -- 291) : ";   ///when the limitation of count rises to 291, theSequrnce[291]>18,446,744,073,709,551,615
				cin >> count;
				result = sequenceGenerator(count);

				if (result == 1)
				{
					cout << endl << "Do you want to exit ? ";
					cin >> exitSign;
				}
				else
				{
				}
			
		} while (exitSign != 'y' && exitSign != 'Y');

	return 0;
}



		int sequenceGenerator(int count)
	{
		
		if (count <0 || count>291)
		{
			cout << "Entry number must from 0 to 291. Enter again." << endl;
			return -1;
		}
		else
		{
			unsigned long long int theSequrnce[291];  ///when the limitation of count rises to 291, theSequrnce[291]>18,446,744,073,709,551,615
			theSequrnce[0] = 0;
			if (count >= 1)
			{
				theSequrnce[1] = 1;
			}

			for (int i = 2; i <= count; i++)
			{
				theSequrnce[i] = theSequrnce[i - 1] + theSequrnce[i - 2];
			}

			for (int i = 0; i <= count; i++)
			{
				cout << theSequrnce[i] << " ";
			}
			return 1;
		}

	}