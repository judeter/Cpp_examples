#include <random>
#include <iostream>
#include <vector>
#include <string>

int main(void)
{
	std::default_random_engine genorator (13689);
	std::uniform_real_distribution<double> distribution(0.0, 10.0);

	std::vector<double> values;
	std::vector<int> bins = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	double value = -1.0;
	int index = -1;
	while (values.size() < 200) { 
		value = distribution(genorator);
		values.push_back(value);
		index = static_cast<int> (value);
		bins[index] += 1;
	}
	for (int count : bins) { std::cout << std::string(count,'X') << std::endl; }




}