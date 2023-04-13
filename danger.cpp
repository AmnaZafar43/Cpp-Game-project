#include <iostream>
#include <time.h>
#include <windows.h>
#include <fstream>
#include <conio.h>
using namespace std;
char maze[49][110];
int davex = 8;      // x position of character
int davey = 4;      // y position of character
int enemyX1 = 1;    // Enemy1 X-coordinate
int enemyY1 = 1;    // Enemy1 y-coordinate
int enemyX2 = 7;    // Enemy2 X-coordinate
int enemyY2 = 1;    // Enemy2 y-coordinate
int enemyX3 = 2;    // Enemy2 X-coordinate
int enemyY3 = 72;   // Enemy3 y-coordinate
int enemyX4 = 6;    // Enemy3 X-coordinate
int enemyY4 = 71;   // Enemy4 y-coordinate
int enemyX5 = 8;    // Enemy4 X-coordinate
int enemyY5 = 76;   // Enemy5 y-coordinate
int enemyX6 = 17;   // Enemy5 X-coordinate
int enemyY6 = 47;   // Enemy2 y-coordinate
int enemyX7 = 17;   // Enemy2 X-coordinate
int enemyY7 = 107;  // Enemy2 y-coordinate
int enemyX8 = 18;   // Enemy2 X-coordinate
int enemyY8 = 1;    // Enemy2 y-coordinate
int enemyX9 = 20;   // Enemy2 X-coordinate
int enemyY9 = 1;    // Enemy2 y-coordinate
int enemyX10 = 25;  // Enemy2 X-coordinate
int enemyY10 = 1;   // Enemy2 y-coordinate
int enemyX11 = 26;  // Enemy2 X-coordinate
int enemyY11 = 57;  // Enemy2 y-coordinate
int enemyX12 = 27;  // Enemy2 X-coordinate
int enemyY12 = 61;  // Enemy2 y-coordinate
int enemyX13 = 27;  // Enemy2 X-coordinate
int enemyY13 = 83;  // Enemy2 y-coordinate
int enemyX14 = 31;  // Enemy2 X-coordinate
int enemyY14 = 8;   // Enemy2 y-coordinate
int enemyX15 = 36;  // Enemy2 X-coordinate
int enemyY15 = 87;  // Enemy2 y-coordinate
int enemyX16 = 40;  // Enemy2 X-coordinate
int enemyY16 = 17;  // Enemy2 y-coordinate
int enemyX17 = 46;  // Enemy2 X-coordinate
int enemyY17 = 102; // Enemy2 y-coordinate
int enemyX18 = 46;  // Enemy2 X-coordinate
int enemyY18 = 1;   // Enemy2 y-coordinate
int enemyX19 = 47;  // Enemy2 X-coordinate
int enemyY19 = 23;  // Enemy2 y-coordinate
int enemyX20 = 48;  // Enemy2 X-coordinate
int enemyY20 = 1;   // Enemy2 y-coordinate
bool gamerunning = true;
int trophiex = 3;  // x position of trophie
int trophiey = 74; // y position of trophie
int score = 0;
int lives = 3;
string dir1 = "Left";
string dir2 = "Left";
string dir3 = "Left";
string dir4 = "Left";
string dir5 = "Left";
string dir6 = "Left";
string dir7 = "Left";
string dir8 = "Left";
string dir9 = "Left";
string dir10 = "Left";
string dir11 = "Left";
string dir12 = "Left";
string dir13 = "Left";
string dir14 = "Left";
string dir15 = "Left";
string dir16 = "Left";
string dir17 = "Left";
string dir18 = "Left";
string dir19 = "Left";
string dir20 = "Left";
// string dir15 = "Left";
fstream file;
void gotoxy(int y, int x);
void loadmaze();
void printmaze();
void printmaze1();
void movedanemy9();
void movedanemy10();
void movedanemy11();
void movedanemy12();
void movedanemy13();
void movedanemy14();
void movedanemy15();
void movedanemy16();
void movedanemy17();
void movedanemy18();
void movedanemy19();
void movedanemy20();
void movedanemy1Left();
void movedanemy1Right();
void movedanemy2Left();
void movedanemy2Right();
void movedanemy3Left();
void movedanemy3Right();
void movedanemy4Left();
void movedanemy4Right();
void movedanemy5Left();
void movedanemy5Right();
void movedanemy6Left();
void movedanemy6Right();
void movedanemy7Left();
void movedanemy7Right();
void movedanemy8Left();
void movedanemy8Right();
void movedaveLeft();
void movedaveRight();
void movedaveUp();
void movedaveDown();
void gameover();

