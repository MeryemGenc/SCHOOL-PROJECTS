#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl();
        ~Harl();
        void complain( std::string level );
};

typedef void (Harl::*t_func) ( void ); // örn: info (int ) olsaydı? nasıl olurdu
// t_func: Harl class ına ait üye fonksiyonların adreslerini/pointerlarını tutacak olan 1 tür.
// t_func myFunctionPointer = &Harl::debug; => böyle de kullanılabilir.

/*
    Bu, işaretçi türünün tanımlanmasında kullanılan bir C++ dil özelliğidir. Fonksiyon üye işaretçilerini tanımlarken, bu işaretçi türü, sınıfın kapsamında değil, sınıf dışında tanımlanır. Bu, C++ dilindeki syntax ve tür sisteminden kaynaklanan bir durumdur.

    typedef void (Harl::*t_func) ( void ); ifadesinde Harl::* kısmı, işaretçinin bir sınıf üyesine işaret ettiğini belirtir. Yani, t_func tipi, Harl sınıfının bir üye fonksiyonuna işaret eden bir türdür. Ancak bu tür tanımı sınıfın kapsamında değil, sınıf dışında yapılır. Bu nedenle, typedef ifadesi sınıfın içinde değil, dışında kullanılır.

    Bu durum, C++ dilinde fonksiyon üye işaretçilerinin nasıl tanımlandığına dair bir dil özelliğidir. Bu tanım şekli, işaretçi türünün sınıfın kendisinden bağımsız bir tür olarak ele alınmasını sağlar.
*/

#endif