#include <random>
#include <iostream>
#include <vector>
#include <string>

int main(void)
{
	std::default_random_engine genorator (189);
	std::uniform_real_distribution<double> distribution(0.0, 10.0);
	double* maxValue = 0;
	std::vector<double> values;
	std::vector<int> bins = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	double value = -1.0;
	int index = -1;
	while (values.size() < 200) { 
		value = distribution(genorator);
		values.push_back(value);
		if (values.size() == 1) { maxValue = &values.back(); }
		if (values.back() > *maxValue) { maxValue = &values.back(); }
		index = static_cast<int> (value);
		bins[index] += 1;
	}
	for (int count : bins) { std::cout << std::string(count,'X') << std::endl; }
	std::cout << "Max Value: " << *maxValue << std::endl;

}