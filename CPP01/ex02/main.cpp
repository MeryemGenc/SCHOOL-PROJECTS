#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << &str << " => " << str << std::endl;
    std::cout << stringPTR << " => " << *stringPTR << std::endl;
    std::cout << &stringREF << " => " << stringREF << std::endl;

    return 0;
}

/*
******referans& pointer arasındaki farklar?

Pointer (İşaretçi):

Pointer, bir değişkenin bellek adresini içeren bir değişken türüdür.
Pointer'lar, başlangıçta genellikle nullptr veya NULL ile başlatılır.
Bellekteki değeri almak için "dereferans" (*) operatörü kullanılır.
Pointer, farklı bellek adreslerine yeniden atanabilir.




Referans:

Referans, mevcut bir değişkenin başka bir ismi olarak düşünülebilir.
Bir referansın NULL veya nullptr değeri yoktur; her zaman bir değişkeni referans almalıdır.
Referanslar, doğrudan bellek adresine değil, başka bir değişkenin referansına yönlendirilir.
Bu nedenle, referanslar üzerinden dereferans işlemi (*) kullanılmaz.

Referanslar, başlangıçta bir değer ile tanımlanmalıdır ve daha sonra başka bir değişkeni referans yapabilirler.
Bir referansın başka bir referansa atanması mümkün değildir

Bir kez başlatıldığında, referans bir değişkene başka bir değişkeni referans yaparak yeniden atanamaz.
Referans, tanımlandığı değişken üzerinden başka bir değişkene referans yapmaya devam eder.

*/



