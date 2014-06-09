class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.size()<=1)
		{
			return 0;
		}
		
		int allMax = 0,
			currMax = 0,
			currMin = prices.at(0);
		for (int i = 1; i != prices.size(); i++ )
		{
			if (prices.at(i)>prices.at(i-1))
			{
				currMax = prices.at(i);
				allMax = ((currMax-currMin)>allMax) ? (currMax-currMin) : allMax;
			}
			else
			{
				currMin = (prices.at(i)<currMin) ? prices.at(i) : currMin;
			}
		}
		return allMax;	
    }
};
