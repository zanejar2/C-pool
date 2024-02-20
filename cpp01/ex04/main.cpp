#include<iostream>
#include<fstream>
#include<string>

void ft_replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream input_file(filename);
	if (!input_file.is_open()){
		std::cout << "Failed to open file"<<std::endl;
		exit (0);
	}
	if (s1.empty() || s2.empty()){
		std::cout<<"Empty string"<<std::endl;
		exit(0);
	}
	std::string line;
	std::ofstream output_file(filename + ".replace"); 
	while(std::getline(input_file, line)){
		int pos = 0;
		while ((pos = line.find(s1, pos)) != -1)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		output_file << line<< std::endl;
	}
	input_file.close();
	output_file.close();
}

int main(int ac, char **av)
{
	if (ac != 4)
	{	
		std::cout<<"Wrong number of arguments!"<<std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	ft_replace(filename, s1, s2);
	return 0;
}


