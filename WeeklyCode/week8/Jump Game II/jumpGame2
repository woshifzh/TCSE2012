class Solution {
public:
    int jump(int A[], int n) {
		if (n==1)
		{
			return 0;
		}
		
		vector<int> stepInd(n+1, -1);
		int stepNum = 0;
		stepInd[0] = 0;
		int nextStep = 0;

		for (int i = 0; i <= stepInd[stepNum] && i < n; i++)
		{
			nextStep = i + A[i];
			if (stepInd[stepNum+1] < nextStep)
			{
				stepInd[stepNum+1] = nextStep;
			}
			if (i == stepInd[stepNum])
			{
				stepNum++;
				nextStep = 0;
			}
			if (stepInd[stepNum] >= n-1)
			{
				return stepNum;
			}
		}// for (int i = 0; i <= stepInd[stepNum] && i < n; i++)
    }
};
