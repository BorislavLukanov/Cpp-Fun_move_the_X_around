

#include <iostream>

void GetPosition();
void DispMatrix();
int UpdatePosition(char input);
int CheckForCollision();

char matrix[3][3];

int main()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = ' ';
		}

	}
	matrix[1][1] = 'X';
	matrix[0][0] = 'O';

	char ch = ' ';
	do
	{
		DispMatrix();
		GetPosition();
		CheckForCollision();
		UpdatePosition(ch);
		std::cout << "\nUse W S A D to move the X around and jet the O.\nSpace to end game.\nGet the Z first and become @ ;D";
		ch = getchar();
		if (ch != 'w' || 's' || 'a' || 'd') std::cout << "Use only FPS controls! WSAD >:D";
		else UpdatePosition();

	} while (ch != ' '); //This is how you play FPSes >;D
	std::cout << "YOU PUSHED THE SPACE! .............";
};

void GetPosition()
{
	int x, y;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (matrix[i][j] == 'X')
			{
				x = i;
				y = j;
			};
		}
	}
	std::cout << x << " " << y;
};

void DispMatrix()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << " " << matrix[i][j] << " |";
		}
		std::cout << "\n";
		std::cout << "---|---|---\n";

	}

};

int UpdatePosition(char input)
{
	if (input != ' ')
	{

	}
	else return input;
};

int CheckForCollision()
{
	if (matrix[0][0] == 'X' || '@')
	{
		std::cout << "Got it!"; return 0;
	}
		

};