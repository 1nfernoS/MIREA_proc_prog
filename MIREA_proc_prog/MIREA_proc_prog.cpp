#define _USE_MATH_DEFINES

#include <iostream> 
#include <math.h>
#include <ctime>	//not used but if we want to use random...
#include <fstream>  //file streams
#include <string>	//for getline
#include <sstream>  //string streams
#include <vector>	//for push_back to array


/*========================================================================
 | FUNC:                                                                 |
 |  main            -   interface looped for entering tasks              |
 |                                                                       |
 |  hw1             -   interface for 1st homework (empty)               |
 |  hw2             -   interface for 2nd homework (empty)               |
 |  hw3             -   interface for 3rd homework                       |
 |      credit      -   task for calculate month payment for credit      |
 |      percent     -   task for calculate percent of credit             |
 |      print       -   task for print file (source code)                |
 |      regex       -   task for find numbers in file (source code)      |
 |      sortLetters -   task for sort all symbols in file (source code)  |
 |  hw4	            -   interface for 4th homework                       |
 |      sumFile     -   task for get sum of alol numbers from file       |
 |      sign        -   task for return sign of input num                |
 |      area        -   task for get area square, triangle, circle       |
 |      flag        -   task for print American flag                     |
 |      sinus       -   task for print graph of sin(x)                   |
 |      romeNumbers -   task for translate rome numbers into arabic      |
 |      lcg         -   task for LCG Pseudo RNG                          |
 |      matrixMult  -   task for multiplying matrix                      |
 |      notation    -   task for translate number into different notation|
 |  hw5	            -   interface for 5th homework                       |
 |                                                                       |
 |-----------------------------------------------------------------------|
 |                                                                       |
 |  ignore          -   for clear input                                  |
 |  cls             -   short system("cls")                              |
 |  pause           -   short system("pause")                            |
 ========================================================================*/

using namespace std;


void cls();
void pause();
void clear();



void hw1();

void hw2();

void hw3();

void credit();
void percent();
void print();
void regex();
void sortLetters();

void hw4();

void sumFile();
void sign();
void area();
void flag();
void sinus();
void romeNumbers();
void lcg();
void matrixMult();
void notation();

void hw5();


void test()
{
	cout << "Welcome alpha test module\n";
	//string s = "az AZ"; //65-90 97-122
	/*
	for (int i = 48; i <= 57; i++)
		cout << char(i) << ' ';
		//0 1 2 3 4 5 6 7 8 9
	cout << '\n';
	for (int i = 65; i <= 90; i++)
		cout << char(i) << ' ';
	//A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
	cout << '\n';
	for (int i = 97; i <= 122; i++)
		cout << char(i) << ' ';
	//a b c d e f g h i j k l m n o p q r s t u v w x y z
	cout << '\n';

	//cout << int(s[0]) << ' ' << int(s[1]) << ' ' << int(s[2]) << ' ' << int(s[3]) << ' ' << int(s[4]) << ' ' << "\n";
	cout << int('a') - 48 - 7 - 32<< ' ' << int('z') - 55  - 32 << "\n";
	//cout << int('A') - 55 << ' ' << int('Z') - 55 << "\n";
	//cout << int('0') << ' ' << int('9') << ' ' << int('1') << ' ' << "\n";
	*/
	string s = "10";
	s += 49;
	cout << char(48 + 2) << "\n";
}


