int solve(string strToEvaluate)
{
    int alphabets = 26;
    long long answer = 0;
    map<int, int> mp;
    mp[0] = 1;
    int x = 0;
    for (auto &i : strToEvaluate)
    {
        int shift = i - 'a';
        x ^= 1 << shift;
        answer += mp[x];

        for (int j = 0; j < alphabets; ++j)
        {
            answer += mp[x ^ (1 << j)];
        }

        mp[x] += 1;
    }

    return answer;
}