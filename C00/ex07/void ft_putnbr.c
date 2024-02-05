#include <unistd.h>
void	r(int nb)
{
    char a= nb + 0;
    
    write(1, &a, 1);   
}


int main(){
    
    r(47);
    return 0;
    
}
