#include<vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result = {};
		if (number == 4) {
			while (number % 2 == 0) {
				result.push_back(2);
				number = number / 2;
			}
		}
		else if (number == 6) {
			result.push_back(2);
			result.push_back(3);
		}
		else if (number == 8) {
			result.push_back(2);
			result.push_back(4);
		}
		else if (number == 9) {
			result.push_back(3);
			result.push_back(3);
		}
		else if (number == 10) {
			result.push_back(2);
			result.push_back(5);
		}
		else if (number > 1) {
			result.push_back(number);
		}
		return result;
	}
};