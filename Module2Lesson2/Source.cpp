#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("введите номер задания: ");
	scanf("%d", &n);

	if (n==1)
	{
		//3.	С начала суток прошло N секунд (N — целое). Найти количество полных минут, прошедших с начала суток.
		int N = 0;
		printf("введите количество секунд N: ");
		scanf("%d", &N);

		int m = 0;
		m = N / 60;
		printf("Количество полных минут, прошедших с начала суток: %d\n", m);
	}
	else if (n==2)
	{
		//4.	Даны два неотрицательных числа a и b. Найти их среднее геометрическое.
		float a = 0, b = 0;
		printf("введите число а: ");
		scanf("%f", &a);

		printf("введите число b: ");
		scanf("%f", &b);

		float c = 0;
		c = sqrt(a*b);
		printf("среднее геометрическое = %lf\n", c);
	}
	else if (n==3)
	{
		int v = 0;
		printf("введите номер подзадания: ");
		scanf("%d", &v);

		if (v==1)
		{
			//y=e2x+9.7c; c=a2+sqrt(b*x); a=lgx
			float x = 0, b = 0.4, e = 2.71828;
			printf("введите x: ");
			scanf("%f", &x);

			float y = 0, c = 0, a = 0;
			a = log10(x);
			c = pow(a, 2) + sqrt(b*x);
			y = pow(e, 2 * x) + pow(9.7, c);
			printf("y = %f\tc = %f\ta = %f\n", y, c, a);
		}
		else if (v==2)
		{
			float x = 0, k = 4, e = 2.71828;
			printf("введите x: ");
			scanf("%f", &x);

			float y = 0, b = 0, a = 0;
			a = log(fabs(x));
			b = pow(e, 2 * x) + a*x;
			y = x*pow(a, 3) + pow(b, 3);
			printf("y = %f\ta = %f\tb = %f\n", y, a, b);
		}
		else if (v==3)
		{
			float x = 0, p = 1, e = 2.71828;
			printf("введите x: ");
			scanf("%f", &x);

			float y = 0, a = 0, b = 0;
			a = pow(e, sqrt(fabs(x)));
			b = sin(pow(p, 2)) + pow(x, 3);
			y = pow(a, 3) / pow(b, 2);
			printf("y = %f\ta = %f\tb = %f\n", y, a, b);
		}
		else if (v==4)
		{
			float x = 0, t = 6;
			printf("введите x: ");
			scanf("%f", &x);

			float y = 0, a = 0, b = 0;
			a = log10(x);
			b = sqrt(pow(x, 2) + pow(t, 2));
			y = pow(fabs(a - b*x), 0.2);
			printf("y = %f\ta = %f\tb = %f\n", y, a, b);
		}
		else if (v==5)
		{
			float t = 0, p = 3;
			printf("введите t: ");
			scanf("%f", &t);

			float y = 0, x = 0, k = 0;
			k = sqrt(p*t);
			x = p*pow(t, 2) + sqrt(k);
			y = pow(tan(pow(x,2)),3)+k*t;
			printf("y = %f\tx = %f\tk = %f\n", y, x, k);
		}
		else if (v==6)
		{
			float x = 0, m = 2;
			printf("введите x: ");
			scanf("%f", &x);

			float y = 0, a = 0, b = 0;
			a = sqrt(fabs(x));
			b = pow(x, 4) + pow(m, 2);
			y = pow(sin(a + pow(tan(b), 3)), 2);
			printf("y = %f\ta = %f\tb = %f\n", y, a, b);
		}
	}
	else if (n==4)
	{
		//6.	Задание: составить структурную схему алгоритма и проект программы, исходные данные ввести с клавиатуры, результат вывести на экран.
		int w = 0;
		printf("введите номер подзадания: ");
		scanf("%d", &w);

		if (w==1)
		{
			//1.	Тело движется по закону S =t3 – 3t2 + 2. Вычислить скорость тела в момент времени t. 
			//Значение t ввести с клавиатуры (Функция скорости есть производная от функции расстояния по времени).
			float t = 0;
			printf("ввести t: ");
			scanf("%f", &t);

			float s = 0, v = 0;
			s = pow(t, 3) - 3 * pow(t, 2) + 2;
			v = s / t;
			printf("скорость тела в момент времени t: %f\n", v);
		}
		else if (w==2)
		{
			//2.	Найти корни квадратного уравнения a·x2 + b·x + c = 0, введя с экрана коэффициенты a, b, c (коэффициент a не равен 0), для которых дискриминант положителен.
			float a = 0, b = 0, c = 0;
			printf("введите коэффициент a: ");
			scanf("%f", &a);

			printf("введите коэффициент b: ");
			scanf("%f", &b);

			printf("введите коэффициент c: ");
			scanf("%f", &c);

			float x1 = 0, x2 = 0;
			x1 = (-b + sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
			x2 = (-b - sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
			printf("корень x1 = %f\tкорень x2 = %f\n", x1, x2);
		}
		else if (w==3)
		{
			//3.	Вычислить корень уравнения 2x/a +b-12=0 при различных значениях параметров a, b. Значения a, b ввести с экрана.
			float a = 0, b = 0;
			printf("введите коэффициент a: ");
			scanf("%f", &a);

			printf("введите коэффициент b: ");
			scanf("%f", &b);

			float x = 0;
			x = (a*(12 - b)) / 2;
			printf("корень x = %f\n", x);
		}
		else if (w==4)
		{
			//4.	Вычислить рентабельность работы предприятия за месяц по формуле рент = прибыль/себестоимость100%, 
			//если себестоимость продукции в текущем месяце уменьшилась по сравнению с прошлым на 5 %. Значение прибыли и себестоимости за прошлый месяц ввести с экрана
			float income = 0, seb = 0;
			printf("введите сумму прибыли: ");
			scanf("%f", &income);

			printf("введите сумму себестоимости за прошлый месяц: ");
			scanf("%f", &seb);

			float rent = 0;
			rent = income / (seb - (seb * 5 / 100));
			printf("рентабельность предприятия = %f процентов\n", rent*100);
		}
		else if (w==5)
		{
			//5.	Идет k-я секунда суток. Определить, сколько целых часов (Н) и целых минут (М) прошло с начала суток. 
			//Вывести на экран фразу: «Эточасовминут». Вместо многоточий поставить вычисленные значения Н и М.
			int k = 0;
			printf("сколько секунд прошло с начала суток: ");
			scanf("%d", &k);

			int m = 0;
			m = k / 60;
			printf("Это %d часов %d минут\n", m/60, m%60);
		}
	}
}