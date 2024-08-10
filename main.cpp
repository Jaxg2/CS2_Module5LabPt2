//Jaxon
#include "StatTools.h"
#include <iostream>
using namespace std;


template<class T>

T StatTools<T>::max(const vector<T>& data)
{
	return *max(data.begin(), data.end));
}

template <class T>
T StatTools<T>:: min(const vector<T>& data)
{
	return *min(data.begin(), data.end));
}

template <class T>

double StatTools<T>::mean(const vector<T>& data)
{
	if (data.empty()) 
		return 0.0;
}

template <class T>
vector<T> StatTools<T>::mode(const vector<T>& data)
{
	map<T, int> frequency;
	for (const auto& num : data)
	{
		frequency[num]++;
	}

	int maxFreq = 0;
	for (const auto& pair : frequency)
	{
		if (pair.second > maxFreq)
		{
			maxFreq = pair.second;
		}
	}

	vector<T> modes;
	for (const auto& pair : frequency)
	{
		if (pair.second == maxFreq)
		{

		}
	}
}

static double median(vector<T> data)
{

}

static void stemAndLeafPlot(const vector<T>& data)
{

}

static void barChart(const vector<T>& data)
{

}

int main()
{

}

