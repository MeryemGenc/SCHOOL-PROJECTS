#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int i = 0;
    t_func funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string choices[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (i < 4 && choices[i].compare(level)) // doğru mu bu compare() kullanımı??
        i++;
    if (i < 4)
        (this->*funcs[i])();
}


/*

1- &Harl: neden referance kullanılmış       2- t_func nedir?             3- funcs: t_func tipinde 1 dizi midir?
ChatGPT
&Harl:: ifadesi, bir sınıfın üye fonksiyonlarına işaret etmek için kullanılır. Burada & işlemcisi, bir işaretçi (pointer) oluşturmak anlamına gelir. Yani &Harl::debug ifadesi, Harl sınıfının debug adlı üye fonksiyonunun işaretçisini oluşturur. Bu işaretçi, ilgili üye fonksiyonu temsil eder.

t_func bir türdür ve bu tür, sınıf üye fonksiyonlarına işaret eden işlev göstericileri tutan bir türdür. t_func türü, aşağıdaki gibi tanımlanmış olabilir:

cpp
Copy code
typedef void (Harl::*t_func)();
Bu ifade, t_func adlı türün, Harl sınıfının üye fonksiyonlarına işaret eden işlev göstericilerini tuttuğunu belirtir.

Evet, funcs, t_func tipinde bir dizi olarak tanımlanmıştır. t_func funcs[] ifadesi, funcs adlı bir dizi tanımlar ve bu dizi, t_func türünde işlev göstericilerini tutar. Tanımlanan dizi, &Harl::debug, &Harl::info, &Harl::warning, ve &Harl::error ifadeleriyle başlatılır. Bu sayede funcs dizisi, Harl sınıfının farklı üye fonksiyonlarına işaret eden işlev göstericilerini içerir.

User
t_func: 1 struct mıdır
ChatGPT
Hayır, t_func bir struct değildir. t_func, bir fonksiyon türünü temsil eden bir typedef'dir. typedef void (Harl::*t_func)(); ifadesi, t_func adlı bir tür oluşturur ve bu tür, Harl sınıfının üye fonksiyonlarına işaret eden işlev göstericilerini temsil eder. Yani t_func sadece bir türdür, kendisi bir struct veya sınıf değildir.

*/
