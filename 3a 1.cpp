
//area of a triangle
float s, a, b, c, area1;
	cout << "Please Enter the sides of the triangle: " << endl;
	cin >> a >> b >> c;

	s = (a + b + c) / 2;
	area1 = sqrt(s * (s - a) * (s - b) * (s - c));
	cout << "The area of the triangle is : " << area1;





	//switching variables
	int x=5;
	int y = 7;

	x = x + y;
	y = x - y;
	x = x - y;


	cout << x << endl;
	cout << y;






	//switch statement
	double x, y;
	char res;
	cout << "enter + for sum, - for difference, * for product, / for division, "<<endl;
	cin >> res;
	cout << "please enter the two numbers"<<endl;
	cin >> x >> y;
	switch (res)
	{
	case '+':
			cout << x + y;
			break;
	case '-':
		cout << x - y;
		break;
	case '*':
		cout << x * y;
		break;
	case '/':
		cout << x / y;
		break;
	default:
		cout << "wrong input";
	}







	//if, else if, else statement
	double x, y;
	char res;
	cout << "enter + for sum, - for difference, * for product, / for division, "<<endl;
	cin >> res;
	cout << "please enter the two numbers"<<endl;
	cin >> x >> y;
	if(res=='+')
	{
		cout << x + y;
	}
	else if (res == '-')
	{
		cout << x - y;
	}
	else if (res == '*')
	{
		cout << x * y;
	}
	else if(res== '/')
	{
		cout << x / y;
	}

	return 0;
