#include  <iostream>
#include  <vector>
#include  <cstdlib>
#include  <ctime>
#include  <algorithm>

#include "Complex2.h"
using namespace std;

//REF 7-11

bool comp(const Complex2& t1, const Complex2& t2)
{
	return pow(t1.real(), 2) + pow(t1.imag(), 2) > pow(t2.real(), 2) + pow(t2.imag(), 2);
}

auto main() -> int
{
	vector<Complex2> v1;
	vector<Complex2> v2;

	srand((unsigned)time(NULL));

	cout << "º¤ÅÍ1\n";
	for (int i = 0; i < 5; i++)
	{
		v1.emplace_back(rand() % 100, rand() % 100);
		cout << v1[i];
	}
	cout << endl;

	sort(v1.begin(), v1.end(), comp);

	cout << "Á¤·ÄµÈ º¤ÅÍ1" << endl;
	for (auto i : v1)
	{
		cout << i;
	}
	
	cout << "\nº¤ÅÍ2\n";
	
	for (int i = 0; i < 5; i++)
	{
		v2.emplace_back(rand() % 100, rand() % 100);
		cout << v2[i];
	}
	cout << endl;

	sort(v2.begin(), v2.end(), comp);

	cout << "Á¤·ÄµÈ º¤ÅÍ2" << endl;
	for (auto i : v2)
	{
		cout << i;
	}

	vector<Complex2> v3 (v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	cout << "º¤ÅÍ 1, º¤ÅÍ2 ÇÕº´ °á°ú" << endl;

	for(auto i: v3)
	{
		cout << i;
	}
	
	return 0;
}