main()
{
    loadmaze();
    system("CLS");
    printmaze();
    getch();
    while (lives > 0)
    {

        while (gamerunning)
        {
            Sleep(200);
            //           system("CLS");
            // printmaze1();
            gotoxy(130, 2);
            cout << "Score: " << score;
            gotoxy(120, 9);
            cout << "Rules: ";
            gotoxy(130, 10);
            cout << "_Use UP keys to move UP";
            gotoxy(130, 11);
            cout << "_Use Left key to Move Back";
            gotoxy(130, 12);
            cout << "_Use Right Key to Move Forword";
            gotoxy(130, 13);
            cout << "_Use Down Key to Move Down";
            gotoxy(130, 20);
            cout << "________________________";
            gotoxy(130, 22);
            cout << "Play Distract Journey";
            gotoxy(130, 24);
            cout << "_______________________";
            gotoxy(130, 25);
            cout << "Players Lives: " << lives;
            gameover();
            movedanemy1Left();
            movedanemy1Right();
            movedanemy2Left();
            movedanemy2Right();
            movedanemy3Left();
            movedanemy3Right();
            movedanemy4Left();
            movedanemy4Right();
            movedanemy5Left();
            movedanemy5Right();
            movedanemy6Left();
            movedanemy6Right();
            movedanemy7Left();
            movedanemy7Right();
            movedanemy8Left();
            movedanemy8Right();
            movedanemy9();
            movedanemy10();
            movedanemy11();
            movedanemy12();
            movedanemy13();
            movedanemy14();
            movedanemy15();
            movedanemy16();
            movedanemy17();
            movedanemy18();
            movedanemy19();
            movedanemy20();
            if (GetAsyncKeyState(VK_LEFT))
            {
                movedaveLeft(); // to move dave left
            }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                movedaveRight(); // to move dave right
            }
            if (GetAsyncKeyState(VK_UP))
            {
                movedaveUp(); // to move dave up
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                movedaveDown(); // to move dave down
            }
            if (GetAsyncKeyState(VK_ESCAPE))
            {
                gamerunning = false; // game end
            }
        }
        lives--;
    }
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmaze()
{
    for (int i = 0; i < 49; i++)
    {
        for (int j = 0; j < 110; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
}
void loadmaze()
{

    file.open("maze.txt", ios::in);
    for (int i = 0; i < 49; i++)
    {
        string word;
        getline(file, word);
        for (int j = 0; j < 110; j++)
        {
            // file >> maze[i][j];

            maze[i][j] = word[j];
        }
        // file << endl;
    }
    file.close();
}

void movedaveLeft()
{
    if (maze[davex][davey - 1] == ' ' || maze[davex][davey - 1] == '+')
    {
        maze[davex][davey] = ' ';

        if (maze[davex][davey - 1] == '+')
        {
            score++;
        }
        gotoxy(davey, davex);
        cout << ' ';

        davey = davey - 1;
        gotoxy(davey, davex);
        cout << 'C';
    }
}

void movedanemy1Right()
{
    if (dir1 == "Left")
    {
        if (maze[enemyX1][enemyY1 + 1] == ' ')
        {
            gotoxy(enemyY1, enemyX1);
            cout << 'A';
            if (maze[enemyX1][enemyY1 - 1] != '#')
            {
                gotoxy(enemyY1 - 1, enemyX1);
                cout << ' ';
                enemyY1++;
            }
            else
            {
                gotoxy(enemyY1, enemyX1);
                cout << 'A';
                enemyY1++;
            }
        }
        else
        {
            dir1 = "Right";
        }
    }
}
void movedanemy1Left()
{
    if (dir1 == "Right")
    {
        if (maze[enemyX1][enemyY1 - 1] == ' ')
        {
            gotoxy(enemyY1, enemyX1);
            cout << 'A';
            if (maze[enemyX1][enemyY1 + 1] != '#')
            {
                gotoxy(enemyY1 + 1, enemyX1);
                cout << ' ';
                enemyY1--;
            }
            else
            {
                gotoxy(enemyY1, enemyX1);
                cout << 'A';
                enemyY1--;
            }
        }
        else
        {
            dir1 = "Left";
        }
    }
}
void movedanemy2Right()
{
    if (dir2 == "Left")
    {
        if (maze[enemyX2][enemyY2 + 1] == ' ')
        {
            gotoxy(enemyY2, enemyX2);
            cout << 'A';
            if (maze[enemyX2][enemyY2 - 1] != '#')
            {
                gotoxy(enemyY2 - 1, enemyX2);
                cout << ' ';
                enemyY2++;
            }
            else
            {
                gotoxy(enemyY2, enemyX2);
                cout << 'A';
                enemyY2++;
            }
        }
        else
        {
            dir2 = "Right";
        }
    }
}
void movedanemy2Left()
{
    if (dir2 == "Right")
    {
        if (maze[enemyX2][enemyY2 - 1] == ' ')
        {
            gotoxy(enemyY2, enemyX2);
            cout << 'A';
            if (maze[enemyX2][enemyY2 + 1] != '#')
            {
                gotoxy(enemyY2 + 1, enemyX2);
                cout << ' ';
                enemyY2--;
            }
            else
            {
                gotoxy(enemyY2, enemyX2);
                cout << 'A';
                enemyY2--;
            }
        }
        else
        {
            dir2 = "Left";
        }
    }
}
void movedanemy3Right()
{
    if (dir3 == "Left")
    {
        if (maze[enemyX3][enemyY3 + 1] == ' ')
        {
            gotoxy(enemyY3, enemyX3);
            cout << 'T';
            if (maze[enemyX3][enemyY3 - 1] != '#')
            {
                gotoxy(enemyY3 - 1, enemyX3);
                cout << ' ';
                enemyY3++;
            }
            else
            {
                gotoxy(enemyY3, enemyX3);
                cout << 'T';
                enemyY3++;
            }
        }
        else
        {
            dir3 = "Right";
        }
    }
}
void movedanemy3Left()
{
    if (dir3 == "Right")
    {
        if (maze[enemyX3][enemyY3 - 1] == ' ')
        {
            gotoxy(enemyY3, enemyX3);
            cout << 'T';
            if (maze[enemyX3][enemyY3 + 1] != '#')
            {
                gotoxy(enemyY3 + 1, enemyX3);
                cout << ' ';
                enemyY3--;
            }
            else
            {
                gotoxy(enemyY3, enemyX3);
                cout << 'T';
                enemyY3--;
            }
        }
        else
        {
            dir3 = "Left";
        }
    }
}
void movedanemy4Left()
{
    if (dir4 == "Right")
    {
        if (maze[enemyX4][enemyY4 - 1] == ' ')
        {
            gotoxy(enemyY4, enemyX4);
            cout << 'A';
            if (maze[enemyX4][enemyY4 + 1] != '#')
            {
                gotoxy(enemyY4 + 1, enemyX4);
                cout << ' ';
                enemyY4--;
            }
            else
            {
                gotoxy(enemyY4, enemyX4);
                cout << 'A';
                enemyY4--;
            }
        }
        else
        {
            dir4 = "Left";
        }
    }
}
void movedanemy4Right()
{
    if (dir4 == "Left")
    {
        if (maze[enemyX4][enemyY4 + 1] == ' ')
        {
            gotoxy(enemyY4, enemyX4);
            cout << 'A';
            if (maze[enemyX4][enemyY4 - 1] != '#')
            {
                gotoxy(enemyY4 - 1, enemyX4);
                cout << ' ';
                enemyY4++;
            }
            else
            {
                gotoxy(enemyY4, enemyX4);
                cout << 'A';
                enemyY4++;
            }
        }
        else
        {
            dir4 = "Right";
        }
    }
}
void movedanemy5Right()
{
    if (dir5 == "Left")
    {
        if (maze[enemyX5][enemyY5 + 1] == ' ')
        {
            gotoxy(enemyY5, enemyX5);
            cout << 'A';
            if (maze[enemyX5][enemyY5 - 1] != '#')
            {
                gotoxy(enemyY5 - 1, enemyX5);
                cout << ' ';
                enemyY5++;
            }
            // else if(maze[enemyX5][enemyY5 + 1] != '#')
            // {
            //     gotoxy(enemyY5 - 1, enemyX5);
            //     cout << ' ';
            //     enemyY5++;
            // }
            else
            {
                gotoxy(enemyY5, enemyX5);
                cout << 'A';
                enemyY5++;
            }
        }
        else
        {
            dir5 = "Right";
        }
    }
}
void movedanemy5Left()
{
    if (dir5 == "Right")
    {
        if (maze[enemyX5][enemyY5 - 1] == ' ')
        {
            gotoxy(enemyY5, enemyX5);
            cout << 'A';
            if (maze[enemyX5][enemyY5 + 1] != '#')
            {
                gotoxy(enemyY5 + 1, enemyX5);
                cout << ' ';
                enemyY5--;
            }
            else
            {
                gotoxy(enemyY5, enemyX5);
                cout << 'A';
                enemyY5--;
            }
        }
        else
        {
            dir5 = "Left";
        }
    }
}
void movedanemy6Right()
{
    if (dir6 == "Left")
    {
        if (maze[enemyX6][enemyY6 + 1] == ' ')
        {
            gotoxy(enemyY6, enemyX6);
            cout << 'A';
            // Facing error
            if (maze[enemyX6][enemyY6 - 1] != '|')
            {
                gotoxy(enemyY6 - 1, enemyX6);
                cout << ' ';
                enemyY6++;
            }
            else
            {
                gotoxy(enemyY6, enemyX6);
                cout << 'A';
                enemyY6++;
            }
        }
        else
        {
            dir6 = "Right";
        }
    }
}
void movedanemy6Left()
{
    if (dir6 == "Right")
    {
        if (maze[enemyX6][enemyY6 - 1] == ' ')
        {
            gotoxy(enemyY6, enemyX6);
            cout << 'A';
            if (maze[enemyX6][enemyY6 + 1] != '-')
            {
                gotoxy(enemyY6 + 1, enemyX6);
                cout << ' ';
                enemyY6--;
            }

            else
            {
                gotoxy(enemyY6, enemyX6);
                cout << 'A';
                enemyY6--;
            }
        }
        else
        {
            dir6 = "Left";
        }
    }
}
void movedanemy7Right()
{
    if (dir7 == "Right")
    {
        if (maze[enemyX7][enemyY7 + 1] == ' ')
        {
            gotoxy(enemyY7, enemyX7);
            cout << 'A';
            if (maze[enemyX7][enemyY7 + 1] != '#')
            {
                gotoxy(enemyY7 - 1, enemyX7);
                cout << ' ';
                enemyY7++;
            }
            else
            {
                gotoxy(enemyY7, enemyX7);
                cout << 'A';
                enemyY7++;
            }
        }
        else
        {
            dir7 = "Left";
        }
    }
}
void movedanemy7Left()
{
    if (dir7 == "Left")
    {
        if (maze[enemyX7][enemyY7 - 1] == ' ')
        {
            gotoxy(enemyY7, enemyX7);
            cout << 'A';
            if (maze[enemyX7][enemyY7 - 1] != '#')
            {
                gotoxy(enemyY7 + 1, enemyX7);
                cout << ' ';
                enemyY7--;
            }
            else
            {
                gotoxy(enemyY7, enemyX7);
                cout << 'A';
                enemyY7--;
            }
        }
        else
        {
            dir7 = "Right";
        }
    }
}
void movedanemy8Right()
{
    if (dir8 == "Left")
    {
        if (maze[enemyX8][enemyY8 + 1] == ' ')
        {
            gotoxy(enemyY8, enemyX8);
            cout << 'A';
            if (maze[enemyX8][enemyY8 - 1] != '#')
            {
                gotoxy(enemyY8 - 1, enemyX8);
                cout << ' ';
                enemyY8++;
            }
            else
            {
                gotoxy(enemyY8, enemyX8);
                cout << 'A';
                enemyY8++;
            }
        }
        else
        {
            dir8 = "Right";
        }
    }
}
void movedanemy8Left()
{
    if (dir8 == "Right")
    {
        if (maze[enemyX8][enemyY8 - 1] == ' ')
        {
            gotoxy(enemyY8, enemyX8);
            cout << 'A';
            if (maze[enemyX8][enemyY8 + 1] != 'w')
            {
                gotoxy(enemyY8 + 1, enemyX8);
                cout << ' ';
                enemyY8--;
            }
            else
            {
                gotoxy(enemyY8, enemyX8);
                cout << 'A';
                enemyY8--;
            }
        }
        else
        {
            dir8 = "Left";
        }
    }
}
void movedanemy9()
{
    if (dir9 == "Left")
    {
        if (maze[enemyX9][enemyY9 + 1] == ' ')
        {
            gotoxy(enemyY9, enemyX9);
            cout << 'A';
            if (maze[enemyX9][enemyY9 - 1] != '#')
            {
                gotoxy(enemyY9 - 1, enemyX9);
                cout << ' ';
                enemyY9++;
            }
            else
            {
                gotoxy(enemyY9, enemyX9);
                cout << 'A';
                enemyY9++;
            }
        }
        else
        {
            dir9 = "Right";
        }
    }
    if (dir9 == "Right")
    {
        if (maze[enemyX9][enemyY9 - 1] == ' ')
        {
            gotoxy(enemyY9, enemyX9);
            cout << 'A';
            if (maze[enemyX9][enemyY9 + 1] != '/')
            {
                gotoxy(enemyY9 + 1, enemyX9);
                cout << ' ';
                enemyY9--;
            }
            else
            {
                gotoxy(enemyY9, enemyX9);
                cout << 'A';
                enemyY9--;
            }
        }
        else
        {
            dir9 = "Left";
        }
    }
}
void movedanemy10()
{
    if (dir10 == "Left")
    {
        if (maze[enemyX10][enemyY10 + 1] == ' ')
        {
            gotoxy(enemyY10, enemyX10);
            cout << 'A';
            if (maze[enemyX10][enemyY10 - 1] != '#')
            {
                gotoxy(enemyY10 - 1, enemyX10);
                cout << ' ';
                enemyY10++;
            }
            else
            {
                gotoxy(enemyY10, enemyX10);
                cout << 'A';
                enemyY10++;
            }
        }
        else
        {
            dir10 = "Right";
        }
    }
    if (dir10 == "Right")
    {
        if (maze[enemyX10][enemyY10 - 1] == ' ')
        {
            gotoxy(enemyY10, enemyX10);
            cout << 'A';
            if (maze[enemyX10][enemyY10 + 1] != '#')
            {
                gotoxy(enemyY10 + 1, enemyX10);
                cout << ' ';
                enemyY10--;
            }
            else
            {
                gotoxy(enemyY10, enemyX10);
                cout << 'A';
                enemyY10--;
            }
        }
        else
        {
            dir10 = "Left";
        }
    }
}
void movedanemy11()
{
    if (dir11 == "Left")
    {
        if (maze[enemyX11][enemyY11 + 1] == ' ')
        {
            gotoxy(enemyY11, enemyX11);
            cout << 'A';
            if (maze[enemyX11][enemyY11 - 1] != '#')
            {
                gotoxy(enemyY11 - 1, enemyX11);
                cout << ' ';
                enemyY11++;
            }
            else
            {
                gotoxy(enemyY9, enemyX9);
                cout << 'A';
                enemyY11++;
            }
        }
        else
        {
            dir11 = "Right";
        }
    }
    if (dir11 == "Right")
    {
        if (maze[enemyX11][enemyY11 - 1] == ' ')
        {
            gotoxy(enemyY11, enemyX11);
            cout << 'A';
            if (maze[enemyX11][enemyY11 + 1] != '#')
            {
                gotoxy(enemyY11 + 1, enemyX11);
                cout << ' ';
                enemyY11--;
            }
            else
            {
                gotoxy(enemyY11, enemyX11);
                cout << 'A';
                enemyY11--;
            }
        }
        else
        {
            dir11 = "Left";
        }
    }
}
void movedanemy12()
{
    if (dir12 == "Left")
    {
        if (maze[enemyX12][enemyY12 + 1] == ' ')
        {
            gotoxy(enemyY12, enemyX12);
            cout << 'A';
            if (maze[enemyX12][enemyY12 - 1] != '#')
            {
                gotoxy(enemyY12 - 1, enemyX12);
                cout << ' ';
                enemyY12++;
            }
            else
            {
                gotoxy(enemyY12, enemyX12);
                cout << 'A';
                enemyY12++;
            }
        }
        else
        {
            dir12 = "Right";
        }
    }
    if (dir12 == "Right")
    {
        if (maze[enemyX12][enemyY12 - 1] == ' ')
        {
            gotoxy(enemyY12, enemyX12);
            cout << 'A';
            if (maze[enemyX12][enemyY12 + 1] != 'w')
            {
                gotoxy(enemyY12 + 1, enemyX12);
                cout << ' ';
                enemyY12--;
            }
            else
            {
                gotoxy(enemyY12, enemyX12);
                cout << 'A';
                enemyY12--;
            }
        }
        else
        {
            dir12 = "Left";
        }
    }
}
void movedanemy13()
{
    if (dir13 == "Left")
    {
        if (maze[enemyX13][enemyY13 + 1] == ' ')
        {
            gotoxy(enemyY13, enemyX13);
            cout << 'A';
            if (maze[enemyX13][enemyY13 - 1] != 'w')
            {
                gotoxy(enemyY13 - 1, enemyX13);
                cout << ' ';
                enemyY13++;
            }
            else
            {
                gotoxy(enemyY13, enemyX13);
                cout << 'A';
                enemyY13++;
            }
        }
        else
        {
            dir13 = "Right";
        }
    }
    if (dir13 == "Right")
    {
        if (maze[enemyX13][enemyY13 - 1] == ' ')
        {
            gotoxy(enemyY13, enemyX13);
            cout << 'A';
            if (maze[enemyX13][enemyY13 + 1] != '#')
            {
                gotoxy(enemyY13 + 1, enemyX13);
                cout << ' ';
                enemyY13--;
            }
            else
            {
                gotoxy(enemyY13, enemyX13);
                cout << 'A';
                enemyY13--;
            }
        }
        else
        {
            dir13 = "Left";
        }
    }
}
void movedanemy14()
{
    if (dir14 == "Left")
    {
        if (maze[enemyX14][enemyY14 + 1] == ' ')
        {
            gotoxy(enemyY14, enemyX14);
            cout << 'A';
            if (maze[enemyX14][enemyY14 - 1] != '#')
            {
                gotoxy(enemyY14 - 1, enemyX14);
                cout << ' ';
                enemyY14++;
            }
            else
            {
                gotoxy(enemyY14, enemyX14);
                cout << 'A';
                enemyY14++;
            }
        }
        else
        {
            dir14 = "Right";
        }
    }
    if (dir14 == "Right")
    {
        if (maze[enemyX14][enemyY14 - 1] == ' ')
        {
            gotoxy(enemyY14, enemyX14);
            cout << 'A';
            if (maze[enemyX14][enemyY14 + 1] != '|')
            {
                gotoxy(enemyY14 + 1, enemyX14);
                cout << ' ';
                enemyY14--;
            }
            else
            {
                gotoxy(enemyY14, enemyX14);
                cout << 'A';
                enemyY14--;
            }
        }
        else
        {
            dir14 = "Left";
        }
    }
}
void movedanemy15()
{
    if (dir15 == "Left")
    {
        if (maze[enemyX15][enemyY15 + 1] == ' ')
        {
            gotoxy(enemyY15, enemyX15);
            cout << 'A';
            if (maze[enemyX15][enemyY15 - 1] != '#')
            {
                gotoxy(enemyY15 - 1, enemyX15);
                cout << ' ';
                enemyY15++;
            }
            else
            {
                gotoxy(enemyY15, enemyX15);
                cout << 'A';
                enemyY15++;
            }
        }
        else
        {
            dir15 = "Right";
        }
    }
    if (dir15 == "Right")
    {
        if (maze[enemyX15][enemyY15 - 1] == ' ')
        {
            gotoxy(enemyY15, enemyX15);
            cout << 'A';
            if (maze[enemyX15][enemyY15 + 1] != '#')
            {
                gotoxy(enemyY15 + 1, enemyX15);
                cout << ' ';
                enemyY15--;
            }
            else
            {
                gotoxy(enemyY15, enemyX15);
                cout << 'A';
                enemyY15--;
            }
        }
        else
        {
            dir15 = "Left";
        }
    }
}
void movedanemy16()
{
    if (dir16 == "Left")
    {
        if (maze[enemyX16][enemyY16 + 1] == ' ')
        {
            gotoxy(enemyY16, enemyX16);
            cout << 'A';
            if (maze[enemyX16][enemyY16 - 1] != '#')
            {
                gotoxy(enemyY16 - 1, enemyX16);
                cout << ' ';
                enemyY16++;
            }
            else
            {
                gotoxy(enemyY16, enemyX16);
                cout << 'A';
                enemyY16++;
            }
        }
        else
        {
            dir16 = "Right";
        }
    }
    if (dir16 == "Right")
    {
        if (maze[enemyX16][enemyY16 - 1] == ' ')
        {
            gotoxy(enemyY16, enemyX16);
            cout << 'A';
            if (maze[enemyX16][enemyY16 + 1] != '#')
            {
                gotoxy(enemyY16 + 1, enemyX16);
                cout << ' ';
                enemyY16--;
            }
            else
            {
                gotoxy(enemyY16, enemyX16);
                cout << 'A';
                enemyY16--;
            }
        }
        else
        {
            dir16 = "Left";
        }
    }
}
void movedanemy17()
{
    if (dir17 == "Left")
    {
        if (maze[enemyX17][enemyY17 + 1] == ' ')
        {
            gotoxy(enemyY17, enemyX17);
            cout << 'A';
            if (maze[enemyX17][enemyY17 - 1] != '#')
            {
                gotoxy(enemyY17 - 1, enemyX17);
                cout << ' ';
                enemyY17++;
            }
            else
            {
                gotoxy(enemyY17, enemyX17);
                cout << 'A';
                enemyY17++;
            }
        }
        else
        {
            dir17 = "Right";
        }
    }
    if (dir17 == "Right")
    {
        if (maze[enemyX17][enemyY17 - 1] == ' ')
        {
            gotoxy(enemyY17, enemyX17);
            cout << 'A';
            if (maze[enemyX17][enemyY17 + 1] != '#')
            {
                gotoxy(enemyY17 + 1, enemyX17);
                cout << ' ';
                enemyY17--;
            }
            else
            {
                gotoxy(enemyY17, enemyX17);
                cout << 'A';
                enemyY17--;
            }
        }
        else
        {
            dir17 = "Left";
        }
    }
}
void movedanemy18()
{
    if (dir18 == "Left")
    {
        if (maze[enemyX18][enemyY18 + 1] == ' ')
        {
            gotoxy(enemyY18, enemyX18);
            cout << 'A';
            if (maze[enemyX18][enemyY18 - 1] != '#')
            {
                gotoxy(enemyY18 - 1, enemyX18);
                cout << ' ';
                enemyY18++;
            }
            else
            {
                gotoxy(enemyY18, enemyX18);
                cout << 'A';
                enemyY18++;
            }
        }
        else
        {
            dir18 = "Right";
        }
    }
    if (dir18 == "Right")
    {
        if (maze[enemyX18][enemyY18 - 1] == ' ')
        {
            gotoxy(enemyY18, enemyX18);
            cout << 'A';
            if (maze[enemyX18][enemyY18 + 1] != '#')
            {
                gotoxy(enemyY18 + 1, enemyX18);
                cout << ' ';
                enemyY18--;
            }
            else
            {
                gotoxy(enemyY18, enemyX18);
                cout << 'A';
                enemyY18--;
            }
        }
        else
        {
            dir18 = "Left";
        }
    }
}
void movedanemy19()
{
    if (dir19 == "Left")
    {
        if (maze[enemyX19][enemyY19 + 1] == ' ')
        {
            gotoxy(enemyY19, enemyX19);
            cout << 'A';
            if (maze[enemyX19][enemyY19 - 1] != '#')
            {
                gotoxy(enemyY19 - 1, enemyX19);
                cout << ' ';
                enemyY19++;
            }
            else
            {
                gotoxy(enemyY19, enemyX19);
                cout << 'A';
                enemyY19++;
            }
        }
        else
        {
            dir19 = "Right";
        }
    }
    if (dir19 == "Right")
    {
        if (maze[enemyX19][enemyY19 - 1] == ' ')
        {
            gotoxy(enemyY19, enemyX19);
            cout << 'A';
            if (maze[enemyX19][enemyY19 + 1] != '|')
            {
                gotoxy(enemyY19 + 1, enemyX19);
                cout << ' ';
                enemyY19--;
            }
            else
            {
                gotoxy(enemyY19, enemyX19);
                cout << 'A';
                enemyY19--;
            }
        }
        else
        {
            dir19 = "Left";
        }
    }
}
void movedanemy20()
{
    if (dir20 == "Left")
    {
        if (maze[enemyX20][enemyY20 + 1] == ' ')
        {
            gotoxy(enemyY20, enemyX20);
            cout << 'A';
            if (maze[enemyX20][enemyY20 - 1] != '#')
            {
                gotoxy(enemyY20 - 1, enemyX20);
                cout << ' ';
                enemyY20++;
            }
            else
            {
                gotoxy(enemyY20, enemyX20);
                cout << 'A';
                enemyY20++;
            }
        }
        else
        {
            dir20 = "Right";
        }
    }
    if (dir20 == "Right")
    {
        if (maze[enemyX20][enemyY20 - 1] == ' ')
        {
            gotoxy(enemyY20, enemyX20);
            cout << 'A';
            if (maze[enemyX20][enemyY20 + 1] != '#')
            {
                gotoxy(enemyY20 + 1, enemyX20);
                cout << ' ';
                enemyY20--;
            }
            else
            {
                gotoxy(enemyY20, enemyX20);
                cout << 'A';
                enemyY20--;
            }
        }
        else
        {
            dir20 = "Left";
        }
    }
}
void movedaveRight()
{
    if (maze[davex][davey + 1] == ' ' || maze[davex][davey + 1] == '+')
    {
        maze[davex][davey] = ' ';
        if (maze[davex][davey + 1] == '+')
        {
            score++;
        }
        gotoxy(davey, davex);
        cout << ' ';

        davey = davey + 1;
        gotoxy(davey, davex);
        cout << 'C';
    }
}
void movedaveUp()
{
    if (maze[davex - 1][davey] == ' ' || maze[davex - 1][davey] == '+')
    {

        maze[davex][davey] = ' ';
        if (maze[davex - 1][davey] == '+')
        {
            score++;
        }
        gotoxy(davey, davex);
        cout << ' ';

        davex = davex - 1;
        gotoxy(davey, davex);
        cout << 'C';
    }
}
void movedaveDown()
{
    if (maze[davex + 1][davey] == ' ' || maze[davex + 1][davey] == '+')
    {
        maze[davex][davey] = ' ';
        if (maze[davex + 1][davey] == '+')
        {
            score++;
        }
        gotoxy(davey, davex);
        cout << ' ';

        davex = davex + 1;
        gotoxy(davey, davex);
        cout << 'C';
    }
}

void gameover()
{
    // if (maze[davex][davey] == maze[enemyX1][enemyY1] )
    // {
    //|| maze[davex][davey] == maze[enemyX2][enemyY2] || maze[davex][davey] == maze[enemyX3][enemyY3] || maze[davex][davey] == maze[enemyX4][enemyY4] || maze[davex][davey] == maze[enemyX5][enemyY5])
    //  gamerunning = false;
    // }
}
