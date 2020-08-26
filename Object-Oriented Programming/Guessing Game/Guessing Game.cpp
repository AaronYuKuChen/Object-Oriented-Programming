
#include <iostream>
#include <cstdlib>
#include<fstream>
#include<string>
using namespace std;


int main(void)
{
	//system("type guess.txt");
	//cout << endl;
	//cout << "============\n";
	
	fstream fin("guess.txt", ios::in);
	//string tem_num;
	//getline(fin, tem_num);
	//cout << tem_num << endl;
	int low, high, ans,guess;
	
	fin >> low;
	fin >> high;
	fin >> ans;
	//cout << low << endl;
	//cout << high << endl;
	//cout << ans << endl;
	double decision = (low + high) / 2;
	cout << "============\n";
	cout << endl;

	cout << "Input a number between " << low << " and " << high << endl;
	cin >> guess;

	while (guess != ans)
	{
		
		if (guess <= decision && guess >= low)
		{
			low = guess;
			cout << "Wrong, the number between " << low << " and " << high << " , try again: " << endl;
		}
		if (guess > decision && guess <= high)
		{
			high = guess;
			cout << "Wrong, the number between " << low << " and " << high << " , try again: " << endl;
		}
		if(guess> high || guess < low)
			cout << "I think you input the outside number, try again!" << endl;
		cin >> guess;
	}

	if (guess == ans)
		cout << "Congraduations!" << endl;

	
	
	fin.close();

	system("pause");
	return 0;
}

