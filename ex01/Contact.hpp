#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	public:

    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    Contact( void );  // Constructor
    ~Contact( void );
};
#endif