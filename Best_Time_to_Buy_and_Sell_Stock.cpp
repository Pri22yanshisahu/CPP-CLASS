#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            else {
                int currentProfit = prices[i] - minPrice;

                if (currentProfit > profit) {
                    profit = currentProfit;
                }
            }
        }

        return profit;
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    Solution obj;

    int result = obj.maxProfit(prices);

    cout << "Maximum Profit = " << result << endl;

    return 0;
}