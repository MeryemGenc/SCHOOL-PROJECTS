#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    int i = rand();
    if (i % 3 == 0)
        return (new A);
    if (i % 3 == 1)
        return (new B);
    return (new C);
}

void identify(Base* p)
{
    if ( dynamic_cast<A*>( p ) )
        std::cout << "Class A" << std::endl;
    else if ( dynamic_cast<B*>( p ) )
        std::cout << "Class B" << std::endl;
    else if ( dynamic_cast<C*>( p ) )
        std::cout << "Class C" << std::endl;
    else
        std::cout << "Unknown Class" << std::endl;
}

void identify(Base& p)
{
    try
	{
        A& a = dynamic_cast<A&>( p );
        std::cout << "Class A" << std::endl;
        (void)a;
    }
	catch(const std::exception& e) {}
    try
	{
        B& b = dynamic_cast<B&>( p );
        std::cout << "Class B" << std::endl;
        (void)b;
    }
	catch( const std::exception& e ) {}
    try
	{
        C& c = dynamic_cast<C&>( p );
        std::cout << "Class C" << std::endl;
        (void)c;
    }
	catch( const std::exception& e ) {}
}

int     main( void )
{
    srand(time(0));
    Base*   a = generate();
    Base*   b = generate();
    Base*   c = generate();
    Base*   d = generate();

    std::cout << "a* = "; identify( a );
    std::cout << "a& = "; identify( *a ); std::cout << std::endl;

    std::cout << "b* = "; identify( b );
    std::cout << "b& = "; identify( *b ); std::cout << std::endl;

    std::cout << "c* = "; identify( c );
    std::cout << "c& = "; identify( *c ); std::cout << std::endl;

    std::cout << "d* = "; identify( d );
    std::cout << "d& = "; identify( *d ); std::cout << std::endl;

    delete a;
    delete b;
    delete c;
    delete d;

    return (0);
}
