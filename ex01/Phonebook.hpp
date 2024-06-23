#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class Phonebook
{
private:
	Contact contacts[8];

public:
	Phonebook();
	~Phonebook();

	int		get_nb_contacts();
	int		search_contact();
	int		add_contact();
	void	print_contact();
	void	print_info(int index);
	
	std::string truncate(std::string str);
};

#endif
