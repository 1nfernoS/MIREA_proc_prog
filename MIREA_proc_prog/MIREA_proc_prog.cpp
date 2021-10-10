#define _USE_MATH_DEFINES

#include <iostream> 
#include <math.h>
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
 |      matrixMult  -   task for multiplying matrix                      |
 |      notation    -   task for translate number into different notation|
 |  hw5	            -   interface for 5th homework                       |
 |                                                                       |
 |-----------------------------------------------------------------------|
 |                                                                       |
 |  ignor           -   for clear input                                  |
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
	cout << char(48+2) << "\n";
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

	for (p = 0.1; p < 100; p += 0.1)
	{
		r = (p / 100);

		mTmp1 = s * r * pow(r + 1, n);
		mTmp1 = mTmp1 / (12 * (pow(r + 1, n) - 1));

		if (abs(mTmp1 - m) <= 0.1)
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
			<< "7. Matrix Multiply\n"
			<< "8. Notation Translate\n"
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
			matrixMult();
			break;
		}
		case 8:
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

			cout << "Area of triange with sides " << a << ", " << b << ", " << c<< " is " << triangle(a, b, c) << "\n";

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

}

void romeNumbers()
{

}

void matrixMult()
{

}

void notation()
{
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

	cout << "In base 10 Number is " << num10 << "\n";


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
		
		if (symbol > 10)
			symbol += 55;
		else
			symbol += 48;
		
		if (abs(num10) < abs(base))
		{
			if (num10 > 10)
				baseNum = char(num10 + 55) + baseNum;
			else
				baseNum = char(num10 + 48) + baseNum;
		}
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
