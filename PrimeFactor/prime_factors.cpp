#include<vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result = {};
		for (int divider = 2; divider < number; ++divider) {
			if (number % divider == 0) {
				if (divider <= number / divider) {
					result.push_back(divider);
					result.push_back(number / divider);
				}
			}
		}
		if ((number != 1) && (result.size() == 0)) {
			result.push_back(number);
		}
		return result;
	}
};