int main()
{
	bool q = false;
	int choice;
	while (!q)
	{
		cout << "This is Gaydenko's homework programming tasks\nChoose homework to check:\n"
			<< "1. Simple data Handlers (passed, in C)\n"
			//	<< " - Name\n - Arithmetics\n - Equation\n - Square Equation\n - Lamp, Curveand Sun Question\n"
			<< "2. Math calculations (passed, in C)\n"
			//	<< " - Cone\n - Tree Function\n - Function ln\n - 10 Next Numbers\n - Tabulate Function\n"
			<< "3. File and math processing (passed)\n"
			<< "4. Files, Drawing and Math again(not complete)\n"
			<< "5. File and math processing (not complete)\n"
			//	<< " - Euclid's Algorythm\n - Sieve Of Eratosthenes\n - Files Handler\n - Rows numbers\n - Files(1)\n"
			<< "0. Quit\n"
			<< "> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case -1:
		{
			cls();
			cout << "Enter test module\n";
			test();
			break;
		}
		case 0:
		{
			q = true;
			cout << "Have a nice day! Bye!\n";
			break;
		}
		case 1:
		{
			cls();
			hw1();
			cls();
			break;
		}
		case 2:
		{
			cls();
			hw2();
			cls();
			break;
		}
		case 3:
		{
			cls();
			hw3();
			cls();
			break;
		}
		case 4:
		{
			cls();
			hw4();
			cls();
			break;
		}
		case 5:
		{
			cls();
			hw5();
			cls();
			break;
		}
		default:
			cls();
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}
	}
}

void cls()
{
	system("cls");
}

void pause()
{
	system("pause");
}

void clear()
{
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}



void hw1()
{
	bool quitInner = false;
	int choice;
	while (!quitInner)
	{
		cout << "This is 1st homework. Now there are no modules, sorry!\n";
		pause();
		quitInner = true;
	}
}

void hw2()
{

	bool quitInner = false;
	int choice;
	while (!quitInner)
	{
		cout << "This is 2nd homework. Now there are no modules, sorry!\n";
		pause();
		quitInner = true;
	}
}

void hw3()
{
	bool quitInner = false;
	int choice;
	while (!quitInner)
	{
		cout << "This is 3rd homework programming tasks\nChoose task to check:\n"
			<< "1. Credit Payment\n"
			<< "2. Percent Of Credit\n"
			<< "3. Print Me!\n"
			<< "4. Number Regex\n"
			<< "5. Letter Sorting\n"
			<< "0. Back\n"
			<< "> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case 0:
		{
			quitInner = true;
			break;
		}
		case 1:
		{
			cls();
			credit();
			break;
		}
		case 2:
		{
			cls();
			percent();
			break;
		}
		case 3:
		{
			cls();
			print();
			break;
		}
		case 4:
		{
			cls();
			regex();
			break;
		}
		case 5:
		{
			cls();
			sortLetters();
			break;
		}
		default:
			cls();
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}
	}
}

void credit()
{
	cout << "This is " << __func__ << " module\n";

	float m; //month pay
	float s; //summ of credit
	float r; // percentage
	float p; // percent
	int n; //years

	cout << "Enter sum of credit S\n> ";
	cin >> s;
	clear();

	do
	{
		cout << "Enter percent p\n> ";
		cin >> p;
		clear();
		if (p == 0)
		{
			cout << "Error! Percent can't be 0!!!\n";
			pause();
		}
	} while (p == 0);

	do
	{
		cout << "Enter years of credit n\n> ";
		cin >> n;
		clear();
		if (n <= 0)
		{
			cout << "Error! Years can't be 0!!!\n";
			pause();
		}
	} while (n <= 0);

	r = (p / 100);
	//cout << "r is " << r << "\n\n";

	m = s * r * pow(r + 1, n);
	m = m / (12 * (pow(r + 1, n) - 1));

	cout << "Your month pay is " << m << "\n\n";

	pause();
	cls();
}

void percent()
{
	cout << "This is " << __func__ << " module\n";

	bool found = false;
	float m; //month pay
	float mTmp1; // temporary month pay
	float s; //summ of credit
	float r; // percentage
	float p; // percent
	int n; //years

	cout << "Enter sum of credit S\n> ";
	cin >> s;
	clear();

	do
	{
		cout << "Enter month payment m\n> ";
		cin >> m;
		clear();
		if (m <= 0)
		{
			cout << "Error! Payment can't be 0!!!\n";
			pause();
		}
	} while (m <= 0);

	do
	{
		cout << "Enter years of credit n\n> ";
		cin >> n;
		clear();
		if (n <= 0)
		{
			cout << "Error! Years can't be 0!!!\n";
			pause();
		}
	} while (n <= 0);

	for (p = 0.01; p < 100; p += 0.01)
	{
		r = (p / 100);

		mTmp1 = s * r * pow(r + 1, n);
		mTmp1 = mTmp1 / (12 * (pow(r + 1, n) - 1));

		if (abs(mTmp1 - m) <= 0.01)
		{
			found = true;
			break;
		}
	}
	if (found)
		cout << "Your percent is " << p << "%\n";
	else
		cout << "Percent is not in (0,100)%\n";

	pause();
	cls();
}

