int rand()
{
	static int index = 0;
	int nums[] = {8, 8, 7, 9, 23, 74};

	return (nums[index++]);
}
