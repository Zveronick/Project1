/*
//Комментарии пишутся так

//Так//

/*или так
если нужно сделать их
многострочными*/

#include<iostream>
//подключение библиотеки IOStream (input-output stream), нужной для
//ввода-вывода информации через консоль

using namespace std;
/*
в С++ есть понятие пространств имен
это пространство определяет некую область, на которую приходятся действия оператора или функции
для того, чтобы использовать оператор из пространства, нужно это самое пространство подключить
выше подключается пространство, под названием std
*/

int main()//основная точка входа в программу (как code: в ассемблере)
{
	setlocale(LC_ALL, "Rus");//подключение русского языка
	
	//Тема 1 - вывод текста

		// Escape-последовательности
		/*
		\b - удаление последнего выведенного символа
		\n - начало новой строки
		\t - табуляция
	
		//////////////////////
	
		\\ - вывод обратной черты " \ "
		\" - вывод двойных кавычек " " "
		\' - вывод одинарных кавычек " ' "
		*/
	//Код
	/*cout << "А. Блок, \"Ночь, улица, фонарь, аптека...\"" << endl;//вывод в консоль


	cout << "\t\t\tНочь, улица, фонарь, аптека,\n";
	cout << "\t\t\tБессмысленный и тусклый свет.\n";
	cout << "\t\t\tЖиви еще хоть четверть века -\n";
	cout << "\t\t\tВсе будет так.Исхода нет.\n\n";
	cout << "\t\t\tУмрешь - начнешь опять сначала\n";
	cout << "\t\t\tИ повторится все, как встарь :\n";
	cout << "\t\t\tНочь, ледяная рябь канала,\n";
	cout << "\t\t\tАптека, улица, фонарь.\n";
	*/
	
/////////////////////////////////////////////////////////

	//Тема 2 - работа с переменными

	//Код
	/*int a = 5;
	int b, c = 2, d = 423;

	cout << a << endl;
	a = 10;
	cout << a << endl;
	
	a = b = 34;
	cout <<a<<' ' << b << " " << c << ' ' << d << endl;

	double g = 1.5565;
	
    
	bool ft = false, tf = true;
	float t = 4.3242;
	cout << ft << ' ' << tf << ' ' << t << ' ' << g;
	*/


	//Типы данных
	/*
	числовые:
	short - маленькое число (-32768 -> 32767)
	int - обычное число (-2147483648 -> 2147483647)
	long - длинное число (-2**64 -> 2**64-1)
	float - число с плавающей точкой (одинарная точность) ()
	double - число с плавающей точкой (двойная точность) ()

	символьные:
	string - строка (массив char'ов) (n*8 бит)
	char - символ, просто символ (1 байт)

	логические:
	bool - логический тип данных - false или true (1 байт)
	*/

/////////////////////////////////////////////////////////

	//Тема 3 - константы

	/*const int COUNT_DAYS_IN_WEEK = 7;
	const double PHYS_G = 9.8, PHYS_PI = 3.1415926;

	const char NEW_LINE = '\n';

	cout << COUNT_DAYS_IN_WEEK << '\n';
	cout << PHYS_G << NEW_LINE << PHYS_PI;
	*/

/////////////////////////////////////////////////////////

	//Тема 4 - ввод данных и операторы
	/*long Var1, Var2;

	cout << "Введите число: \n";
	cin >> Var1;
	cout << "Введите второе число: \n";
	cin >> Var2;
	cout << "Сумма этих чисел: " << Var1 + Var2<<'\n';
	cout << "Введите два числа: \n";
	cin >> Var1 >> Var2;
	cout << "Произведение этих чисел:" << Var1 * Var2;
	*/

	//ДЗ от Тайлера Дердена
	/*
	int c1, c2, c3;
	cout << "\n\n\nВведите три числа : \n";
	cin >> c1 >> c2 >> c3;
	cout << "\nСумма чисел = " << c1 + c2 + c3<< endl;
	cout << "Произведение чисел = " << c1 * c2 * c3<< endl;
	cout << "Среднее арифметическое чисел = " << (c1 + c2 + c3) / 3 << endl; 
	*/

	//Операторы
	/*
	УНАРНЫЕ:
	a = -a (отрицание)
	а++ (инкремент (+1))
	а-- (декремент (-1))
	
	БИНАРНЫЕ:
	+ (сложение)
	- (вычитание)
	* (умножение)
	/ (деление)
	% (деление по модулю)

	< (логическое БОЛЬШЕ)
	> (логическое МЕНЬШЕ)
	<= (логическое БОЛЬШЕ или РАВНО)
	>= (логическое МЕНЬШЕ или РАВНО)
	ТЕРНАРНЫЙ:
	???
	
	*/

/////////////////////////////////////////////////////////

	//Тема 5 - инкремент, декремент и сокращенная арифметика
	
	//код
	/*
    int a;

	cout << "Введите число\n";
	cin >> a;
	a++;
	cout << "Результат инкремента - " << a--;
	a--;
	cout << "\nРезультат декремента - " << a << endl;

	int b;
	a = 1;
	b = ++a * a++; 
	//поскольку первый инкремент префиксный, у него приоритет выше, чем у умножения, а значит мы сначала получаем a = 2, а потом умножаем a на a, отсюда и 4
	//второй же инкремент (из-за низкого приоритета) изменит значение а на 3, но уже ПОСЛЕ присвоения значения b, из-за чего  так и останется 4, а а станет 3
	cout << b;

	a += 23; //сокращенные арифметические формулы РАБОТАЮТ

	*/	

/////////////////////////////////////////////////////////

	//Тема 6 - логика

	/*
	Операторы сравнения:
	
	< - Больше
	<= - Больше\равно
	> - Меньше
	>= - Меньше\равно

	Операторы равенства:

	== - Равно
	!= - Не равно
	
	Логические операторы:
	
	&& - логическое "И"
	|| - логическое "ИЛИ"
	!= - логическое "НЕ"
	!(а) - НЕ "а"
	
	*/

/////////////////////////////////////////////////////////

	//Тема 7 - ветвления

	//if
	/*
	if (условие)
	{
		действие1;
		действие2;	
		действие3;
	}
	else if ()
	{
		действие1;
	}
	else
	{
		действие2;
	}
	*/

	//while
	/*
	while (условие)
	{
		действие1;
		действие2;
		действие3;
	}
	*/

	//do while
	/*do
	{
		действие1;
	} while (условие);
	*/

	//for
	/*
	for (int i = 0; i < length; i++)
	{
		действие1;
	}
	*/

	//ДЗ от Тайлера Дердена
	/*
	int a;
	cout << "Введите число: \n";
	cin >> a;
	if (a%2==0)
	{
		cout << "\nЧисло четное";
	}
	else
	{
		cout << "\nЧисло нечетное";
	}
	*/

	/*
	int a, b = 0;
	bool isVertical;
	char symbol;

	cout << "Введите данные:" << endl
		<< "Из какого символа делать линию? " << endl
		<< "Сколько символов длинной будет линия? " << endl
		<< "Линия должна быть вертикальной? (0, 1)" << endl;
	cin >> symbol >> a >> isVertical;

	while (a != b) {
		if (isVertical == true) {
			cout << symbol << "\n";
		}
		else
		{
			cout << symbol;
		}
		b++;
	}
	*/

	/*
	int first, second, summa = 0;
	cout << "Введите два числа - верхний и нижний предел вычислений - \n";
	cin >> first >> second;
	do
	{
		if (first % 2 == 0) {
			first++;
		}
		else
		{
			summa += first;
			first++;
		}
	} while (first!=second);
	cout << "\nСумма нечетных чисел в выбранном диапазоне равна - " << summa;
	*/

/////////////////////////////////////////////////////////

	//Тема 8 - оператор множественного выбора switch

	//Использование
	/*
	switch (выражение)
	{
	case значение1:
		действие1;
		break;
	
	case значение2:
		действие2;
		break;
	
	case значение3:
		действие3;
		break;
	
	default:
		действие_по_умолчанию;
		break;
	}
	*/

	//ДЗ от Тайлера Дердена
	/*int a, b, c;
	cout << "Введите два числа\nЧисло а = ";
	cin >> a;
	cout << "\nЧисло b = ";
	cin >> b;
	cout << "\nЧто вы хотите с ними сделать?" << endl;
	cout << "1) Сложить" << endl;
	cout << "2) Вычесть b из a" << endl;
	cout << "3) Умножить" << endl;
	cout << "4) Разделить a на b" << endl;
	cin >> c;

	switch (c)
	{
	case 1:
		cout << a + b;
		break;

	case 2:
		cout << a - b;
		break;

	case 3:
		cout << a * b;
		break;

	case 4:
		cout << a / b;
		break;


	default:
		cout << "Неверная команда";
		break;
	}
	*/

	/*int i, j;
	cout << "Введите два числа - ширину и длину прямоугольника - \n";
	cin >> i >> j;
	for (; i !=0 ; i--)
	{
		for (int f = j ;f != 0; f--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	*/

/////////////////////////////////////////////////////////
	
	//Тема 9 - массивы

	//тип_данных имя [количество_элементов];
	/*
	int arr[]{ 12, 54, 54, 666};
	cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << endl;
	*/
	

	const int ARR_SIZE = 5;
	int arr[ARR_SIZE];
	cout << "Введите по порядку значения элементов массива:" << endl;
	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << "arr["<<i<<"] = ";
		cin >> arr[i];
	}

	for (int i = 0; i < sizeof(arr)/sizeof(int); i++) //можно также использовать данную запись через sizeof
	{
		cout << i+1 << "-й элемент массива равен - " << arr[i] << endl;
	}

	//sizeof возвращает занимаемое место в памяти, поскольку массив состоит из integer'ов, мы делим общую память,
	//занимаемую массивом на количество памяти, занимаемой int'овыми переменными

	int a = 123;

}