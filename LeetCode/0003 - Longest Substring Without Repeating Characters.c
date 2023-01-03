int lengthOfLongestSubstring(char* s) // going to improve this code
{
    int max = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        int count = 0;
		
        char str[len + 1 - i];

        for (int j = i; j < len; j++)
        {
            int flag = 1;

            for (int k = 0; k < j - i; k++)
            {
                if (str[k] == s[j])
                {
                    flag = 0;
                    
                    break;
                }
            }
            
            if (flag == 0)
            {
            	break;
			}
            
            str[count++] = s[j];
        }
        
        if (count == len)
        {
        	return count;
		}
        
        if (count > max)
        {
            max = count;
        }
    }

    return max;
}
