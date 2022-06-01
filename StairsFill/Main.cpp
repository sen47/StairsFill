#include<iostream>

int main()
{
	const int SIZE(10), MAX_COUNT(100);
	int arr[SIZE][SIZE]{};

	int max(1), min(1), f(0), s(0);
	bool isJ(true);

	for (int count = 0; count < (SIZE*SIZE); ++count)
	{
		arr[f][s] = count;

		if (count < (MAX_COUNT / 2 + SIZE / 2) - 1)
		{
			if (isJ)
			{
				if (s < max)
					++s;
				if (s == max)
				{
					isJ = false;
					++max;
				}
				if (f > 0)
					--f;
			}
			else
			{
				if (f < max)
					++f;
				if (f == max)
				{
					isJ = true;
					++max;
				}
				if (s > 0)
					--s;
			}
		}
		else
		{
			/*max = SIZE - 1;

			if (isJ)
			{
				if (f < max)
					++f;
				if (f == min)
				{
					isJ = true;
					++min;
				}
				if (s > min)
					--s;
			}
			else
			{
				if (s < max)
					++s;
				if (f == min)
				{
					isJ = false;
					++min;
				}
				if (f > min)
					--f;
			}*/
		}
	}

	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
			std::cout << arr[i][j] << '\t';
		std::cout << std::endl;
	}

	return 0;
}