class Solution {
public:
  int lastStoneWeight(vector<int> &stones) {
    priority_queue<int> pq;

    for (auto val : stones) {
      pq.push(val);
    }

    while (pq.size() > 1) {
      int val1 = pq.top();
      pq.pop();
      int val2 = pq.top();
      pq.pop();

      if (val1 - val2 != 0) {
        pq.push(abs(val1 - val2));
      } else if (pq.size() == 0) {
        return 0;
      }
    }
    return pq.top();
  }
};