void print()
{
	cout << "This is " << __func__ << " module\n";
	string path = __FILE__;
	string line;
	ifstream file(path);
	if (file.is_open())
	{
		while (getline(file, line))
			cout << line << "\n";
		file.close();
	}
	else cout << "No such file at\n  " << path << "\n";

	pause();
	cls();
}

void regex()
{
	cout << "This is " << __func__ << " module\n";


	string path = __FILE__;
	string line;
	ifstream file(path);
	if (file.is_open())
	{
		while (getline(file, line))
		{
			stringstream ss;
			string temp;
			int found;

			//get line into stream
			ss << line;

			while (!ss.eof()) {
				//get word from stream (splits by spaces)
				ss >> temp;
				// true if got int
				if (stringstream(temp) >> found)
					cout << found << " ";
				temp = "";
			}
		}
		file.close();
		cout << "\n";
	}
	else cout << "No such file at\n  " << path << "\n";

	pause();
	cls();
}

void sortLetters()
{
	cout << "This is " << __func__ << " module\n";

	bool sorted;
	string path = __FILE__;
	string text;
	ifstream file(path);
	if (file.is_open())
	{
		//get all file into string
		text = string(istreambuf_iterator<char>(file), istreambuf_iterator<char>());
		file.close();
	}
	else cout << "No such file at\n  " << path << "\n";

	cout << "Sorting text of source code, please wait . . .\n";
	do
	{
		sorted = true;
		for (int i = 0; i < text.length() - 1; i++)
		{
			char temp;
			if (text[i] > text[i + 1])
			{
				sorted = false;
				temp = text[i];
				text[i] = text[i + 1];
				text[i + 1] = temp;
			}
		}
	} while (!sorted);

	cout << text << "\n";

	pause();
	cls();
}


void hw4()
{

	bool quitInner = false;
	int choice;
	while (!quitInner)
	{
		cout << "This is 4th  homework programming tasks\nChoose task to check:\n"
			<< "1. Sum From File\n"
			<< "2. Sign Of Number\n"
			<< "3. Area Of Figures\n"
			<< "4. American Flag\n"
			<< "5. Y = Sin(X)\n"
			<< "6. Roman into Arabic\n"
			<< "7. LCG Psudo-RandomNumberGenerator\n"
			<< "8. Matrix Multiply\n"
			<< "9. Notation Translate\n"
			<< "0. Back\n"
			<< "> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case 0:
		{
			quitInner = true;
			break;
		}
		case 1:
		{
			cls();
			sumFile();
			break;
		}
		case 2:
		{
			cls();
			sign();
			break;
		}
		case 3:
		{
			cls();
			area();
			break;
		}
		case 4:
		{
			cls();
			flag();
			break;
		}
		case 5:
		{
			cls();
			sinus();
			break;
		}
		case 6:
		{
			cls();
			romeNumbers();
			break;
		}
		case 7:
		{
			cls();
			lcg();
			break;
		}
		case 8:
		{
			cls();
			matrixMult();
			break;
		}
		case 9:
		{
			cls();
			notation();
			break;
		}
		default:
			cls();
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}
	}
}

