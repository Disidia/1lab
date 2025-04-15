#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int x;
cout<< "Выберите фигуру. 1- окружность 2- прямоугольник"<< endl;
cin>> x;
switch(x)
{
case 1:
{
int r,z;
const double pi=3.141;
cout << "Введите радиус окружности" <<endl;
cin>> r;
cout << "выберите операцию 1-площадь круга 2-площадь кругового сектора 3-длина окружности " <<endl;
cin>> z;
switch(z)
{
    case 1:
    {
    double s;
    s= (r^2) * pi;
    cout<<"площадь круга равна"<< s << endl;
    break;
    }

    case 2:
    {
    double ss;
    int l;
    cout << "Введите длину дуги в градусах" <<endl;
    cin>> l;
    if(l>360)
    cout<<"ошибка в окружности 360 градусов";
    break;
    ss= ((pi*(r^2))/360)*l;
    cout<<"площадь кругового сектора равна"<< ss << endl;
    break;
    }
    case 3:
    {
    int s;
    s= 2*r * pi;
    cout<<"длина окружности равна"<< s << endl;
    break;
    }
    default:
    cout << "введено неверное значение"<< endl;
    break;
}
break;
}


case 2:
{
int a,b,y;
cout << "введите длину и ширину прямоугольника" << endl;
cin >> a >> b;
cout << "выберите операцию: 1-площадь 2-периметр 3-диагональ" << endl;
cin >> y;
switch (y)
    {
        case 1:
        {
        int s;
        s= a*b;
        cout << "площадь равна" << s << endl;
        break;
        }

        case 2:
        {
        double p;
        p= 2*(a+b);
        cout << " периметр равен" << p << endl;
        break;
        }
        case 3:
        {
        double d;
        d= sqrt(((a^2) + (b^2)));
        cout << " диагональ равна" << d << endl;
        break;
        }
        default:
        cout << "введено неверное значение"<< endl;
        break;
    }
    default:
    break;
 }
 break;
}
return 0;
}
