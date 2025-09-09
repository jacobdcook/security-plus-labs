#include <stdio.h>
#include <string.h>

int main() {
    char buffer[8];
    int admin_flag = 1979;
    
    printf("Enter your input: ");
    gets(buffer);
    
    printf("Buffer: %s\n", buffer);
    printf("Admin flag: %d\n", admin_flag);
    
    if (admin_flag > 24000) {
        printf("Access granted - Administrator privileges!\n");
    } else {
        printf("Access denied - User privileges only\n");
    }
    
    return 0;
}
