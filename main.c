#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dataCnt = 0;
	scanf("%d", &dataCnt);

	for (int i = 0; i < dataCnt; i++)
	{
		int isError = 0;
		int left = 0;
		int right = 0;
		char dataStr[50];
		scanf("%s",dataStr);

		for (int j = 0; dataStr[j] != '\0'; j++)
		{
			if (dataStr[j] == '(')
				left++;
			if (dataStr[j] == ')')
				right++;

			if (left < right)
			{
				isError++;
				break;
			}
		}

		if (left != right || isError > 0)
		{
			printf("NO\n");
			continue;
		}

		printf("YES\n");
	}

	return 0;
}
