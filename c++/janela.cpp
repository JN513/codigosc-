#include <bits/stdc++.h>

using namespace std;

int main()
{
	int v[3];
	int r, temp;

	for (int i = 0; i < 3; ++i)
	{
		cin >> v[i];
	}

	sort(v, v+3);

	r = v[0]*100;

	if(v[1] > (v[0] + 200))
	{
		r += (v[1]- (v[0]+200))*100;
		temp = 0;
	}
	else
	{
		temp = (v[1] + 200) - (v[0] + 200);
	}

	if(v[2] > v[1] + 200 && temp == 0 && (v[2] + 200) == 600)
	{
		r += (v[2]- (v[1]+200))*100;
	}

	else
	{

		if((v[2] + 200) > 600 && temp == 0)
		{
			temp = (v[2] + 200) - 600;
			r+= ((600+temp) - (v[2] + 200))*100;
		}

		else
		{
			if ((v[2] + 200) < 600 && temp == 0)
			{
				r+= (600 - (v[2] + 200))*100;
			}
			else
			{
				if(v[2] > v[1] + 200 && temp != 0 && (v[2] + 200) == 600)
				{
					r += (v[2]- (v[1]+200))*100;
					r += (v[2] - (v[0] + 200 + temp)) * 100;
				}
				else
				{
					if((v[2] + 200) > 600 && temp != 0)
					{
						temp = (v[2] + 200) - 600;
						r+= ((600+temp) - (v[2] + 200))*100;
						cout << r << endl;
						r += (v[2] - (v[1] + 200) - (v[0] + 200)) * 100;
					}
					else
					{
						if ((v[2] + 200) < 600 && temp != 0)
						{
							r+= (600 - (v[2] + 200))*100;
							r += (v[2] - (v[1] + 200) - (v[0] + 200)) * 100;
						}
					}
				}
			}
		}
	}
	cout << r;

	return 0;
}