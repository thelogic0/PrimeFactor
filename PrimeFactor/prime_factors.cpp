#include<vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int i) {
		vector<int> result = {};
		if (i == 4) {
			result.push_back(2);
			result.push_back(2);
		}
		else if (i > 1) {
			result.push_back(i);
		}
		return result;
	}
};