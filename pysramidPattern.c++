#include <iostream>
using namespace std;

// error handling
void error_handling(int type)
{
    if (type <= 0 || type > 15)
    {
        cout << "Invalid input! please enter valid number (1 - 15)";
    }
}

// pattern 1
void simplePyramid(int rows)
{
    cout << "\n+-------------------------------+\n"
         << "\t\t\t PATTERN\n"
         << "+-------------------------------+\n";

    for (int i = 0; i < rows; i++)
    {
        // print "*"
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n+-------------------------------+\n"
         << "\t\t\t  CODE\n"
         << "+-------------------------------+\n";

    cout << "for(int i = 0 ; i < rows ; i++){\n"
         << "    for(int j = 0 ; j <= i ; j++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "}\n";
}

// pattern2
void flippedSimplePyramid(int row)
{

    cout << "\n+-------------------------------+\n"
         << "\t\t\t PATTERN\n"
         << "+-------------------------------+\n";

    for (int i = 0; i < row; i++)
    {
        for (int s = 0; s < row - (i + 1); s++)
        {
            cout << "  "; // use double space to align the pattern
        }
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n+-------------------------------+\n"
         << "\t\t\t  CODE\n"
         << "+-------------------------------+\n";

    cout << "for(int i = 0 ; i < size ; i++){\n"
         << "    for(int s = 0 ; s <  size - (i+1) ; s++){\n"
         << "        cout<<"
            ";cout << \"* \";\n"
         << "    }\n"
         << "    for(int j = 0 ; j < (i+1) ; j++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "}\n";
}

// pattern 3
void invertedPyramid(int row)
{

    cout << "\n+-------------------------------+\n"
         << "\t\t\t PATTERN\n"
         << "+-------------------------------+\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < (row - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n+-------------------------------+\n"
         << "\t\t\t  CODE\n"
         << "+-------------------------------+\n";

    cout << "for(int i = 0 ; i < row ; i++){\n"
         << "    for(int j = 0 ; j < (row - i) ; j++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n";
}

