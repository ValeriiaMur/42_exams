int find_sum(int *arr, int n)
{
	int sum = 0;

	for (int i = 0;i < n; i++)
	{
		sum += arr[i];
	}
	return (sum);
}

int		find_pivot(int *arr, int n)
{
	int pivot = -1;
	int sum = find_sum(arr, n);
	int count = 0;

	for (int i = 0; (pivot == -1 && i < n); i++)
	{
		sum -= arr[i];
		pivot = (count  == sum) ? i : -1;
		count += arr[i];
	}	
	return (pivot);
}
