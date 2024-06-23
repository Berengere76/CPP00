#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int i = 0;
	int j = -1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(++i < argc)
		{
			j = -1;
			while(argv[i][++j])
				std::cout << (char)toupper(argv[i][j]);	
		}
	}
	std::cout << std::endl;
	return (0);
}