// pattern4
void flippedInvertedPyramid(int row)
{

    cout << "\n+-------------------------------+\n"
         << "\t\t\t PATTERN\n"
         << "+-------------------------------+\n";

    for (int i = 0; i < row; i++)
    {
        for (int s = 0; s < i; s++)
        {
            cout << "  ";
        }
        for (int j = 0; j < (row - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n+-------------------------------+\n"
         << "\t\t\t  CODE\n"
         << "+-------------------------------+\n";

    cout << "for(int i = 0 ; i < row ; i++){\n"
         << "    for(int s = 0 ; s < i ; s++){\n"
         << "        cout << \"  \";\n"
         << "    }\n"
         << "    for(int j = 0 ; j < (row - i) ; j++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n";
}

// pattern 5

void triangle(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int s = 0; s < size - (i + 1); s++)
        {
            cout << " ";
        }
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "for(int i = 0 ; i < size ; i++){\n"
         << "    for(int s = 0 ; s < size - (i + 1) ; s++){\n"
         << "        cout << \" \";\n"
         << "    }\n"
         << "    for(int j = 0 ; j < (i + 1) ; j++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n";
}

// pattern 6

void InvertedTriangle(int row)
{
    cout << "\n+-------------------------------+\n"
         << "\t\t\t PATTERN\n"
         << "+-------------------------------+\n";

    for (int i = 0; i < row; i++)
    {
        for (int s = 0; s < i; s++)
        {
            cout << " ";
        }
        for (int j = 0; j < (row - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n+-------------------------------+\n"
         << "\t\t\t  CODE\n"
         << "+-------------------------------+\n";

    cout << "for(int i = 0 ; i < row ; i++){\n"
         << "    for(int s = 0 ; s < i ; s++){\n"
         << "        cout << \" \";\n"
         << "    }\n"
         << "    for(int j = 0 ; j < (row - i) ; j++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n";
}

// pattern 7

void HalfDiomandPattern(int row)
{

    cout << "\n+-------------------------------+\n"
         << "\t\t\t PATTERN\n"
         << "+-------------------------------+\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < (row - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n+-------------------------------+\n"
         << "\t\t\t  CODE\n"
         << "+-------------------------------+\n";

    cout << "int row = 5;\n"
         << "for(int i = 0; i < row; i++){\n"
         << "    for(int j = 0; j < row - (i + 1); j++){\n"
         << "        cout << \"  \";\n"
         << "    }\n"
         << "    for(int s = 0; s < i + 1; s++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n\n"
         << "for(int i = 1; i < row; i++){\n"
         << "    for(int j = 0; j < i; j++){\n"
         << "        cout << \"  \";\n"
         << "    }\n"
         << "    for(int s = 0; s < row - i; s++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n";
}

// pattern 8
void FlippedHalfDiamondPattern(int row)
{

    cout << "\n+-------------------------------+\n"
         << "\t\t\t PATTERN\n"
         << "+-------------------------------+\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - (i + 1); j++)
        {
            cout << "  ";
        }
        for (int s = 0; s < i + 1; s++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int s = 0; s < row - i; s++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n+-------------------------------+\n"
         << "\t\t\t  CODE\n"
         << "+-------------------------------+\n";

    cout << "for(int i = 0; i < row; i++){\n"
         << "    for(int j = 0; j < row - (i + 1); j++){\n"
         << "        cout << \"  \";\n"
         << "    }\n"
         << "    for(int s = 0; s < i + 1; s++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n\n"
         << "for(int i = 1; i < row; i++){\n"
         << "    for(int j = 0; j < i; j++){\n"
         << "        cout << \"  \";\n"
         << "    }\n"
         << "    for(int s = 0; s < row - i; s++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n";
}

// pattern 9
void diamondPattern(int row)
{
    cout << "\n+-------------------------------+\n"
         << "\t\t\t PATTERN\n"
         << "+-------------------------------+\n";
    // uppper part
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - (i + 1); j++)
        {
            cout << " ";
        }
        for (int s = 0; s < i + 1; s++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // lower part
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int s = 0; s < (row - i); s++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n+-------------------------------+\n"
         << "\t\t\t  CODE\n"
         << "+-------------------------------+\n";

    cout << "// upper part\n"
         << "for(int i = 0; i < row; i++){\n"
         << "    for(int j = 0; j < row - (i + 1); j++){\n"
         << "        cout << \" \";\n"
         << "    }\n"
         << "    for(int s = 0; s < i + 1; s++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n\n"
         << "// lower part\n"
         << "for(int i = 0; i < row; i++){\n"
         << "    for(int j = 0; j < i; j++){\n"
         << "        cout << \" \";\n"
         << "    }\n"
         << "    for(int s = 0; s < (row - i); s++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n";
}

// pattern 10
void hourglassPattern(int row)
{

    cout << "\n+-------------------------------+\n"
         << "\t\t\t PATTERN\n"
         << "+-------------------------------+\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int s = 0; s < (row - (i)); s++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < row - (i + 1); j++)
        {
            cout << " ";
        }
        for (int s = 0; s < i + 1; s++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n+-------------------------------+\n"
         << "\t\t\t  CODE\n"
         << "+-------------------------------+\n";

    cout << "for(int i = 0 ; i < row ; i++){\n"
         << "    for(int j = 0 ; j < i ; j++){\n"
         << "        cout << \" \";\n"
         << "    }\n"
         << "    for(int s = 0 ; s < (row - i) ; s++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n\n"
         << "for(int i = 1 ; i < row ; i++){\n"
         << "    for(int j = 0 ; j < row - (i + 1) ; j++){\n"
         << "        cout << \" \";\n"
         << "    }\n"
         << "    for(int s = 0 ; s < i + 1 ; s++){\n"
         << "        cout << \"* \";\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n";
}

// pattern 11
void numberPyramid(int row)
{

    cout << "\n+-------------------------------+\n"
         << "\t\t\t PATTERN\n"
         << "+-------------------------------+\n";

    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    cout << "\n+-------------------------------+\n"
         << "\t\t\t  CODE\n"
         << "+-------------------------------+\n";

    cout << "for(int i = 1; i <= row; i++){\n"
         << "    for(int j = 0; j < i; j++){\n"
         << "        cout << i;\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n\n"
         << "cout << endl;\n\n"
         << "for(int i = 1; i <= row; i++){\n"
         << "    for(int j = 1; j <= i; j++){\n"
         << "        cout << j;\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n";
}

// pattern 12
void rotatedNumberPyramid(int row)
{

    cout << "\n+-------------------------------+\n"
         << "\t\t\t PATTERN\n"
         << "+-------------------------------+\n";

    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            cout << "  ";
        }

        int num = i;
        for (int k = 0; k < i; k++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    cout << "\n+-------------------------------+\n"
         << "\t\t\t  CODE\n"
         << "+-------------------------------+\n";

    cout << "for(int i = 1; i <= row; i++){\n"
         << "    for(int j = 0; j < row - i; j++){\n"
         << "        cout << \"  \";\n"
         << "    }\n\n"
         << "    int num = i;\n"
         << "    for(int k = 0; k < i; k++){\n"
         << "        cout << num << \" \";\n"
         << "        num++;\n"
         << "    }\n"
         << "    cout << endl;\n"
         << "}\n";
}

// pattern 13
void palindromeTriangle(int row)
{

    cout << "\n+-------------------------------+\n"
         << "\t\t\t PATTERN\n"
         << "+-------------------------------+\n";

    for (int i = 1; i <= row; i++)
    {
        // spaces
        for (int j = 1; j <= row - i; j++)
        {
            cout << "  ";
        }

        // descending numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        // ascending numbers
        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << "\n+-------------------------------+\n"
         << "\t\t\t  CODE\n"
         << "+-------------------------------+\n";

    cout << "for(int i = 1; i <= row; i++){\n"
         << "    // spaces\n"
         << "    for(int j = 1; j <= row - i; j++){\n"
         << "        cout << \"  \";\n"
         << "    }\n\n"
         << "    // descending numbers\n"
         << "    for(int j = i; j >= 1; j--){\n"
         << "        cout << j << \" \";\n"
         << "    }\n\n"
         << "    // ascending numbers\n"
         << "    for(int j = 2; j <= i; j++){\n"
         << "        cout << j << \" \";\n"
         << "    }\n\n"
         << "    cout << endl;\n"
         << "}\n";
}

int main()
{
    int type;
    char choice;

    // looping
    do
    {
        cout << "+-------------------------------+\n"
             << "\t\tPYRAMID PATTERNS\n"
             << "+-------------------------------+\n";

        cout << "Enter pattern type (1 - 15)\n";

        cout << "\n1.Simple Pyramid\n"
             << "2.Flipped Simple Pyramid\n"
             << "3.Inverted Pyramid\n"
             << "4.Flipped Inverted Pyramid\n"
             << "5.Triangle\n"
             << "6.Inverted Triangle\n"
             << "7.Half Diomand Pattern\n"
             << "8.Flipped Half Diamond Pattern\n"
             << "9.Diamond Pattern\n"
             << "10.Hourglass Pattern\n"
             << "11.Number Pyramid\n"
             << "12.Rotated Number Pyramid\n"
             << "13.Palindrome Triangle\n"
             << "14.Alphabet Pyramid\n"
             << "15.Continuos Alphabet Pyramid\n";

        cout << "\nEnter Valid Number: ";
        cin >> type;

        // error handling
        error_handling(type);
        cout << endl;

        // case handling
        int n; // row size
        switch (type)
        {
        case 1:
            cout << "Enter ROW size: ";
            cin >> n;
            simplePyramid(n);
            break;

        case 2:
            cout << "Enter ROW size: ";
            cin >> n;
            flippedSimplePyramid(n);
            break;

        case 3:
            cout << "Enter ROW size: ";
            cin >> n;
            invertedPyramid(n);
            break;

        case 4:
            cout << "Enter ROW size: ";
            cin >> n;
            flippedInvertedPyramid(n);
            break;

        case 5:
            cout << "Enter ROW size: ";
            cin >> n;
            triangle(n);
            break;

        case 6:
            cout << "Enter ROW size: ";
            cin >> n;
            InvertedTriangle(n);
            break;

        case 7:
            cout << "Enter ROW size: ";
            cin >> n;
            HalfDiomandPattern(n);
            break;

        case 8:
            cout << "Enter ROW size: ";
            cin >> n;
            FlippedHalfDiamondPattern(n);
            break;

        case 9:
            cout << "Enter ROW size: ";
            cin >> n;
            diamondPattern(n);
            break;

        case 10:
            cout << "Enter ROW size: ";
            cin >> n;
            hourglassPattern(n);
            break;

        case 11:
            cout << "Enter ROW size: ";
            cin >> n;
            numberPyramid(n);
            break;

        case 12:
            cout << "Enter ROW size: ";
            cin >> n;
            rotatedNumberPyramid(n);
            break;

        default:
            cout << "invalid input!";
        }

        cout << "\nDo you want to continue with another pattern (Y/N) :";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}