void sumFile()
{
	cout << "This is " << __func__ << " module\n";

	//Because we need to create file, we will use vector to write all numbers into file
	vector <int> nums;
	string path = __FILE__;
	ifstream file(path);
	string line;
	string directory;

	int sum = 0;

	const size_t last_slash_idx = path.rfind('\\');
	if (std::string::npos != last_slash_idx)
	{
		directory = path.substr(0, last_slash_idx);
	}
	if (directory.empty())
	{
		cout << "Error! No path at\n\t" << path << "\n";
		pause();
		return;
	}


	if (file.is_open())
	{
		while (getline(file, line))
		{
			stringstream ss;
			string temp;
			int found;

			//get line into stream
			ss << line;

			while (!ss.eof()) {
				//get word from stream (splits by spaces)
				ss >> temp;
				// true if got int
				if (stringstream(temp) >> found)
					nums.push_back(found);
				temp = "";
			}
		}
		file.close();
	}

	path = directory + "\\test.txt";

	fstream text(path);

	//create if not exists
	text.open(path, ios::out);

	//write
	if (text.is_open())
	{
		for (int i = 0; i < nums.size(); i++)
		{
			text << nums[i] << ' ';
		}
	}
	else
		cout << "No such file at\n  " << path << "\n";
	text.close();

	//read 

	text.open(path, ios::in);
	if (text.is_open())
	{
		int num;
		while (text >> num)
		{
			sum += num;
		}

		file.close();
	}
	else
		cout << "No such file at\n  " << path << "\n";

	cout << "Sum of nums is " << sum << "\n";

	pause();
	cls();

}

void sign()
{
	cout << "This is " << __func__ << " module\n";

	int x;
	cout << "Enter your number\n> ";
	cin >> x;
	clear();
	if (x < 0) cout << "-1\n";
	else if (x > 0) cout << "1\n";
	else cout << "0\n";

	pause();
	cls();

}

void area()
{
	cout << "This is " << __func__ << " module\n";

	//By the way, we can use one overloaded function, the behavior of which is determined by counting the given values
	// 1 for circle, 2 for rectangle, 3 for triangle
	auto circle = [](int r)
	{
		return M_PI * pow(r, 2);
	};
	auto rectangle = [](float h, float w)
	{
		return h * w;
	};
	auto triangle = [](float a, float b, float c)
	{
		float p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	};

	float a, b, c;

	bool quitArea = false;
	int choice;
	while (!quitArea)
	{
		cout << "Choose a figure to find area:\n"
			<< "1. Rectangle\n"
			<< "2. Triangle\n"
			<< "3. Circle\n"
			<< "0. Back\n"
			<< "> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case 0:
		{
			quitArea = true;
			cls();
			return;
		}
		case 1:
		{
			do
			{
				cls();
				cout << "Enter width w\n> ";
				cin >> a;
				clear();
				if (a <= 0)
				{
					cout << "Error! Width must be greater than 0!\n";
					pause();
				}
			} while (a <= 0);
			do
			{
				cls();
				cout << "Enter height h\n> ";
				cin >> b;
				clear();
				if (b <= 0)
				{
					cout << "Error! Height must be greater than 0!\n";
					pause();
				}
			} while (b <= 0);

			cout << "Area of rectangle " << a << " x " << b << " is " << rectangle(a, b) << "\n";

			break;
		}
		case 2:
		{
			do
			{
				cls();
				cout << "Enter side a\n> ";
				cin >> a;
				clear();
				if (a <= 0)
				{
					cout << "Error! Side must be greater than 0!\n";
					pause();
				}
			} while (a <= 0);
			do
			{
				cls();
				cout << "Enter side b\n> ";
				cin >> b;
				clear();
				if (b <= 0)
				{
					cout << "Error! Side must be greater than 0!\n";
					pause();
				}
			} while (b <= 0);
			do
			{
				cls();
				cout << "Enter side c\n> ";
				cin >> c;
				clear();
				if (c <= 0)
				{
					cout << "Error! Side must be greater than 0!\n";
					pause();
				}
			} while (c <= 0);

			cout << "Area of triange with sides " << a << ", " << b << ", " << c << " is " << triangle(a, b, c) << "\n";

			break;
		}
		case 3:
		{
			do
			{
				cls();
				cout << "Enter radius r\n> ";
				cin >> c;
				clear();
				if (c <= 0)
				{
					cout << "Error! Radius must be greater than 0!\n";
					pause();
				}
			} while (c <= 0);

			cout << "Area of circle with radius " << c << " is " << circle(c) << "\n";

			break;
		}
		default:
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}


		pause();
		cls();
	}
	cls();
}

