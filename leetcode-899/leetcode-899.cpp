class Solution {
public:
  string orderlyQueue(string s, int k) {
    string min_s = s;
    if (k == 1) {
      for (int i = 0; i < s.size(); i++) {
        s += s[0];
        s.erase(s.begin());
        min_s = min_s < s ? min_s : s;
      }
    } else {
      sort(min_s.begin(), min_s.end());
    }
    return min_s;
  }
};
