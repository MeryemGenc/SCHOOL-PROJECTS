#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        ~Zombie();
        Zombie *newZombie(std::string name);
        void randomChump(std::string name);
        void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

/*
**bunları neden tekraran burada tanımladık?
    1 kez sil ve çaılıştırmayı DENE.

    // buraya eklediğimiz fonksiyoları obje oluşturmaddan da kullanabiliyoruz.
    // class içinde kalanları sadece obje ile kullanabiliyoruz. YOOOO KULLANABİLİYORUZ. ne alaka olim.
*/

/*
"Stack" ve "heap," bilgisayar bilimlerinde bellek yönetimi konseptlerini ifade eden terimlerdir. İşletim sistemleri ve programlama dilleri, bu iki bellek türünü farklı amaçlar için kullanır.

Stack (Yığın):
Yapı ve Çalışma Mantığı:

Yığında bellek, sıralı bir yapıda ve LIFO (Last In, First Out) prensibine göre çalışan bir veri yapısıdır. En son eklenen öğe, yığından en önce çıkar.
Yığın, genellikle işletim sistemi tarafından yönetilir ve otomatik olarak tahsis edilip serbest bırakılır.
Kullanım Amaçları:

Fonksiyon çağrıları ve yerel değişkenler gibi kısa ömürlü veriler için kullanılır.
Yığın, genellikle sabit boyutlu veri yapıları ve işlev çağrıları için ayrılır ve verilerin sıralı bir şekilde saklanmasını sağlar.
Heap (Yığın):
Yapı ve Çalışma Mantığı:

Yığın, serbest bellek havuzu olarak adlandırılır. Bu bellek, program tarafından ihtiyaç duyulduğunda elle tahsis edilip serbest bırakılmalıdır.
Yığın, dinamik olarak büyüyebilen ve daralabilen bir yapıya sahiptir.
Kullanım Amaçları:

Yığın, dinamik veri yapıları ve nesneler için kullanılır. Örneğin, dinamik olarak boyutlandırılan diziler, linked list'ler, nesneler gibi veri yapıları heap üzerinde yer alır.
Heap, genellikle programın çalışma süresi boyunca sürekli değişen ve yaşam süresi belirsiz olan verileri barındırır.
Farklar:
Veri Ömrü:

Stack, genellikle kısa ömürlü verileri (yerel değişkenler, fonksiyon çağrıları) saklar.
Heap, genellikle daha uzun süreli yaşam süresine sahip, dinamik olarak tahsis edilen veri yapılarını saklar.
Yapı ve Kullanım:

Stack, LIFO yapısına sahiptir ve otomatik olarak yönetilir.
Heap, dinamik olarak tahsis edilen belleği barındırır ve genellikle program tarafından yönetilir.
Bellek Yönetimi:

Stack'te bellek yönetimi otomatiktir ve işletim sistemi tarafından sağlanır.
Heap'te bellek yönetimi genellikle programcı tarafından elle yapılır.
Bellek Boyutu:

Stack, genellikle sabit bir boyuta sahiptir ve genellikle sınırlıdır.
Heap, programın mevcut bellek durumuna bağlı olarak dinamik olarak büyüyebilir veya daralabilir.
Genel olarak, stack ve heap, programın bellek kullanımının yönetilmesinde farklı amaçlar için kullanılır ve programlama dilleri bu iki bellek türünü etkili bir şekilde kullanmak için farklı yöntemler sağlar.
*/

#endif