void flag()
{
	cout << "This is " << __func__ << " module\n";

	// TODO
	//	Find out how to draw flag properly
	cout
		<< "| * * * * * * * * OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|\n"
		<< "| * * * * * * * * :::::::::::::::::::::::::::::::::|\n"
		<< "| * * * * * * * * OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|\n"
		<< "| * * * * * * * * :::::::::::::::::::::::::::::::::|\n"
		<< "| * * * * * * * * OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|\n"
		<< "| * * * * * * * * :::::::::::::::::::::::::::::::::|\n"
		<< "|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|\n"
		<< "|::::::::::::::::::::::::::::::::::::::::::::::::::|\n"
		<< "|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|\n"
		<< "|::::::::::::::::::::::::::::::::::::::::::::::::::|\n"
		<< "|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|\n"
		<< "|::::::::::::::::::::::::::::::::::::::::::::::::::|\n"
		<< "|OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO|\n";

	pause();
	cls();
}

void sinus()
{
	cout << "This is " << __func__ << " module\n";

	vector <double> ySin;
	char sign = '*';
	double thickness = 0.08;
	double width = 10.0;
	double step = 0.25;

	// get values of sinus
	for (double i = -width; i <= width; i += step)
	{
		ySin.push_back(sin(i) / 2.0);
	}

	// drawing
	for (double plot = 1.0; plot >= -1.0; plot -= 0.05)
	{
		for (int i = 0; i < ySin.size(); i++)
		{
			if (plot == 0.0)
				cout << "-";
			else if (abs(plot - ySin[i]) >= thickness)
				cout << " ";
			else
				cout << sign;
		}
		cout << "\n";
	}

	pause();
	cls();

}

void romeNumbers()
{
	cout << "This is " << __func__ << " module\n";

	// get numeric value of symbol
	auto decrypt = [](char num)
	{
		switch (num)
		{
		case 'I':
		case 'i':
			return 1;
			break;
		case 'V':
		case 'v':
			return 5;
			break;
		case 'X':
		case 'x':
			return 10;
			break;
		case 'L':
		case 'l':
			return 50;
			break;
		case 'C':
		case 'c':
			return 100;
			break;
		case 'D':
		case 'd':
			return 500;
			break;
		case 'M':
		case 'm':
			return 1000;
			break;
		default:
			return 0;
			break;
		}
	};

	char c, per;
	string s, ch;
	int new_value, old_value = 0, result = 0;

	cout << "Enter Romanian Number\n> ";
	cin >> s;

	for (int i = 0; i <= s.length(); i++)
	{
		new_value = decrypt(s[i]);
		// iv
		if (new_value < old_value)
		{
			result += old_value;
			old_value = new_value;
		}
		else if (new_value > old_value)
			// v
			if (old_value == 0)
				old_value = new_value;
		// vi
			else
			{
				result += new_value - old_value;
				old_value = 0;
			}
		// ii, xx, ...
		else if (new_value == old_value)
		{
			result += new_value + old_value;
			old_value = 0;
		}
	}
	cout << "Result is " << result << "\n";

	pause();
	cls();

}

int lcg_recursive(int i, int m, int c)
{
	// same as if(i>0) {return lcg(i-1)} else {return 0}
	return i > 0 ? (lcg_recursive(i - 1, m, c) * m + i) % c : 0;
}


void lcg()
{
	cout << "This is " << __func__ << " module\n";

	// I didn't found an easy solution to implement recursive lamda, so I made  classic int lcg(int i){}
	int i = 3, m = 37, c = 64; // 1st variant
	//int i = 13894, m = 25173, c = 65537; // 2nd variant
	int s = lcg_recursive(i, m, c);

	cout << "i is " << i << ", m is " << m << ", c is " << c << "\nResult is " << s << "\n";
	pause();
	cls();
}

