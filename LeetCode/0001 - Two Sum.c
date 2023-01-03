int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize = 2;

    int* d = NULL;

    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                d = (int*) malloc(sizeof(int) * 2);
                d[0] = i;
                d[1] = j;

                i = numsSize;
                break;
            }
        }
    }

    return d;
}
