// Creation of a simple Magic 8 ball game
// Author is Moses Arocha

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int reset = 1;
int prediction;
char restart;
string userQuestions;

int main()
{
	srand(static_cast<unsigned int>(time(0)));  //seed random number generator
	
	cout << "\t\tWelcome to Magic Calculator\n\n";
	cout << "\t Enter a Question to Tell Your Fortune. \n\n";
	
	 do 
	{
		//String for User Questions	
		cout << "\n What is your Question?" << endl;
		getline (cin, userQuestions);
		cout << "\n So your question is, " << userQuestions << "\n";
	// Where random number for question is generated
	
		prediction = rand() % 20 + 1;        // random number between 1 and 20

		if (prediction == 1)
		{
			cout << "\n\t\t\t I do not have an answer.\n\n"; // nuetral
		}
		else if (prediction == 2)
		{
			cout << "\n\t\t\t I advise you not do so.\n\n"; // negative
		}	
		else if (prediction == 3)
		{
			cout << "\n\t\t\t It seems the Timing is right.\n"; //positive
		}
		else if (prediction == 4)
		{
			cout << "\n\t\t\t I would state yes! \n"; //positive
		}
		else if (prediction == 5)
		{
			cout << "\n\t\t\t I see great things In your future. \n"; // positive
		}
		else if (prediction == 6)
		{
			cout << "\n\t\t\t Let's ask another question, later. \n"; // nuetral
		}
		else if (prediction == 7)
		{
			cout << "\n\t\t\t My fortunes tell me to tell you hurry up, it's a yes! \n"; // positive
		}
		else if (prediction == 8)
		{
			cout << "\n\t\t\t You will leave a Legacy! \n"; // positive
		}
		else if (prediction == 9)
		{
			cout << "\n\t\t\t I see good things, I think you will fine.\n"; //positive
		}
		else if (prediction == 10)
		{
			cout << "\n\t\t\t It seems that you will be in Caleb's Basement soon. \n"; // negative
		}
		else if (prediction == 11)
		{
			cout << "\n\t\t\t I do not see a future in this, please stop. \n"; // negative
		}
		else if (prediction == 12)
		{
			cout << "\n\t\t\t I couldn't say yes anymore, let's do it! \n"; //negative
		}
		else if (prediction == 13)
		{
			cout << "\n\t\t\t You will succeed, and will have a fortune. \n"; // positive
		}
		else if (prediction == 14)
		{
			cout << "\n\t\t\t It seems this is out of my reach.\n"; // nuetral
		}
		else if (prediction == 15)
		{
			cout << "\n\t\t\t I do not know, ask later. I do not care.\n"; //nuetral
		}
		else if (prediction == 16)
		{
			cout << "\n\t\t\t Hmm, who knows? Because I don't.\n"; //nuetral
		}
		else if (prediction == 17)
		{
			cout << "\n\t\t\t Quit it, You are horrible. Stop!\n"; //negative
		}
		else if (prediction == 18)
		{
			cout << "\n\t\t\t I hope you have a great day, it's a yes!\n"; //positive
		}
		else if (prediction == 19)
		{
			cout << "\n\t\t\t Defintely, a yes, get too it soon!\n"; //positive
		}
		else if (prediction == 20)
		{
			cout << "\n\t\t\t I would state the answer is up to you, I say most likely.\n"; //positive
		}

		cout << "\n\nWould you like another fortune?[Y/N]\n";
		cin >> restart; // no catch all function, user must insert char value

		if (restart == 'n' || restart == 'N' || restart == 'NO' ||restart == 'No' || restart == 'no' || restart == 'nO')
		{
			
			cout << "\nThanks for asking. Don't come again. I don't like you.\n\n";
			reset = 0;
		}
		else if (restart == 'y' || restart == 'Y' )
		{
			cout << "\n\n"; 
			prediction = rand() % 20 + 1;
			std::getline (std::cin, userQuestions);
		}

	} while (reset != 0);

	return 0;
}
