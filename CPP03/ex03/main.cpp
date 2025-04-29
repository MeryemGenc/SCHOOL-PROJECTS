#include "FragTrap.hpp"

int main( void )
{
    FragTrap aaa( "aaa" );

    aaa.attack( "fire" );
    aaa.takeDamage( 10 );
    aaa.beRepaired( 10 );
    aaa.highFivesGuys();

    // diamondtrap çağır dene bişeyler yap - whiami() çağır bak



    /*
    -Wshadow ve -Wno-shadow c++ flagleri nedir neden kullanılır:


    -Wshadow ve -Wno-shadow GCC (GNU Compiler Collection) derleyici flag'leri, değişken isimlerinin gölgelenmesi durumunda uyarıları kontrol etmek için kullanılır.

-Wshadow:

Bu flag, derleyiciye değişken isimlerinin kapsam içinde başka bir değişken ismi tarafından gölgelenmesi durumunda uyarı vermesini söyler.
Örneğin, aşağıdaki kodda içteki i değişkeni, dıştaki i değişkenini gölgelemektedir:
cpp
Copy code
int main() {
    int i = 42;
    {
        int i = 5;  // Bu durumda -Wshadow uyarısı alınabilir.
    }
    return 0;
}
-Wno-shadow:

Bu flag, -Wshadow uyarılarını devre dışı bırakır. Yani, değişken gölgelenmesi uyarılarına karşı derleyicinin sessiz olmasını sağlar.
Büyük projelerde veya bazı durumlarda, gölgelenen değişkenlerin bilinçli olarak kullanılması gerektiğinde bu flag tercih edilebilir.
cpp
Copy code
int main() {
    int i = 42;
    {
        int i = 5;  // Bu durumda -Wshadow uyarısı görmezden gelinir.
    }
    return 0;
}
Bu flag'ler, kodun güvenliği ve anlaşılabilirliği açısından yardımcı olabilir, ancak projenin ihtiyaçlarına ve ekibin kodlama standartlarına bağlı olarak kullanılır. Bu flag'leri kullanmak veya kullanmamak genellikle projenin gereksinimlerine bağlıdır.
    */

    return 0;
}