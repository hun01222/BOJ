#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void swap(double &f, double &g)
{
	double tmp = f;
	f = g;
	g = tmp;
}

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	double pi = 3.14159265358979f;
	double x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	cout << fixed;
	cout.precision(3); // 소수점 3자리수

	if (r1 < r2)
	{
		swap(x1, x2);
		swap(y1, y2);
		swap(r1, r2);
	}

	double d = distance(x1, y1, x2, y2);

	if (d >= r1 + r2) // 면적이 겹치지 않을 때
	{
		cout << 0.000 << '\n';
	}
	else if (d + r2 <= r1) // 작은 원이 큰 원 내부에 있을 때
	{
		cout << r2 * r2 * pi << '\n';
	}
	else // 원 면적이 부분적으로 겹칠 때
	{
		// 코사인 법칙
		double theta1 = acos((r1 * r1 + d * d - r2 * r2) / (2 * r1 * d));
		double theta2 = acos((r2 * r2 + d * d - r1 * r1) / (2 * r2 * d));
		// 부채꼴넓이 - 삼각형 널비
		double S1 = (r1 * r1 * 2 * theta1) / 2 - r1 * r1 * sin(2 * theta1) / 2;
		double S2 = (r2 * r2 * 2 * theta2) / 2 - r2 * r2 * sin(2 * theta2) / 2;
		// 총 면적
		double ans = S1 + S2;

		cout << ans << '\n';
	}

	
}