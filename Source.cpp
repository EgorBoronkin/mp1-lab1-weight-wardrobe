#include<stdio.h>
#include<locale.h>
void main()
{
	setlocale(LC_ALL, "Russian");
	int h, w, d;
	float  p_dvp, p_dsp, p_wood, m;
	p_dsp = 0.6;
	p_dvp = 0.8;
	p_wood = 0.5;
	printf("Плотность двп - %f г/cм в кубе, плотность дсп - %f г/cм в кубе, плотность дерева - %f г/cм в кубе \n", p_dvp, p_dsp, p_wood);
	printf("Введите высоту от 180 см до 220 см:");
	scanf_s("%i", &h);
	printf("Введите ширину от 80 см до 120 см:");
	scanf_s("%i", &w);
	printf("Введите глубину от 50 см до 90 см:");
	scanf_s("%i", &d);
	if (180 <= h <= 220 && 80 <= w <= 120 && 50 <= d <= 90)
	{
		if (160 <= h < 205)
		{
			m = ((h * w * 0.5 * p_dvp) + (h * d * 1.5 * p_dsp * 2) + (w * d * 1.5 * p_dsp * 2) + (h * w * p_wood * 2) + (w * d * 15 * p_dsp * 2))/1000;
			printf("Масса шкафа - %f кг", m);
		}
		else 
		{
			m = ((h * w * 0.5 * p_dvp) + (h * d * 1.5 * p_dsp * 2) + (w * d * 1.5 * p_dsp * 2) + (h * w * p_wood * 2) + (w * d * 15 * p_dsp * 3))/1000;
			printf("Масса шкафа - %f кг", m);
		}
	}
	else 
	{ 
		printf("Данные введены некоректно");
	}
}