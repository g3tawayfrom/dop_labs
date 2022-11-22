#include <stdio.h>

int main9() {
	char s[10];
	gets(s);

	int n = 0;
	int h = 0;
	int l = 0;

	for (int i = 0; i < 10; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			l++;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			h++;
		else if (s[i] >= '0' && s[i] <= '9')
			n++;
	}

	printf("%d %d %d", n, h, l);

	int x;
	scanf("%d", &x);

	switch (x)
	{
	case 0:
		printf("Zero");
		break;
	case 1:
		printf("One");
		break;
	case 2:
		printf("Two");
		break;
	case 3:
		printf("Three");
		break;
	case 4:
		printf("Four");
		break;
	case 5:
		printf("Five");
		break;
	case 6:
		printf("Six");
		break;
	case 7:
		printf("Seven");
		break;
	case 8:
		printf("Eight");
		break;
	case 9:
		printf("Nine");
		break;
	}
}