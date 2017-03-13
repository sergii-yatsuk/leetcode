// https://leetcode.com/problems/sentence-screen-fitting/

class Solution {
public:
    int wordsTyping(vector<string>& sentence, int rows, int cols) {
        int senSz = 0;
        for (auto& w: sentence) {
            if (w.size()>cols) return 0;
            senSz += w.size();
        }      

        senSz += sentence.size(); // one extra space after sentence

        int res=0;
        int ri=0;
        int ci=0;

        while (ri<rows) {
            int d = (cols-ci+1)/senSz;
            res += d;
            ci += d*senSz;
            
            for (auto& w:sentence) {
                if (ci + w.size() <= cols )  {
                    ci += w.size();
                    if (ci<cols) ++ci;
                }
                else {
                    ci = w.size() +1;
                    ++ri;
                }
            }
            if (ri<rows) ++res;
        }

        return res;


    }
};