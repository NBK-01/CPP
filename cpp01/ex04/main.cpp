
#include "./headers/main.h"

static int	error_check_in(std::ifstream &file)
{
	if (file.fail())
	{
		if (errno == ENOENT)
			std::cerr << RED FILE_ERROR << RESET << std::endl;
		else if (errno == EACCES)
			std::cerr << RED FILE_ERROR2 << RESET << std::endl;
		else if (errno == EISDIR)
			std::cerr << RED FILE_ERROR3 << RESET << std::endl;
		return (1);
	}
	if (file.peek() == EOF)
	{
		std::cerr << RED FILE_ERROR4 << RESET << std::endl;
		return (1);
	}
	return (0);
}

static void	error_check_out(std::ofstream &file)
{
	if (file.fail())
	{
		if (errno == ENOENT)
			std::cerr << RED FILE_ERROR << RESET << std::endl;
		else if (errno == EACCES)
			std::cerr << RED FILE_ERROR2 << RESET << std::endl;
		else if (errno == EISDIR)
			std::cerr << RED FILE_ERROR3 << RESET << std::endl;
	}
	return ;
}


void	ft_replace(char **av, str &buf, std::ofstream &outfile)
{
	int					pos;
	int					size;

	outfile.open((str(av[1]) + ".replace").c_str());
	error_check_out(outfile);
	for (int i = 0; i < (int)buf.size(); i++)
	{
		pos = buf.find(av[2], i);
		if (pos == i)
		{
			size = (str(av[2]).size() - 1);
			outfile << av[3];
			i += size;
		}
		else
			outfile << buf[i];
	}
	outfile.close();
	return ;
}

int main(int ac, char **av)
{
	char		  c;
	std::ifstream file;
	str			  buf;

	if (ac != 4)
	{
		std::cout << RED << USAGE << RESET << std::endl;
		return (1);
	}
	file.open(av[1]);
	if (error_check_in(file))
		return(1);
	while ((!file.eof()) && file >> std::noskipws >> c)
		buf += c;
	file.close();
	std::ofstream outfile;
	ft_replace(av, buf, outfile);
	return (0);
}