void matrixMult()
{
	cout << "This is " << __func__ << " module\n";

	// I wrote matrxi multiplier, but this hasn't be as task
	/*
	const int size = 15;
	int wA, hA, wB, hB;
	int A[size][size], B[size][size], C[size][size];
	bool generate = false;

	// define matrix A, B, C
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
		{
			A[i][j] = 0;
			B[i][j] = 0;
			C[i][j] = 0;
		}

	// input params of matrix A
	do
	{
		cls();
		cout << "Enter columns of matrix A\n> ";
		cin >> wA;
		clear();
		if (wA <= 0)
		{
			cout << "Error! Side must be greater than 0!\n";
			pause();
		}
	} while (wA <= 0);

	do
	{
		cls();
		cout << "Enter rows of matrix A\n> ";
		cin >> hA;
		clear();
		if (hA <= 0)
		{
			cout << "Error! Side must be greater than 0!\n";
			pause();
		}
	} while (hA <= 0);

	// Generating matrix A
	if (generate)
	{
		cls();
		srand(time(0));
		//Generate
		for (int i = 0; i < hA; i++)
		{
			for (int j = 0; j < wA; j++)
			{
				A[i][j] = rand() % 10;
				cout << A[i][j] << ' ';
			}
			cout << "\n";
		}
	}
	else
	{
		for (int i = 0; i < hA; i++)
		{
			cls();
			cout << "Enter " << i << " row\n";
			for (int j = 0; j < wA; j++)
			{
				cin >> A[i][j];
				clear();
			}
		}
		for (int i = 0; i < hA; i++)
		{
			for (int j = 0; j < wA; j++)
			{
				cout << A[i][j] << ' ';
			}
			cout << "\n";
		}
	}

	pause();
	cls();

	// input params of matrix B
	do
	{
		cls();
		cout << "Enter columns of matrix B\n> ";
		cin >> wB;
		clear();
		if (wB <= 0)
		{
			cout << "Error! Side must be greater than 0!\n";
			pause();
		}
	} while (wB <= 0);

	// Just to cleaner understand
	hB = wA;

	// Generating matrix B
	if (generate)
	{
		srand(time(0));
		//Generate
		for (int i = 0; i < hB; i++)
		{
			for (int j = 0; j < wB; j++)
			{
				B[i][j] = rand() % 10;
				cout << B[i][j] << ' ';
			}
			cout << "\n";
		}
	}
	else
	{
		for (int i = 0; i < hB; i++)
		{
			cls();
			cout << "Enter " << i << " row\n";
			for (int j = 0; j < wB; j++)
			{
				cin >> B[i][j];
				clear();
			}
		}
		cls();
		for (int i = 0; i < hB; i++)
		{
			for (int j = 0; j < wB; j++)
			{
				cout << B[i][j] << ' ';
			}
			cout << "\n";
		}
	}

	pause();
	cls();

	// calculations
	for (int k = 0; k < wB; k++)
	{
		// columns B
		for (int i = 0; i < hA; i++)
		{
			// rows A
			for (int j = 0; j < wA; j++)
			{
				// cells A * B
				C[i][k] += A[i][j] * B[j][k];
			}
		}
	}

	// output
	for (int i = 0; i < hA; i++)
	{
		for (int j = 0; j < wB; j++)
		{
			cout << C[i][j] << ' ';
		}
		cout << "\n";
	}
	*/

	double A[3][4], B[4][2], C[3][2];

	int indMin, indMax;
	double max, min, sumK, sumD;
	max = -1;
	min = -1;
	indMin = -1;
	indMax = -1;
	sumD = 0;

	// Input matrix A
	cout << "Enter the first matrix\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter " << i << " row\n";
		for (int j = 0; j < 4; j++)
		{
			cin >> A[i][j];
			clear();
		}
		cls();
	}

	// Input matrix B
	cout << "Enter the second matrix\n";
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter " << i << " row\n";
		for (int j = 0; j < 2; j++)
		{
			cin >> B[i][j];
			clear();
		}
		cls();
	}

	// Init matrix C (because we can't null + int)
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			C[i][j] = 0;

	// Calculating
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			for (int k = 0; k < 4; k++)
				C[i][j] = C[i][j] + A[i][k] * B[k][j];

	// Calculating money
	for (int j = 0; j < 3; j++)
	{
		sumD += C[j][0];
		if (C[j][0] > max)
		{
			max = C[j][0];
			indMax = j;
		}

		if ((C[j][0] < min) || (min == -1))
		{
			min = C[j][0];
			indMin = j;
		}
	}
	cout << "Max money get seller " << indMax + 1 << "\nMin money get the seller" << indMin + 1 << "\n\n";


	max = -1;
	min = -1;
	indMin = -1;
	indMax = -1;
	sumK = 0;

	// Calculating comissions
	for (int j = 0; j < 3; j++)
	{

		sumK += C[j][1];

		if (C[j][1] > max)
		{
			max = C[j][1];
			indMax = j;
		}

		if ((C[j][1] < min) || (min == -1))
		{
			min = C[j][1];
			indMin = j;
		}
	}

	cout << "Max Comissions get the seller " << indMax + 1 << "\n" 
		<< "Min Comission get the seller " << indMin + 1 << "\n"
		<< "Overall sum of money << " << sumD << "\n" 
		<< "Overall Comissions " << sumK << "\n"
		<< "All money is " << sumD + sumK << "\n";
	
	pause();
	cls();
}

