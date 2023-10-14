int main()
{
	int arr[] = { 5,6,8,2,4,3,1,7,9,0,10 };
	int len = sizeof(arr) / sizeof(arr[0]), z = len, tmp = 0;
	for (int k = 0; k < z; k++, len--)
	{
		for (int i = 0; i < len - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;

			}

		}
	}

	for (int j = 0; j < z; j++)
	{
		cout << arr[j] << "\t";
	}
}