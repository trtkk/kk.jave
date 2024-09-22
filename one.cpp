#include<stdio.h> 
#include<math.h> 
//ʵ��һ
//int main()
//{
//	double pow(double x, double y);
//	double x0, x, f1, f2;
//	x0 = 1;
//	do
//	{
//		x = x0; //��ֵ 
//		f1 = pow(x, 2) -  exp(x);
//		f2 = 2*x - exp(x); //�Ժ��� f1 �� 
//		x0 = x - f1 / f2; //������ʽ 
//	} while (fabs(x0 - x) > 0);
//	printf("%9.8f\n", x0);
//	return 0;
//}

//ţ�ٵ�����
//int main()
//{
//	double pow(double x, double y);
//	double x0, x, f1, f2;
//	x0 = 1;
//	do
//	{
//		x = x0; 
//		f1 = pow(x, 5) - 3*pow(x,3)+x-1;
//		f2 =5*pow(x,4)-9*pow(x,2)+1; 
//		x0 = x - f1 / f2;  
//	} while (fabs(x0 - x) > 0);
//	printf("ţ�ٵ�����\n");
//	printf("%9.8f\n", x0);
//	return 0;
//}
// 

//���ַ�
double f(double x)
{
	return pow(x, 5) - 3 * pow(x, 3) + x - 1;
}

double erfen(double a, double b, double t)
{
	if (f(a) * f(b) > 0)
	{
		return NAN;
	}

	while ((b - a) / 2 > t)
	{
		double c = (a + b) / 2;
		if (f(c) == 0)
		{
			return c;
		}
		else if(f(a)*f(c)<0)
		{
			b = c;
		}
		else 
		{
			a = c;
		}
	}
	return (a + b) / 2;
}
int main()
{
	double a = -8, b = 8, t = 1e-6;
	double root = erfen(a, b, t);
	if (!isnan(root)) 
	{
		printf("���ַ�\n%9.8f\n", root);
	}
	return 0;
}


//�и
