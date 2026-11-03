int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
	int	i = 0;
	int	j = 0;
	while (i < numsSize)
	{
		j = i + 1;
		while (j < numsSize)
		{
			if (nums[i] + nums[j] == target)
			{
				int *arr = malloc(sizeof(int) * 2);
                if (!arr)
                {
                    returnSize = 0;
                    return NULL;
                }
				arr[0] = i;
				arr[1] = j;
				*returnSize = 2;
				return arr;
			}
			j++;
		}
		i++;
	}
	*returnSize = 0;
	return NULL;
}