//Open brackets must be closed by the same type of brackets.
//Open brackets must be closed in the correct order.
//Every close bracket has a corresponding open bracket of the same type.

//make an empty stack
//transerse the inpout characters
//if the current character is an opening bracket push to the stack
//if the curent charater is a closing brackt and it is the same as the we will pop it off the stack. if we see a close braket we will return false,
//after we go through and if the stack is empty we will return ture.otherwise we will return false

class Solution 
{
public:
    bool isValid(string s) 
    {  
        if(s.size() ==  1)
        {
            return false;
        }
        stack<char> sk;
        int i = 0;

        sk.push(s[i]);
        if(sk.top() == ']' || sk.top() == ')' || sk.top() == '}')
        {
            return false;
        }
        i++;

        while(i < s.size())
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') 
            {
                sk.push(s[i]);
            }
            else
            {
                 if(sk.empty() || 
                 (s[i] == ')' && sk.top() != '(') || 
                 (s[i] == '}' && sk.top() != '{') || 
                 (s[i] == ']' && sk.top() != '[')) 
                    {
                        return false;
                    }
                sk.pop();
            }
            i++;
        }
       return sk.empty();  
    }
};