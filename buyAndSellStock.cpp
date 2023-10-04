class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int lpsf = INT_MAX; // least price so far
        int op = 0;         // overall profit
        int pist = 0;       // profit if sold today

        for (int i = 0; i < prices.size(); i++)
        {
            // to find min buying price
            if (prices[i] < lpsf)
            {
                lpsf = prices[i];
            }
            pist = prices[i] - lpsf;

            // to find max profit
            if (pist > op)
                op = pist;
        }

        return op;
    }
};