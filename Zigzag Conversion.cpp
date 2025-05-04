class Solution {
public:
    string convert(string s, int numRows) 
    {
        if (numRows == 1 || s.size() <= numRows)
        {
            return s;
        }

        vector<string> rows(numRows);
        int row = 0;
        bool down = true;

        for (int i = 0; i < s.length(); i++)
        {
            rows[row] += s[i];

            if (row == 0)
                down = true;
            else if (row == numRows - 1)
                down = false;

            row += (down ? 1 : -1);
        }

        string result = "";
        for (int i = 0; i < numRows; i++)
        {
            result += rows[i];
        }

        return result;
    }
};
