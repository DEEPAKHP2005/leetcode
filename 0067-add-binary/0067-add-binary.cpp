class Solution {
public:
    string addBinary(string a, string b) {

        string ans = "";

        int n = a.size();
        int m = b.size();

        int i = n - 1;
        int j = m - 1;
        int carry = 0;

        while(i >= 0 || j >= 0) {

            int sum = carry;

            if(i >= 0) {
                sum += a[i] - '0';
                i--;
            }

            if(j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            if(sum == 0 || sum == 2) {
                ans += '0';
                carry = (sum == 2);
            }
            else {
                ans += '1';
                carry = (sum == 3);
            }
        }

        if(carry == 1) {
            ans += '1';
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
