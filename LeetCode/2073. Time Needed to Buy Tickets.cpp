class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int n = tickets.size();
        for (int i = 0; i < n; i++) {
            q.push(tickets[i]);
        }

        int time = 0;
        while (true) {
            q.front()--;
            time++;

            if (k == 0 && q.front() == 0) break;

            if (k != 0) {
                k--;
            } else {
                k = q.size() - 1;
            }

            if (q.front() != 0) {
                q.push(q.front());
            }
            q.pop();
        }
        return time;
    }
};

// https://leetcode.com/problems/time-needed-to-buy-tickets/
