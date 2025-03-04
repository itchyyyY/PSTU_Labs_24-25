#include <iostream>
#include <string>
#include <cmath>
#include <cstdarg>

using namespace std;

int bin_to_dec(const string& bin)
{
	int dec = 0;
	int bin_len = bin.length();

	for (int i = bin_len - 1; i >= 0; --i)
	{
		if (bin[i] == '1')
		{
			dec += pow(2, (bin_len - i - 1));
		}
	}

	return dec;
}

string dec_to_ter(int dec)
{
	if (dec == 0) { return "0"; }
	else
	{
		string ter;

		while (dec != 0)
		{
			ter = to_string(dec % 3) + ter;
			dec /= 3;
		}

		return ter;
	}
}

void print_bin_to_ter(int args_c, ...)
{
	va_list args;
	va_start(args, args_c);

	for (int i = 0; i < args_c; ++i)
	{
		cout << dec_to_ter(bin_to_dec(va_arg(args, const char*))) << ' ';
	}
	cout << endl;

	va_end(args);
}

int main()
{
	print_bin_to_ter(3, "1011", "1101", "10000101");
	print_bin_to_ter(6, "10", "011101", "11111111111", "1011111", "11011", "11");
	print_bin_to_ter(7, "1101101", "100", "10010110", "1011111", "11011", "11", "110101010");

	return 0;
}