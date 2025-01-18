//https://www.naukri.com/code360/problems/subsequences-of-string_985087?leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h> 
void sub(string str, string out, int index, vector<string>& ans)
{
    //base
    if(index >= str.length())
    {
        if(out.length() > 0)
        ans.push_back(out);
        return;
    }
    // exclude
    sub(str, out, index+1, ans);

    //include
    char ele = str[index];
    out.push_back(ele);
    sub(str, out, index+1, ans);

	
}
vector<string> subsequences(string str){
	string out;
    vector<string> ans;
    int index = 0;
    sub(str, out, index, ans);
    return ans;
	
}