void notation()
{
	cout << "This is " << __func__ << " module\n";

	int base;
	int symbol;
	string baseNum;
	int num10 = 0;
	vector<int> num;

	bool error = false;
	do
	{
		error = false;
		do
		{
			cout << "Enter base of number\n> ";
			cin >> base;
			clear();
			if (base == 0 || base > 36 || base < -36)
			{
				cout << "Error! Incorrect base!\n";
				pause();
			}
		} while (base == 0 || base > 36 || base < -36);

		cout << "Enter your number\n> ";
		cin >> baseNum;

		// parse and check input
		for (int i = 0; i < baseNum.size(); i++)
		{
			/*
			for (int i = 48; i <= 57; i++)
				cout << char(i) << ' ';
			//0 1 2 3 4 5 6 7 8 9
			cout << '\n';
			for (int i = 65; i <= 90; i++)
				cout << char(i) << ' ';
			//A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
			cout << '\n';
			for (int i = 97; i <= 122; i++)
				cout << char(i) << ' ';
			//a b c d e f g h i j k l m n o p q r s t u v w x y z
			cout << '\n';
			*/
			symbol = int(baseNum[i]);
			symbol -= 48;		// get nums
			if (symbol > 10)	// if a-z
				symbol -= 7;

			if (symbol > 36)	// if A-Z
				symbol -= 32;

			//cout << "symbol is " << symbol << "\n";
			if (symbol < 0 || symbol > abs(base))
			{
				cout << "Error! Number out of base notation\n";
				error = true;
				pause();
				cls();
				break;
			}
			else
				num.push_back(symbol);
		}
	} while (error);

	// translate number to base 10
	for (int i = 0; i < num.size(); i++)
		num10 += num[i] * pow(base, num.size() - i - 1);

	cls();

	cout << "In base 10 Number is " << num10 << "\n";
	pause();
	cls();

	/*
		To be correct, we can use negative or big numbers, but it will be more complicated
		Also we possible can use float base, but operation of % doesn't support floats
		By the way, translation from negative works properly,
		But for base greater than 35(0-Z) writes in decimal with [], so it ould be better to use regex
	*/
	do
	{
		cout << "Enter target base of number\n> ";
		cin >> base;
		clear();
		//cout << "//base is " << base << "\n";
		if (base <= 0 || base > 36)
		{
			cout << "Error! Base is incorrect!!!\n";
			pause();
		}
	} while (base <= 0 || base > 36);


	// translate to target base
	baseNum = "";


	while (num10 != 0)
	{
		symbol = abs(num10 % abs(base));

		//cout << "num is " << num10 << "; % is " << symbol << "\n";		

		if (symbol >= 10)
			symbol += 55;
		else
			symbol += 48;
		/*
		if (abs(num10) < abs(base))
		{
			if (num10 > 10)
				baseNum = char(num10 + 55) + baseNum;
			else
				baseNum = char(num10 + 48) + baseNum;
		}
		*/
		baseNum = char(symbol) + baseNum;
		num10 /= base;
	}

	cout << "Number with base " << base << " is " << baseNum << "\n";

	pause();
	cls();

}

void hw5()
{

	bool quitInner = false;
	int choice;
	while (!quitInner)
	{
		cout << "This is 5th homework. Now there are no modules, sorry!\n";
		pause();
		quitInner = true;
	}
}
