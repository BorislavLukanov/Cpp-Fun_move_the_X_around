

#include <iostream>

void GetPosition();
void DispMatrix();
void UpdatePosition(char input);
void CheckForCollision();
struct MyStructure
{
	int x;
	int y;
};
MyStructure CurrentPosition;
char player = 'X';
char matrix[11][11];

int main()
{
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			matrix[i][j] = ' ';
		}

	}
	matrix[8][8] = 'X';
	matrix[0][0] = 'O';
	matrix[4][4] = 'Z';

	char ch = ' ';
	do
	{
		DispMatrix();
		GetPosition();
		CheckForCollision();
		UpdatePosition(ch);
		std::cout << "\nUse W S A D to move the X around and get the O.\nSpace to end game.\nGet the Z first and become @ ;D";
		ch = getchar();
		if (ch != 'w' || 's' || 'a' || 'd') std::cout << "Use only FPS controls! WSAD >:D";
		else UpdatePosition(ch);

	} while (ch != ' '); //This is how you play FPSes >;D
	std::cout << "YOU PUSHED THE SPACE! .............";
};

void GetPosition()
{
	if (player == 'X');
	{
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				if (matrix[i][j] == 'X')
				{
					CurrentPosition.x = i;
					CurrentPosition.y = j;
				};
			}
		}
	};
	if (player == '@')
	{
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				if (matrix[i][j] == '@')
				{
					CurrentPosition.x = i;
					CurrentPosition.y = j;
				};
			}
		}
	}
	
};

void DispMatrix()
{
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			std::cout << " " << matrix[i][j] << " |";
		}
		std::cout << "\n";
		for (int o = 0; o < 11; o++)
		{
			std::cout << "---|";
		}
		std::cout << "\n";

	}

};

void UpdatePosition(char input)
{
	/*
	if (input != ' ')
	{

	}
	else return input;
	*/
};

void CheckForCollision()
{
	/*
	if (matrix[0][0] == CurrentPosition || matrix[ '@') //position
	{
		std::cout << "Got it!"; return 0;
		player = '@';
	}
		
*/
};