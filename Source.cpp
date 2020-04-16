#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");


	const float A = 88.362,B = 13.397,C = 4.799,D = 5.677;
	float BMR, weight, height, age;
	

	cout << "\t\t Добро пожаловать в расчет бжу и калорий для мужчин!" << endl;
	cout << "Ваш вес(без лишнего жира) = ";
	cin >> weight;

	cout << "Ваш рост = ";
	cin >> height;

	cout << "Ваш возраст = ";
	cin >> age;

	BMR = A + (B * weight) + (C * height) - (D * age);

	float BMRSOJ = BMR * 1.2, BMRUA = BMR * 1.375, BMRSA = BMR * 1.55, BMRAL = BMR * 1.725, BMRSPORT = BMR * 1.9;

	cout << "\n";
	cout << "При сидячем образе жизни = " << BMRSOJ << "ккал" << endl;
	cout << "Умеренная активность (легкие физические нагрузки, либо занятия 1-3 раза в неделю) = " << BMRUA << "ккал" << endl;
	cout << "Средняя активность (занятия 3-5 раз в неделю) = " << BMRSA << "ккал" << endl;
	cout << "Активные люди (интенсивные нагрузки, занятия 6-7 раз в неделю) = " << BMRAL << "ккал" << endl;
	cout << "Спортсмены и люди, выполняющие схожие нагрузки(6-7 раз в неделю) = " << BMRSPORT << "ккал" << endl;
	cout << "\n";
	
	cout << "\t\t Ежедневная норма белков, жиров, углеводов"<<endl;

	float belki = weight * 2; cout << "Белки = " << belki << endl;
	float jir = weight * 1; cout << "Жиры = " << jir << endl;

	short uglsoj = (BMRSOJ - (belki * 4.1) - (jir * 9.29)) / 4.1; cout << "Углеводы при сидячем образе жизни = " << uglsoj << endl;
	short uglua = (BMRUA - (belki * 4.1) - (jir * 9.29)) / 4.1; cout << "Углеводы при умеренной активности = " << uglua << endl;
	short uglsa = (BMRSA - (belki * 4.1) - (jir * 9.29)) / 4.1; cout << "Углеводы при средней активности = " << uglsa << endl;
	short uglal = (BMRAL - (belki * 4.1) - (jir * 9.29)) / 4.1; cout << "Углеводы для активных людей = " << uglal << endl;
	short uglsport = (BMRSPORT - (belki * 4.1) - (jir * 9.29)) / 4.1; cout << "Углеводы для спортсменов = " << uglsport << endl;
	
	cout << "\n";
	cout << "Все расчеты были произведены на основании формулы Харриса-Бенедикта" << endl;
	cout << "Будьте здоровы! :)" << endl;
	cout << "\nDeveloped by Viktor Iukhlin";
	cout << "\n\n\n\n";

	
	system("pause");



}


