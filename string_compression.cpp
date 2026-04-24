#include <bits/stdc++.h>
using namespace std;
int compress(vector<char> &chars)
{
    int n = chars.size();
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = chars[i];
        int count = 0;
        while (i < n && chars[i] == ch)
        {
            count++;
            i++;
        }
        if (count == 1)
        {
            chars[idx++] = ch;
        }
        else
        {
            chars[idx++] = ch;
            string str = to_string(count);
            for (char dig : str)
            {
                chars[idx++] = dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}
int main()
{
    vector<char> chh = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int len = compress(chh);
    cout << "compressed lengths: " << len << endl;
    cout << "compressed Array: ";
    for (int i = 0; i < len; i++)
    {
        cout << chh[i] << "";
    }
    return 0;
}